/*
 * Fujitsu MB862xx Graphics Controller Registers/Bits
 */

#ifndef _MB862XX_REG_H
#define _MB862XX_REG_H

#ifdef MB862XX_MMIO_BOTTOM
#define MB862XX_MMIO_BASE	0x03fc0000
#else
#define MB862XX_MMIO_BASE	0x01fc0000
#endif
#define MB862XX_I2C_BASE	0x0000c000
#define MB862XX_DISP_BASE	0x00010000
#define MB862XX_CAP_BASE	0x00018000
#define MB862XX_DRAW_BASE	0x00030000
#define MB862XX_GEO_BASE	0x00038000
#define MB862XX_PIO_BASE	0x00038000
#define MB862XX_MMIO_SIZE	0x40000

/* Host interface/pio registers */
#define GC_IST			0x00000020
#define GC_IMASK		0x00000024
#define GC_SRST			0x0000002c
#define GC_CCF			0x00000038
#define GC_CID			0x000000f0
#define GC_REVISION		0x00000084

#define GC_CCF_CGE_100		0x00000000
#define GC_CCF_CGE_133		0x00040000
#define GC_CCF_CGE_166		0x00080000
#define GC_CCF_COT_100		0x00000000
#define GC_CCF_COT_133		0x00010000
#define GC_CID_CNAME_MSK	0x0000ff00
#define GC_CID_VERSION_MSK	0x000000ff

/* define enabled interrupts hereby */
#define GC_INT_EN		0x00000000

/* Memory interface mode register */
#define GC_MMR			0x0000fffc

/* Display Controller registers */
#define GC_DCM0			0x00000000
#define GC_HTP			0x00000004
#define GC_HDB_HDP		0x00000008
#define GC_VSW_HSW_HSP		0x0000000c
#define GC_VTR			0x00000010
#define GC_VDP_VSP		0x00000014
#define GC_WY_WX		0x00000018
#define GC_WH_WW		0x0000001c
#define GC_L0M			0x00000020
#define GC_L0OA0		0x00000024
#define GC_L0DA0		0x00000028
#define GC_L0DY_L0DX		0x0000002c
#define GC_DCM1			0x00000100
#define GC_L0EM			0x00000110
#define GC_L0WY_L0WX		0x00000114
#define GC_L0WH_L0WW		0x00000118
#define GC_DCM2			0x00000104
#define GC_DCM3			0x00000108
#define GC_CPM_CUTC		0x000000a0
#define GC_CUOA0		0x000000a4
#define GC_CUY0_CUX0		0x000000a8
#define GC_CUOA1		0x000000ac
#define GC_CUY1_CUX1		0x000000b0
#define GC_L0PAL0		0x00000400

#define GC_CPM_CEN0		0x00100000
#define GC_CPM_CEN1		0x00200000

#define GC_DCM01_ESY		0x00000004
#define GC_DCM01_SC		0x00003f00
#define GC_DCM01_RESV		0x00004000
#define GC_DCM01_CKS		0x00008000
#define GC_DCM01_L0E		0x00010000
#define GC_DCM01_DEN		0x80000000
#define GC_L0M_L0C_8		0x00000000
#define GC_L0M_L0C_16		0x80000000
#define GC_L0EM_L0EC_24		0x40000000
#define GC_L0M_L0W_UNIT		64

#define GC_DISP_REFCLK_400	400

/* Carmine specific */
#define MB86297_DRAW_BASE		0x00020000
#define MB86297_DISP0_BASE		0x00100000
#define MB86297_DISP1_BASE		0x00140000
#define MB86297_WRBACK_BASE		0x00180000
#define MB86297_CAP0_BASE		0x00200000
#define MB86297_CAP1_BASE		0x00280000
#define MB86297_DRAMCTRL_BASE		0x00300000
#define MB86297_CTRL_BASE		0x00400000
#define MB86297_I2C_BASE		0x00500000

#define GC_CTRL_STATUS			0x00000000
#define GC_CTRL_INT_MASK		0x00000004
#define GC_CTRL_CLK_ENABLE		0x0000000c
#define GC_CTRL_SOFT_RST		0x00000010

#define GC_CTRL_CLK_EN_DRAM		0x00000001
#define GC_CTRL_CLK_EN_2D3D		0x00000002
#define GC_CTRL_CLK_EN_DISP0		0x00000020
#define GC_CTRL_CLK_EN_DISP1		0x00000040

#define GC_2D3D_REV			0x000004b4
#define GC_RE_REVISION			0x24240200

/* define enabled interrupts hereby */
#define GC_CARMINE_INT_EN		0x00000004

/* DRAM controller */
#define GC_DCTL_MODE_ADD		0x00000000
#define GC_DCTL_SETTIME1_EMODE		0x00000004
#define GC_DCTL_REFRESH_SETTIME2	0x00000008
#define GC_DCTL_RSV0_STATES		0x0000000C
#define GC_DCTL_RSV2_RSV1		0x00000010
#define GC_DCTL_DDRIF2_DDRIF1		0x00000014
#define GC_DCTL_IOCONT1_IOCONT0		0x00000024

#define GC_DCTL_STATES_MSK		0x0000000f
#define GC_DCTL_INIT_WAIT_CNT		3000
#define GC_DCTL_INIT_WAIT_INTERVAL	1

/* DRAM ctrl values for Carmine PCI Eval. board */
#define GC_EVB_DCTL_MODE_ADD		0x012105c3
#define GC_EVB_DCTL_MODE_ADD_AFT_RST	0x002105c3
#define GC_EVB_DCTL_SETTIME1_EMODE	0x47498000
#define GC_EVB_DCTL_REFRESH_SETTIME2	0x00422a22
#define GC_EVB_DCTL_RSV0_STATES		0x00200003
#define GC_EVB_DCTL_RSV0_STATES_AFT_RST	0x00200002
#define GC_EVB_DCTL_RSV2_RSV1		0x0000000f
#define GC_EVB_DCTL_DDRIF2_DDRIF1	0x00556646
#define GC_EVB_DCTL_IOCONT1_IOCONT0	0x05550555

#define GC_DISP_REFCLK_533		533

#endif