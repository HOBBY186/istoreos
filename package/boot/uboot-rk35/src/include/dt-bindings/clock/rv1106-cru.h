/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2022 Rockchip Electronics Co. Ltd.
 * Author: Elaine Zhang <zhangqing@rock-chips.com>
 */

#ifndef _DT_BINDINGS_CLK_ROCKCHIP_RV1106_H
#define _DT_BINDINGS_CLK_ROCKCHIP_RV1106_H

/* pll clocks */
#define PLL_APLL		1
#define PLL_DPLL		2
#define PLL_CPLL		3
#define PLL_GPLL		4
#define ARMCLK			5

/* clk (clocks) */
#define PCLK_DDRPHY		11
#define PCLK_DDR_ROOT		12
#define PCLK_DDRMON		13
#define CLK_TIMER_DDRMON	14
#define PCLK_DDRC		15
#define PCLK_DFICTRL		16
#define ACLK_DDR_ROOT		17
#define ACLK_SYS_SHRM		18
#define HCLK_NPU_ROOT		19
#define ACLK_NPU_ROOT		20
#define PCLK_NPU_ROOT		21
#define HCLK_RKNN		22
#define ACLK_RKNN		23
#define PCLK_ACODEC		24
#define MCLK_ACODEC_TX		25
#define MCLK_ACODEC_RX		26
#define CLK_CORE_CRYPTO		27
#define CLK_PKA_CRYPTO		28
#define ACLK_CRYPTO		29
#define HCLK_CRYPTO		30
#define ACLK_DECOM		31
#define PCLK_DECOM		32
#define DCLK_DECOM		33
#define ACLK_DMAC		34
#define PCLK_DSM		35
#define MCLK_DSM		36
#define CCLK_SRC_EMMC		37
#define HCLK_EMMC		38
#define PCLK_GPIO4		39
#define DBCLK_GPIO4		40
#define PCLK_I2C0		41
#define CLK_I2C0		42
#define PCLK_I2C2		43
#define CLK_I2C2		44
#define PCLK_I2C3		45
#define CLK_I2C3		46
#define PCLK_I2C4		47
#define CLK_I2C4		48
#define HCLK_I2S0		49
#define PCLK_DFT2APB		50
#define HCLK_IVE		51
#define ACLK_IVE		52
#define PCLK_PWM0_PERI		53
#define CLK_PWM0_PERI		54
#define CLK_CAPTURE_PWM0_PERI	55
#define PCLK_PERI_ROOT		56
#define ACLK_PERI_ROOT		57
#define HCLK_PERI_ROOT		58
#define CLK_TIMER_ROOT		59
#define ACLK_BUS_ROOT		60
#define HCLK_SFC		61
#define SCLK_SFC		62
#define PCLK_UART0		63
#define CLK_PVTM_CORE		64
#define PCLK_UART1		65
#define CLK_CORE_MCU_RTC	66
#define PCLK_PWM1_PERI		67
#define CLK_PWM1_PERI		68
#define CLK_CAPTURE_PWM1_PERI	69
#define PCLK_PWM2_PERI		70
#define CLK_PWM2_PERI		71
#define CLK_CAPTURE_PWM2_PERI	72
#define HCLK_BOOTROM		73
#define HCLK_SAI		74
#define MCLK_SAI		75
#define PCLK_SARADC		76
#define CLK_SARADC		77
#define PCLK_SPI1		78
#define CLK_SPI1		79
#define PCLK_STIMER		80
#define CLK_STIMER0		81
#define CLK_STIMER1		82
#define PCLK_TIMER		83
#define CLK_TIMER0		84
#define CLK_TIMER1		85
#define CLK_TIMER2		86
#define CLK_TIMER3		87
#define CLK_TIMER4		88
#define CLK_TIMER5		89
#define HCLK_TRNG_NS		90
#define HCLK_TRNG_S		91
#define PCLK_UART2		92
#define HCLK_CPU		93
#define PCLK_UART3		94
#define CLK_CORE_MCU		95
#define PCLK_UART4		96
#define PCLK_DDR_HWLP		97
#define PCLK_UART5		98
#define ACLK_USBOTG		100
#define CLK_REF_USBOTG		101
#define CLK_UTMI_USBOTG		102
#define PCLK_USBPHY		103
#define CLK_REF_USBPHY		104
#define PCLK_WDT_NS		105
#define TCLK_WDT_NS		106
#define PCLK_WDT_S		107
#define TCLK_WDT_S		108
#define CLK_DDR_FAIL_SAFE	109
#define XIN_OSC0_DIV		110
#define CLK_DEEPSLOW		111
#define PCLK_PMU_GPIO0		112
#define DBCLK_PMU_GPIO0		113
#define CLK_PMU			114
#define PCLK_PMU		115
#define PCLK_PMU_HP_TIMER	116
#define CLK_PMU_HP_TIMER	117
#define CLK_PMU_32K_HP_TIMER	118
#define PCLK_I2C1		119
#define CLK_I2C1		120
#define PCLK_PMU_IOC		121
#define PCLK_PMU_MAILBOX	122
#define CLK_PMU_MCU		123
#define CLK_PMU_MCU_RTC		124
#define CLK_PMU_MCU_JTAG	125
#define CLK_PVTM_PMU		126
#define PCLK_PVTM_PMU		127
#define CLK_REFOUT		128
#define CLK_100M_PMU		129
#define PCLK_PMU_ROOT		130
#define HCLK_PMU_ROOT		131
#define HCLK_PMU_SRAM		132
#define PCLK_PMU_WDT		133
#define TCLK_PMU_WDT		134
#define CLK_DFICTRL		135
#define CLK_DDRMON		136
#define CLK_DDR_PHY		137
#define ACLK_DDRC		138
#define CLK_CORE_DDRC_SRC	139
#define CLK_CORE_DDRC		140
#define CLK_50M_SRC		141
#define CLK_100M_SRC		142
#define CLK_150M_SRC		143
#define CLK_200M_SRC		144
#define CLK_250M_SRC		145
#define CLK_300M_SRC		146
#define CLK_339M_SRC		147
#define CLK_400M_SRC		148
#define CLK_450M_SRC		149
#define CLK_500M_SRC		150
#define CLK_I2S0_8CH_TX_SRC	151
#define CLK_I2S0_8CH_TX_FRAC	152
#define CLK_I2S0_8CH_TX		153
#define CLK_I2S0_8CH_RX_SRC	154
#define CLK_I2S0_8CH_RX_FRAC	155
#define CLK_I2S0_8CH_RX		156
#define I2S0_8CH_MCLKOUT	157
#define MCLK_I2S0_8CH_RX	158
#define MCLK_I2S0_8CH_TX	159
#define CLK_REF_MIPI0_SRC	160
#define CLK_REF_MIPI0_FRAC	161
#define CLK_REF_MIPI0_OUT	162
#define CLK_REF_MIPI1_SRC	163
#define CLK_REF_MIPI1_FRAC	164
#define MCLK_REF_MIPI0		165
#define MCLK_REF_MIPI1		166
#define CLK_REF_MIPI0		167
#define CLK_REF_MIPI1		168
#define CLK_UART0_SRC		169
#define CLK_UART0_FRAC		170
#define CLK_UART0		171
#define SCLK_UART0		172
#define CLK_UART1_SRC		173
#define CLK_UART1_FRAC		174
#define CLK_UART1		175
#define SCLK_UART1		176
#define CLK_UART2_SRC		177
#define CLK_UART2_FRAC		178
#define CLK_UART2		179
#define SCLK_UART2		180
#define CLK_UART3_SRC		181
#define CLK_UART3_FRAC		182
#define CLK_UART3		183
#define SCLK_UART3		184
#define CLK_UART4_SRC		185
#define CLK_UART4_FRAC		186
#define CLK_UART4		187
#define SCLK_UART4		188
#define CLK_UART5_SRC		189
#define CLK_UART5_FRAC		190
#define CLK_UART5		191
#define SCLK_UART5		192
#define CLK_VICAP_M0_SRC	193
#define CLK_VICAP_M0_FRAC	194
#define CLK_VICAP_M0		195
#define SCLK_VICAP_M0		196
#define CLK_VICAP_M1_SRC	197
#define CLK_VICAP_M1_FRAC	198
#define CLK_VICAP_M1		199
#define SCLK_VICAP_M1		200
#define DCLK_VOP_SRC		201
#define PCLK_CRU		202
#define PCLK_TOP_ROOT		203
#define PCLK_SPI0		204
#define CLK_SPI0		205
#define SCLK_IN_SPI0		206
#define CLK_UART_DETN_FLT	207
#define HCLK_VEPU		208
#define ACLK_VEPU		209
#define CLK_CORE_VEPU		210
#define CLK_CORE_VEPU_DVBM	211
#define PCLK_GPIO1		212
#define DBCLK_GPIO1		213
#define HCLK_VEPU_PP		214
#define ACLK_VEPU_PP		215
#define HCLK_VEPU_ROOT		216
#define ACLK_VEPU_COM_ROOT	217
#define ACLK_VEPU_ROOT		218
#define PCLK_VEPU_ROOT		219
#define PCLK_VICAP_VEPU		220
#define PCLK_CSIHOST0		221
#define CLK_RXBYTECLKHS_0	222
#define PCLK_CSIHOST1		223
#define CLK_RXBYTECLKHS_1	224
#define PCLK_GPIO3		225
#define DBCLK_GPIO3		226
#define HCLK_ISP3P2		227
#define ACLK_ISP3P2		228
#define CLK_CORE_ISP3P2		229
#define PCLK_MIPICSIPHY		230
#define CCLK_SRC_SDMMC		231
#define HCLK_SDMMC		232
#define CLK_SDMMC_DETN_FLT	233
#define HCLK_VI_ROOT		234
#define ACLK_VI_ROOT		235
#define PCLK_VI_ROOT		236
#define PCLK_VI_RTC_ROOT	237
#define PCLK_VI_RTC_TEST	238
#define PCLK_VI_RTC_PHY		239
#define DCLK_VICAP		240
#define PCLK_VICAP		241
#define ACLK_VICAP		242
#define HCLK_VICAP		243
#define I0CLK_VICAP		244
#define I1CLK_VICAP		245
#define RX0PCLK_VICAP		246
#define RX1PCLK_VICAP		247
#define ISP0CLK_VICAP		248
#define PCLK_GPIO2		249
#define DBCLK_GPIO2		250
#define ACLK_MAC		251
#define PCLK_MAC		252
#define CLK_GMAC0_50M_O		253
#define CLK_GMAC0_TX_50M_O	254
#define CLK_GMAC0_REF_50M	255
#define CLK_GMAC0_TX_50M	256
#define CLK_GMAC0_RX_50M	257
#define ACLK_MAC_ROOT		258
#define CLK_MACPHY		259
#define CLK_OTPC_ARB		260
#define PCLK_OTPC_NS		261
#define CLK_SBPI_OTPC_NS	262
#define CLK_USER_OTPC_NS	263
#define PCLK_OTPC_S		264
#define CLK_SBPI_OTPC_S		265
#define CLK_USER_OTPC_S		266
#define PCLK_OTP_MASK		267
#define CLK_PMC_OTP		268
#define HCLK_RGA2E		269
#define ACLK_RGA2E		270
#define CLK_CORE_RGA2E		271
#define CCLK_SRC_SDIO		272
#define HCLK_SDIO		273
#define PCLK_TSADC		274
#define CLK_TSADC		275
#define CLK_TSADC_TSEN		276
#define ACLK_VO_ROOT		277
#define HCLK_VO_ROOT		278
#define PCLK_VO_ROOT		279
#define ACLK_VOP_ROOT		280
#define HCLK_VOP		281
#define DCLK_VOP		282
#define ACLK_VOP		283
#define CLK_RTC_32K		284
#define PCLK_MAILBOX		291

