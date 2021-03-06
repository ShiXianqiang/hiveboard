/*
 * PKUnity AHB-PCI Bridge Registers
 */

/* AHB/PCI fixed physical address for pci addess configuration */
#define PCICFG_BRIBASE          __REG(PKUNITY_PCICFG_BASE + 0x0000) /* PCICFG Bridge Base Reg. */
#define PCICFG_ADDR             __REG(PKUNITY_PCICFG_BASE + 0x0004) /* PCICFG Address Reg. */
#define PCICFG_DATA             __REG(PKUNITY_PCICFG_BASE + 0x0008) /* PCICFG Address Reg. */

/* PCI Bridge configuration space */
#define PCIBRI_ID		__REG(PKUNITY_PCIBRI_BASE + 0x0000)
#define PCIBRI_CMD		__REG(PKUNITY_PCIBRI_BASE + 0x0004)
#define PCIBRI_CLASS		__REG(PKUNITY_PCIBRI_BASE + 0x0008)
#define PCIBRI_LTR		__REG(PKUNITY_PCIBRI_BASE + 0x000C)
#define PCIBRI_BAR0		__REG(PKUNITY_PCIBRI_BASE + 0x0010)
#define PCIBRI_BAR1		__REG(PKUNITY_PCIBRI_BASE + 0x0014)
#define PCIBRI_BAR2		__REG(PKUNITY_PCIBRI_BASE + 0x0018)
#define PCIBRI_BAR3		__REG(PKUNITY_PCIBRI_BASE + 0x001C)
#define PCIBRI_BAR4		__REG(PKUNITY_PCIBRI_BASE + 0x0020)
#define PCIBRI_BAR5		__REG(PKUNITY_PCIBRI_BASE + 0x0024)

#define PCIBRI_PCICTL0		__REG(PKUNITY_PCIBRI_BASE + 0x0100)
#define PCIBRI_PCIBAR0		__REG(PKUNITY_PCIBRI_BASE + 0x0104)
#define PCIBRI_PCIAMR0		__REG(PKUNITY_PCIBRI_BASE + 0x0108)
#define PCIBRI_PCITAR0		__REG(PKUNITY_PCIBRI_BASE + 0x010C)
#define PCIBRI_PCICTL1		__REG(PKUNITY_PCIBRI_BASE + 0x0110)
#define PCIBRI_PCIBAR1		__REG(PKUNITY_PCIBRI_BASE + 0x0114)
#define PCIBRI_PCIAMR1		__REG(PKUNITY_PCIBRI_BASE + 0x0118)
#define PCIBRI_PCITAR1		__REG(PKUNITY_PCIBRI_BASE + 0x011C)
#define PCIBRI_PCICTL2		__REG(PKUNITY_PCIBRI_BASE + 0x0120)
#define PCIBRI_PCIBAR2		__REG(PKUNITY_PCIBRI_BASE + 0x0124)
#define PCIBRI_PCIAMR2		__REG(PKUNITY_PCIBRI_BASE + 0x0128)
#define PCIBRI_PCITAR2		__REG(PKUNITY_PCIBRI_BASE + 0x012C)
#define PCIBRI_PCICTL3		__REG(PKUNITY_PCIBRI_BASE + 0x0130)
#define PCIBRI_PCIBAR3		__REG(PKUNITY_PCIBRI_BASE + 0x0134)
#define PCIBRI_PCIAMR3		__REG(PKUNITY_PCIBRI_BASE + 0x0138)
#define PCIBRI_PCITAR3		__REG(PKUNITY_PCIBRI_BASE + 0x013C)
#define PCIBRI_PCICTL4		__REG(PKUNITY_PCIBRI_BASE + 0x0140)
#define PCIBRI_PCIBAR4		__REG(PKUNITY_PCIBRI_BASE + 0x0144)
#define PCIBRI_PCIAMR4		__REG(PKUNITY_PCIBRI_BASE + 0x0148)
#define PCIBRI_PCITAR4		__REG(PKUNITY_PCIBRI_BASE + 0x014C)
#define PCIBRI_PCICTL5		__REG(PKUNITY_PCIBRI_BASE + 0x0150)
#define PCIBRI_PCIBAR5		__REG(PKUNITY_PCIBRI_BASE + 0x0154)
#define PCIBRI_PCIAMR5		__REG(PKUNITY_PCIBRI_BASE + 0x0158)
#define PCIBRI_PCITAR5		__REG(PKUNITY_PCIBRI_BASE + 0x015C)

