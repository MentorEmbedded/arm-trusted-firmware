/*
 * Copyright (c) 2019, Intel Corporation. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef AGX_SYSTEMMANAGER_H
#define AGX_SYSTEMMANAGER_H

#define AGX_FIREWALL_SOC2FPGA			0xffd21200
#define AGX_FIREWALL_LWSOC2FPGA			0xffd21300

#define AGX_NOC_FW_L4_PER_SCR_NAND_REGISTER	0xffd21000
#define AGX_NOC_FW_L4_PER_SCR_NAND_DATA		0xffd21004
#define AGX_NOC_FW_L4_PER_SCR_USB0_REGISTER	0xffd2100c
#define AGX_NOC_FW_L4_PER_SCR_USB1_REGISTER	0xffd21010
#define AGX_NOC_FW_L4_PER_SCR_SPI_MASTER0	0xffd2101c
#define AGX_NOC_FW_L4_PER_SCR_SPI_MASTER1	0xffd21020
#define AGX_NOC_FW_L4_PER_SCR_SPI_SLAVE0	0xffd21024
#define AGX_NOC_FW_L4_PER_SCR_SPI_SLAVE1	0xffd21028
#define AGX_NOC_FW_L4_PER_SCR_EMAC0		0xffd2102c
#define AGX_NOC_FW_L4_PER_SCR_EMAC1		0xffd21030
#define AGX_NOC_FW_L4_PER_SCR_EMAC2		0xffd21034
#define AGX_NOC_FW_L4_PER_SCR_SDMMC		0xffd21040
#define AGX_NOC_FW_L4_PER_SCR_GPIO0		0xffd21044
#define AGX_NOC_FW_L4_PER_SCR_GPIO1		0xffd21048
#define AGX_NOC_FW_L4_PER_SCR_I2C0		0xffd21050
#define AGX_NOC_FW_L4_PER_SCR_I2C1		0xffd21054
#define AGX_NOC_FW_L4_PER_SCR_I2C2		0xffd21058
#define AGX_NOC_FW_L4_PER_SCR_I2C3		0xffd2105c
#define AGX_NOC_FW_L4_PER_SCR_I2C4		0xffd21060
#define AGX_NOC_FW_L4_PER_SCR_SP_TIMER0		0xffd21064
#define AGX_NOC_FW_L4_PER_SCR_SP_TIMER1		0xffd21068
#define AGX_NOC_FW_L4_PER_SCR_UART0		0xffd2106c
#define AGX_NOC_FW_L4_PER_SCR_UART1		0xffd21070

#define AGX_NOC_FW_L4_SYS_SCR_DMA_ECC		0xffd21108
#define AGX_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC	0xffd2110c
#define AGX_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC	0xffd21110
#define AGX_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC	0xffd21114
#define AGX_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC	0xffd21118
#define AGX_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC	0xffd2111c
#define AGX_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC	0xffd21120
#define AGX_NOC_FW_L4_SYS_SCR_NAND_ECC		0xffd2112c
#define AGX_NOC_FW_L4_SYS_SCR_NAND_READ_ECC	0xffd21130
#define AGX_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC	0xffd21134
#define AGX_NOC_FW_L4_SYS_SCR_OCRAM_ECC		0xffd21138
#define AGX_NOC_FW_L4_SYS_SCR_SDMMC_ECC		0xffd21140
#define AGX_NOC_FW_L4_SYS_SCR_USB0_ECC		0xffd21144
#define AGX_NOC_FW_L4_SYS_SCR_USB1_ECC		0xffd21148
#define AGX_NOC_FW_L4_SYS_SCR_CLK_MGR		0xffd2114c
#define AGX_NOC_FW_L4_SYS_SCR_IO_MGR		0xffd21154
#define AGX_NOC_FW_L4_SYS_SCR_RST_MGR		0xffd21158
#define AGX_NOC_FW_L4_SYS_SCR_SYS_MGR		0xffd2115c
#define AGX_NOC_FW_L4_SYS_SCR_OSC0_TIMER	0xffd21160
#define AGX_NOC_FW_L4_SYS_SCR_OSC1_TIMER	0xffd21164
#define AGX_NOC_FW_L4_SYS_SCR_WATCHDOG0		0xffd21168
#define AGX_NOC_FW_L4_SYS_SCR_WATCHDOG1		0xffd2116c
#define AGX_NOC_FW_L4_SYS_SCR_WATCHDOG2		0xffd21170
#define AGX_NOC_FW_L4_SYS_SCR_WATCHDOG3		0xffd21174
#define AGX_NOC_FW_L4_SYS_SCR_DAP		0xffd21178
#define AGX_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES	0xffd21190
#define AGX_NOC_FW_L4_SYS_SCR_L4_NOC_QOS	0xffd21194

#define AGX_CCU_NOC_CPU0_RAMSPACE0_0		0xf7004688
#define AGX_CCU_NOC_IOM_RAMSPACE0_0		0xf7018628

#define AGX_SYSMGR_CORE(x)                      (0xffd12000 + (x))

#define SYSMGR_NOC_TIMEOUT			0xc0
#define SYSMGR_NOC_IDLEREQ_SET			0xc4
#define SYSMGR_NOC_IDLEREQ_CLR			0xc8
#define SYSMGR_NOC_IDLEREQ_VAL			0xcc
#define SYSMGR_NOC_IDLEACK			0xd0
#define SYSMGR_NOC_IDLESTATUS			0xd4

#define IDLE_DATA_LWSOC2FPGA			BIT(0)
#define IDLE_DATA_SOC2FPGA			BIT(4)
#define IDLE_DATA_MASK	(IDLE_DATA_LWSOC2FPGA | IDLE_DATA_SOC2FPGA)

#define SYSMGR_BOOT_SCRATCH_COLD_0		0x200
#define SYSMGR_BOOT_SCRATCH_COLD_1		0x204
#define SYSMGR_BOOT_SCRATCH_COLD_2		0x208

#define SYSMGR_CORE_EMAC_0			0x44
#define SYSMGR_CORE_EMAC_1			0x48
#define SYSMGR_CORE_EMAC_2			0x4c

#define SYSMGR_CORE_FPGAINTF_EN_3		0x70
#define SYSMGR_CORE_EMAC_PHY_INTF_SEL_MSK	0x3
#define PHY_INTERFACE_MODE_GMII_MII     0
#define PHY_INTERFACE_MODE_RGMII        1
#define PHY_INTERFACE_MODE_RMII         2
#define PHY_INTERFACE_MODE_RESET        3
#define SYSMGR_CORE_FPGAINTF_EN_3_EMAC_MSK(x)	(1 << (x * 8))

#define DISABLE_BRIDGE_FIREWALL			0x0ffe0101
#define DISABLE_L4_FIREWALL	(BIT(0) | BIT(16) | BIT(24))

void enable_nonsecure_access(void);
void enable_ns_peripheral_access(void);
void enable_ns_bridge_access(void);

#endif
