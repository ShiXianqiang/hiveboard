cmd_vmlinux.o := unicore32-linux-ld -EL  -r -o vmlinux.o arch/unicore/kernel/head.o arch/unicore/kernel/init_task.o  init/built-in.o --start-group  usr/built-in.o  arch/unicore/kernel/built-in.o  arch/unicore/mm/built-in.o  arch/unicore/mach-sep0611/built-in.o  kernel/built-in.o  mm/built-in.o  fs/built-in.o  ipc/built-in.o  security/built-in.o  crypto/built-in.o  block/built-in.o  arch/unicore/lib/lib.a  lib/lib.a  arch/unicore/lib/built-in.o  lib/built-in.o  drivers/built-in.o  sound/built-in.o  firmware/built-in.o  net/built-in.o --end-group 
