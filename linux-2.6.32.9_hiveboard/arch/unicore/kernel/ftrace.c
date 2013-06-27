/*
 * linux/arch/unicore/kernel/ftrace.c
 *
 * Code specific to PKUnity SoC and UniCore ISA
 * Fragments that appear the same as the files in arm or x86
 *
 * Copyright (C) 2001-2008 GUAN Xue-tao
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * Dynamic function tracing support.
 *
 * Defines low-level handling of mcount calls when the kernel
 * is compiled with the -pg flag. When using dynamic ftrace, the
 * mcount call-sites get patched lazily with NOP till they are
 * enabled. All code mutation routines here take effect atomically.
 */

#include <linux/ftrace.h>

#include <asm/cacheflush.h>
#include <asm/ftrace.h>

#define PC_OFFSET      4
#define BL_OPCODE      0xbd000000
#define BL_OFFSET_MASK 0x00ffffff

static unsigned long bl_insn;
static const unsigned long NOP = 0x1a000000; /* mov r0, r0 */

unsigned char *ftrace_nop_replace(void)
{
	return (char *)&NOP;
}

/* construct a branch (BL) instruction to addr */
unsigned char *ftrace_call_replace(unsigned long pc, unsigned long addr)
{
	long offset;

	offset = (long)addr - (long)(pc + PC_OFFSET);
	if (unlikely(offset < -33554432 || offset > 33554428)) {
		/* Can't generate branches that far (32M Bytes). Ftrace
		 * doesn't generate branches outside of kernel text.
		 */
		WARN_ON_ONCE(1);
		return NULL;
	}
	offset = (offset >> 2) & BL_OFFSET_MASK;
	bl_insn = BL_OPCODE | offset;
	return (unsigned char *)&bl_insn;
}

int ftrace_modify_code(unsigned long pc, unsigned char *old_code,
		       unsigned char *new_code)
{
	unsigned long err = 0, replaced = 0, old, new;

	old = *(unsigned long *)old_code;
	new = *(unsigned long *)new_code;

	__asm__ __volatile__ (
		"1:  ldr    %1, [%2]  \n"
		"    cmp    %1, %4    \n"
                "    bne    201f      \n"
                "2:  str    %3, [%2]  \n"
                "    b      3f        \n"
                "201:cmp    %1, %3    \n"
		"    movne  %0, #2    \n"
		"3:\n"

		".section .fixup, \"ax\"\n"
		"4:  mov  %0, #1  \n"
		"    b    3b      \n"
		".previous\n"

		".section __ex_table, \"a\"\n"
		"    .long 1b, 4b \n"
		"    .long 2b, 4b \n"
		".previous\n"

		: "=r"(err), "=r"(replaced)
		: "r"(pc), "r"(new), "r"(old), "0"(err), "1"(replaced)
		: "memory");

	if (!err && (replaced == old))
		flush_icache_range(pc, pc + MCOUNT_INSN_SIZE);

	return err;
}

int ftrace_update_ftrace_func(ftrace_func_t func)
{
	int ret;
	unsigned long pc, old;
	unsigned char *new;

	pc = (unsigned long)&ftrace_call;
	memcpy(&old, &ftrace_call, MCOUNT_INSN_SIZE);
	new = ftrace_call_replace(pc, (unsigned long)func);
	ret = ftrace_modify_code(pc, (unsigned char *)&old, new);
	return ret;
}

/* run from ftrace_init with irqs disabled */
int __init ftrace_dyn_arch_init(void *data)
{
	ftrace_mcount_set(data);
	return 0;
}