#define PCIBRI_AHBCTL0		__REG(PKUNITY_PCIBRI_BASE + 0x0180)
#define PCIBRI_AHBBAR0		__REG(PKUNITY_PCIBRI_BASE + 0x0184)
#define PCIBRI_AHBAMR0		__REG(PKUNITY_PCIBRI_BASE + 0x0188)
#define PCIBRI_AHBTAR0		__REG(PKUNITY_PCIBRI_BASE + 0x018C)
#define PCIBRI_AHBCTL1		__REG(PKUNITY_PCIBRI_BASE + 0x0190)
#define PCIBRI_AHBBAR1		__REG(PKUNITY_PCIBRI_BASE + 0x0194)
#define PCIBRI_AHBAMR1		__REG(PKUNITY_PCIBRI_BASE + 0x0198)
#define PCIBRI_AHBTAR1		__REG(PKUNITY_PCIBRI_BASE + 0x019C)
#define PCIBRI_AHBCTL2		__REG(PKUNITY_PCIBRI_BASE + 0x01A0)
#define PCIBRI_AHBBAR2		__REG(PKUNITY_PCIBRI_BASE + 0x01A4)
#define PCIBRI_AHBAMR2		__REG(PKUNITY_PCIBRI_BASE + 0x01A8)
#define PCIBRI_AHBTAR2		__REG(PKUNITY_PCIBRI_BASE + 0x01AC)
#define PCIBRI_AHBCTL3		__REG(PKUNITY_PCIBRI_BASE + 0x01B0)
#define PCIBRI_AHBBAR3		__REG(PKUNITY_PCIBRI_BASE + 0x01B4)
#define PCIBRI_AHBAMR3		__REG(PKUNITY_PCIBRI_BASE + 0x01B8)
#define PCIBRI_AHBTAR3		__REG(PKUNITY_PCIBRI_BASE + 0x01BC)
#define PCIBRI_AHBCTL4		__REG(PKUNITY_PCIBRI_BASE + 0x01C0)
#define PCIBRI_AHBBAR4		__REG(PKUNITY_PCIBRI_BASE + 0x01C4)
#define PCIBRI_AHBAMR4		__REG(PKUNITY_PCIBRI_BASE + 0x01C8)
#define PCIBRI_AHBTAR4		__REG(PKUNITY_PCIBRI_BASE + 0x01CC)
#define PCIBRI_AHBCTL5		__REG(PKUNITY_PCIBRI_BASE + 0x01D0)
#define PCIBRI_AHBBAR5		__REG(PKUNITY_PCIBRI_BASE + 0x01D4)
#define PCIBRI_AHBAMR5		__REG(PKUNITY_PCIBRI_BASE + 0x01D8)
#define PCIBRI_AHBTAR5		__REG(PKUNITY_PCIBRI_BASE + 0x01DC)

#define PCIBRI_CTLx_AT          FIELD(1, 1, 2)
#define PCIBRI_CTLx_PREF        FIELD(1, 1, 1)
#define PCIBRI_CTLx_MRL         FIELD(1, 1, 0)

#define PCIBRI_BARx_ADDR        FIELD(0xFFFFFFFC, 30, 2)
#define PCIBRI_BARx_IO          FIELD(1, 1, 0)
#define PCIBRI_BARx_MEM         FIELD(0, 1, 0)

#define PCIBRI_CMD_IO           FIELD(1, 1, 0)
#define PCIBRI_CMD_MEM          FIELD(1, 1, 1)