#define CLK_NR_CLKS		(PCLK_MAILBOX + 1)

#define SCLK_EMMC_DRV		1
#define SCLK_EMMC_SAMPLE	2
#define SCLK_SDMMC_DRV		3
#define SCLK_SDMMC_SAMPLE	4
#define SCLK_SDIO_DRV		5
#define SCLK_SDIO_SAMPLE	6

#define CLK_NR_GRF_CLKS		(SCLK_SDIO_SAMPLE + 1)

/********Name=PMUSOFTRST_CON00,Offset=0xA00********/
#define SRST_P_I2C1		3
#define SRST_I2C1		4
#define SRST_H_PMU_BIU		6
#define SRST_P_PMU_BIU		7
#define SRST_H_PMU_SRAM		8
#define SRST_PMU_MCU		9
#define SRST_PMU_MCU_PWRUP	10
#define SRST_PMU_MCU_CPU	11
#define SRST_T_PMU_MCU_CPU	12
/********Name=PMUSOFTRST_CON01,Offset=0xA04********/
#define SRST_P_PMU_GPIO0	18
#define SRST_PMU_GPIO0		19
#define SRST_PVTM_PMU		20
#define SRST_P_PVTM_PMU		21
#define SRST_DDR_FAIL_SAFE	31
/********Name=PMUSOFTRST_CON02,Offset=0xA08********/
#define SRST_P_PMU_HP_TIMER	32
#define SRST_PMU_HP_TIMER	33
#define SRST_PMU_32K_HP_TIMER	34
#define SRST_P_PMU_IOC		35
#define SRST_P_PMU_CRU		36
#define SRST_P_PMU_GRF		37
#define SRST_P_PMU_SGRF		38
#define SRST_P_PMU_SGRF_REMAP	39
#define SRST_P_PMU_WDT		40
#define SRST_T_PMU_WDT		41
#define SRST_P_PMU_MAILBOX	42
#define SRST_WRITE_ENABLE	48
/********Name=SOFTRST_CON02,Offset=0x10A08********/
#define SRST_REF_PVTPLL_0	262183
#define SRST_REF_PVTPLL_1	262184
#define SRST_P_CRU		262186
#define SRST_P_CRU_BIU		262187
/********Name=PERISOFTRST_CON00,Offset=0x12A00********/
#define SRST_P_PERI_BIU		294916
#define SRST_A_PERI_BIU		294917
#define SRST_H_PERI_BIU		294918
#define SRST_H_BOOTROM		294919
#define SRST_P_TIMER		294920
#define SRST_TIMER0		294921
#define SRST_TIMER1		294922
#define SRST_TIMER2		294923
#define SRST_TIMER3		294924
#define SRST_TIMER4		294925
#define SRST_TIMER5		294926
#define SRST_P_STIMER		294927
/********Name=PERISOFTRST_CON01,Offset=0x12A04********/
#define SRST_STIMER0		294928
#define SRST_STIMER1		294929
#define SRST_P_WDT_NS		294930
#define SRST_T_WDT_NS		294931
#define SRST_P_WDT_S		294932
#define SRST_T_WDT_S		294933
#define SRST_P_I2C0		294934
#define SRST_I2C0		294935
#define SRST_P_I2C2		294938
#define SRST_I2C2		294939
#define SRST_P_I2C3		294940
#define SRST_I2C3		294941
#define SRST_P_I2C4		294942
#define SRST_I2C4		294943
/********Name=PERISOFTRST_CON02,Offset=0x12A08********/
#define SRST_P_GPIO4		294944
#define SRST_GPIO4		294945
#define SRST_P_PERI_IOC		294946
#define SRST_P_UART2		294947
#define SRST_S_UART2		294950
#define SRST_P_UART3		294951
#define SRST_S_UART3		294954
#define SRST_P_UART4		294955
#define SRST_S_UART4		294958
#define SRST_P_UART5		294959
/********Name=PERISOFTRST_CON03,Offset=0x12A0C********/
#define SRST_S_UART5		294962
#define SRST_P_SARADC		294963
#define SRST_SARADC		294964
#define SRST_SARADC_PHY		294965
#define SRST_P_SPI1		294966
#define SRST_SPI1		294967
#define SRST_H_TRNG_NS		294969
#define SRST_H_TRNG_S		294970
#define SRST_CORE_CRYPTO	294971
#define SRST_PKA_CRYPTO		294972
#define SRST_A_CRYPTO		294973
#define SRST_H_CRYPTO		294974
#define SRST_P_PWM1_PERI	294975
/********Name=PERISOFTRST_CON04,Offset=0x12A10********/
#define SRST_PWM1_PERI		294976
#define SRST_P_PWM2_PERI	294978
#define SRST_PWM2_PERI		294979
#define SRST_P_PERI_GRF		294981
#define SRST_P_PERI_CRU		294982
#define SRST_A_USBOTG		294983
#define SRST_A_BUS_BIU		294986
#define SRST_H_EMMC		294989
#define SRST_H_SFC		294990
/********Name=PERISOFTRST_CON05,Offset=0x12A14********/
#define SRST_S_SFC		294992
#define SRST_P_USBPHY		294993
#define SRST_USBPHY_POR		294994
#define SRST_USBPHY_OTG		294995
#define SRST_A_DMAC		295000
#define SRST_A_DECOM		295001
#define SRST_P_DECOM		295002
#define SRST_D_DECOM		295003
#define SRST_P_PERI_SGRF	295004
#define SRST_H_SAI		295005
#define SRST_M_SAI		295006
#define SRST_M_I2S0_8CH_TX	295007
/********Name=PERISOFTRST_CON06,Offset=0x12A18********/
#define SRST_H_I2S0		295008
#define SRST_M_DSM		295009
#define SRST_P_DSM		295010
#define SRST_P_ACODEC		295011
#define SRST_M_I2S0_8CH_RX	295014
#define SRST_P_DFT2APB		295015
#define SRST_H_IVE		295017
#define SRST_A_IVE		295018
#define SRST_P_UART0		295019
#define SRST_S_UART0		295022
#define SRST_P_UART1		295023
/********Name=PERISOFTRST_CON07,Offset=0x12A1C********/
#define SRST_S_UART1		295026
#define SRST_P_PWM0_PERI	295027
#define SRST_PWM0_PERI		295028
/********Name=VISOFTRST_CON00,Offset=0x14A00********/
#define SRST_H_VI_BIU		327684
#define SRST_A_VI_BIU		327685
#define SRST_P_VI_BIU		327686
#define SRST_CORE_ISP3P2	327689
#define SRST_D_VICAP		327690
#define SRST_P_VICAP		327691
#define SRST_A_VICAP		327692
#define SRST_H_VICAP		327693
#define SRST_VICAP_I0		327694
#define SRST_VICAP_I1		327695
/********Name=VISOFTRST_CON01,Offset=0x14A04********/
#define SRST_VICAP_RX0		327696
#define SRST_VICAP_RX1		327697
#define SRST_VICAP_ISP0		327698
#define SRST_P_CSIHOST0		327700
#define SRST_P_CSIHOST1		327702
#define SRST_H_SDMMC		327708
#define SRST_SDMMC_DETN_FLT	327709
#define SRST_P_MIPICSIPHY	327710
#define SRST_P_GPIO3		327711
/********Name=VISOFTRST_CON02,Offset=0x14A08********/
#define SRST_GPIO3		327712
#define SRST_P_VI_IOC		327713
#define SRST_P_VI_GRF		327714
#define SRST_P_VI_SGRF		327715
#define SRST_P_VI_CRU		327716
#define SRST_P_VI_RTC_TEST	327717
#define SRST_P_VI_RTC_NIU	327719
/********Name=NPUSOFTRST_CON00,Offset=0x16A00********/
#define SRST_H_NPU_BIU		360451
#define SRST_A_NPU_BIU		360452
#define SRST_P_NPU_BIU		360453
#define SRST_P_NPU_CRU		360454
#define SRST_P_NPU_SGRF		360455
#define SRST_P_NPU_GRF		360456
#define SRST_H_RKNN		360457
#define SRST_A_RKNN		360458
/********Name=CORESOFTRST_CON00,Offset=0x18A00********/
#define SRST_NCOREPORESET	393217
#define SRST_NCORESET		393218
#define SRST_NDBGRESET		393219
#define SRST_NL2RESET		393220
#define SRST_A_M_CORE_BIU	393221
#define SRST_P_DBG		393222
#define SRST_POT_DBG		393223
#define SRST_NT_DBG		393224
#define SRST_P_CORE_GRF		393227
#define SRST_H_CPU_BIU		393228
#define SRST_P_CPU_BIU		393229
#define SRST_PVTM_CORE		393230
#define SRST_P_PVTM_CORE	393231
/********Name=CORESOFTRST_CON01,Offset=0x18A04********/
#define SRST_REF_PVTPLL_CORE	393232
#define SRST_CORE_MCU		393233
#define SRST_CORE_MCU_PWRUP	393234
#define SRST_CORE_MCU_CPU	393235
#define SRST_T_CORE_MCU_CPU	393236
#define SRST_MCU_BIU		393237
#define SRST_P_MAILBOX		393240
#define SRST_P_INTMUX		393241
#define SRST_P_CORE_CRU		393242
#define SRST_P_CORE_SGRF	393243
#define SRST_H_CACHE		393244
/********Name=VEPUSOFTRST_CON00,Offset=0x1AA00********/
#define SRST_H_VEPU_BIU		425988
#define SRST_A_VEPU_BIU		425989
#define SRST_A_VEPU_COM_BIU	425990
#define SRST_P_VEPU_BIU		425991
#define SRST_H_VEPU		425992
#define SRST_A_VEPU		425993
#define SRST_CORE_VEPU		425994
#define SRST_H_VEPU_PP		425995
#define SRST_A_VEPU_PP		425996
#define SRST_CORE_VEPU_DVBM	425997
#define SRST_P_VICAP_VEPU	425998
#define SRST_P_GPIO1		425999
/********Name=VEPUSOFTRST_CON01,Offset=0x1AA04********/
#define SRST_GPIO1		426000
#define SRST_P_VEPU_IOC		426001
#define SRST_P_SPI0		426002
#define SRST_SPI0		426003
#define SRST_P_VEPU_CRU		426005
#define SRST_P_VEPU_SGRF	426006
#define SRST_P_VEPU_GRF		426007
#define SRST_UART_DETN_FLT	426008
/********Name=VOSOFTRST_CON00,Offset=0x1CA00********/
#define SRST_A_VO_BIU		458755
#define SRST_H_VO_BIU		458756
#define SRST_H_RGA2E		458759
#define SRST_A_RGA2E		458760
#define SRST_CORE_RGA2E		458761
#define SRST_P_VO_GRF		458762
#define SRST_A_VOP_BIU		458764
#define SRST_H_VOP		458765
#define SRST_D_VOP		458766
#define SRST_A_VOP		458767
/********Name=VOSOFTRST_CON01,Offset=0x1CA04********/
#define SRST_P_MAC_BIU		458774
#define SRST_A_MAC_BIU		458775
#define SRST_A_MAC		458776
#define SRST_P_VO_SGRF		458780
#define SRST_P_VO_CRU		458781
#define SRST_H_SDIO		458783
/********Name=VOSOFTRST_CON02,Offset=0x1CA08********/
#define SRST_P_TSADC		458784
#define SRST_TSADC		458785
#define SRST_P_OTPC_NS		458787
#define SRST_SBPI_OTPC_NS	458789
#define SRST_USER_OTPC_NS	458790
#define SRST_P_OTPC_S		458791
#define SRST_SBPI_OTPC_S	458793
#define SRST_USER_OTPC_S	458794
#define SRST_OTPC_ARB		458795
#define SRST_MACPHY		458797
#define SRST_P_OTP_MASK		458798
#define SRST_PMC_OTP		458799
/********Name=VOSOFTRST_CON03,Offset=0x1CA0C********/
#define SRST_P_GPIO2		458800
#define SRST_GPIO2		458801
#define SRST_P_VO_IOC		458802
/********Name=DDRSOFTRST_CON00,Offset=0x1EA00********/
#define SRST_P_DDR_BIU		491522
#define SRST_P_DDRC		491525
#define SRST_P_DDRMON		491527
#define SRST_TIMER_DDRMON	491528
#define SRST_P_DFICTRL		491531
#define SRST_A_SYS_SHRM		491533
#define SRST_A_SHRM_NIU		491534
#define SRST_P_DDR_GRF		491535
/********Name=DDRSOFTRST_CON01,Offset=0x1EA04********/
#define SRST_P_DDR_CRU		491536
#define SRST_P_DDR_HWLP		491538
#define SRST_P_DDRPHY		491539
/********Name=SUBDDRSOFTRST_CON00,Offset=0x1FA00********/
#define SRST_MSCH_BIU		507904
#define SRST_A_DDRC		507905
#define SRST_CORE_DDRC		507907
#define SRST_DDRMON		507908
#define SRST_DFICTRL		507909
#define SRST_DDR_PHY		507910

#endif
