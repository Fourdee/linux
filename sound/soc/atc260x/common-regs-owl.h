/*
 * reg-atm7059.h
 *
 */

#ifndef __REG_5206_H__ 
#define __REG_5206_H__

/*I2S register definition*/
#define I2S_SPDIF_BASE                              0xB0100000

#define I2S_CTL                                     (0x0000)
#define I2S_FIFOCTL                                 (0x0004)
#define I2STX_DAT                                   (0x0008)
#define I2SRX_DAT                                   (0x000c)
#define SPDIF_HDMI_CTL                              (0x0010)
#define SPDIF_DAT                                   (0x0014)
#define SPDIF_CLSTAT                                (0x0018)
#define SPDIF_CHSTAT                                (0x001c)
#define HDMI_DAT                                    (0x0020)
#define I2STX_DAT_DBG                               (0x0024)
#define I2SRX_DAT_DBG                               (0x0028)
#define I2STX_SPDIF_HDMI_CTL                        (0x002c)
#define I2STX_SPDIF_HDMI_DAT                        (0x0030)

/*GPIO MFP register definition*/
#define GPIO_MFP_PWM_BASE                           0xB01B0000

#define GPIO_AOUTEN                                 (0x0000)
#define GPIO_AINEN                                  (0x0004)
#define GPIO_ADAT                                   (0x0008)
#define GPIO_BOUTEN                                 (0x000C)
#define GPIO_BINEN                                  (0x0010)
#define GPIO_BDAT                                   (0x0014)
#define GPIO_COUTEN                                 (0x0018)
#define GPIO_CINEN                                  (0x001C)
#define GPIO_CDAT                                   (0x0020)
#define GPIO_DOUTEN                                 (0x0024)
#define GPIO_DINEN                                  (0x0028)
#define GPIO_DDAT                                   (0x002C)
#define GPIO_EOUTEN                                 (0x0030)
#define GPIO_EINEN                                  (0x0034)
#define GPIO_EDAT                                   (0x0038)
#define MFP_CTL0                                    (0x0040)
#define MFP_CTL1                                    (0x0044)
#define MFP_CTL2                                    (0x0048)
#define MFP_CTL3                                    (0x004C)
#define PWM_CTL0                                    (0X50)
#define PWM_CTL1                                    (0X54)
#define PWM_CTL2                                    (0X58)
#define PWM_CTL3                                    (0X5C)
#define PAD_PULLCTL0                                (0x0060)
#define PAD_PULLCTL1                                (0x0064)
#define PAD_PULLCTL2                                (0x0068)
#define PAD_ST0                                     (0x006C)
#define PAD_ST1                                     (0x0070)
#define PAD_CTL                                     (0x0074)
#define SPEED_SENSOR_CTL                            (0x007C)
#define PAD_DRV0                                    (0x0080)
#define PAD_DRV1                                    (0x0084)
#define PAD_DRV2                                    (0x0088)
#define DEBUG_SEL                                   (0x0090)
#define DEBUG_OEN0                                  (0x0094)
#define DEBUG_OEN1                                  (0x0098)
#define DEBUG_IEN0                                  (0x009C)
#define DEBUG_IEN1                                  (0x00A0)
#define MEM_MARGIN_CTRL0                            (0x00B0)
#define MEM_MARGIN_CTRL1                            (0x00B4)
#define BIST_START0                                 (0x00C0)
#define BIST_START1                                 (0x00C4)
#define BIST_DONE0                                  (0x00C8)
#define BIST_DONE1                                  (0x00CC)
#define BIST_FAIL0                                  (0x00D0)
#define BIST_FAIL1                                  (0x00D4)
#define INTC_EXTCTL                                 (0x0200)
#define INTC_GPIOCTL                                (0x0204)
#define INTC_GPIOA_PD                               (0x0208)
#define INTC_GPIOA_MSK                              (0x020c)
#define INTC_GPIOB_PD                               (0x0210)
#define INTC_GPIOB_MSK                              (0x0214)
#define INTC_GPIOC_PD                               (0x0218)
#define INTC_GPIOC_MSK                              (0x021c)
#define INTC_GPIOD_PD                               (0x0220)
#define INTC_GPIOD_MSK                              (0x0224)
#define INTC_GPIOE_PD                               (0x0228)
#define INTC_GPIOE_MSK                              (0x022c)
#define INTC_GPIOA_TYPE0                            (0x0230)
#define INTC_GPIOA_TYPE1                            (0x0234)
#define INTC_GPIOB_TYPE0                            (0x0238)
#define INTC_GPIOB_TYPE1                            (0x023c)
#define INTC_GPIOC_TYPE0                            (0x0240)
#define INTC_GPIOC_TYPE1                            (0x0244)
#define INTC_GPIOD_TYPE0                            (0x0248)
#define INTC_GPIOD_TYPE1                            (0x024C)
#define INTC_GPIOE_TYPE                             (0x0250)


/* HDMI register definition*/
#define     HDMIHW_REG_MEM_BASE                                               0xB02C0000

#define     HDMI_VICTL                                                        (0x0000)
#define     HDMI_VIVSYNC                                                      (0x0004)
#define     HDMI_VIVHSYNC                                                     (0x0008)
#define     HDMI_VIALSEOF                                                     (0x000C)
#define     HDMI_VIALSEEF                                                     (0x0010)
#define     HDMI_VIADLSE                                                      (0x0014)
#define     HDMI_AIFRAMEC                                                     (0x0020)
#define     HDMI_AICHSTABYTE0TO3                                              (0x0024)
#define     HDMI_AICHSTABYTE4TO7                                              (0x0028)
#define     HDMI_AICHSTABYTE8TO11                                             (0x002C)
#define     HDMI_AICHSTABYTE12TO15                                            (0x0030)
#define     HDMI_AICHSTABYTE16TO19                                            (0x0034)
#define     HDMI_AICHSTABYTE20TO23                                            (0x0038)
#define     HDMI_AICHSTASCN                                                   (0x003C)
#define     HDMI_VR                                                           (0x0050)
#define     HDMI_CR                                                           (0x0054)
#define     HDMI_SCHCR                                                        (0x0058)
#define     HDMI_ICR                                                          (0x005C)
#define     HDMI_SCR                                                          (0x0060)
#define     HDMI_LPCR                                                         (0x0064)
#define     HDCP_CR                                                           (0x0068)
#define     HDCP_SR                                                           (0x006C)
#define     HDCP_ANLR                                                         (0x0070)
#define     HDCP_ANMR                                                         (0x0074)
#define     HDCP_ANILR                                                        (0x0078)
#define     HDCP_ANIMR                                                        (0x007C)
#define     HDCP_DPKLR                                                        (0x0080)
#define     HDCP_DPKMR                                                        (0x0084)
#define     HDCP_LIR                                                          (0x0088)
#define     HDCP_SHACR                                                        (0x008C)
#define     HDCP_SHADR                                                        (0x0090)
#define     HDCP_ICR                                                          (0x0094)
#define     HDCP_KMMR                                                         (0x0098)
#define     HDCP_KMLR                                                         (0x009C)
#define     HDCP_MILR                                                         (0x00A0)
#define     HDCP_MIMR                                                         (0x00A4)
#define     HDCP_KOWR                                                         (0x00A8)
#define     HDCP_OWR                                                          (0x00AC)
#define     TMDS_STR0                                                         (0x00B8)
#define     TMDS_STR1                                                         (0x00BC)
#define     TMDS_EODR0                                                        (0x00C0)
#define     TMDS_EODR1                                                        (0x00C4)
#define     HDMI_ASPCR                                                        (0x00D0)
#define     HDMI_ACACR                                                        (0x00D4)
#define     HDMI_ACRPCR                                                       (0x00D8)
#define     HDMI_ACRPCTSR                                                     (0x00DC)
#define     HDMI_ACRPPR                                                       (0x00E0)
#define     HDMI_GCPCR                                                        (0x00E4)
#define     HDMI_RPCR                                                         (0x00E8)
#define     HDMI_RPRBDR                                                       (0x00EC)
#define     HDMI_OPCR                                                         (0x00F0)
#define     HDMI_DIPCCR                                                       (0x00F4)
#define     HDMI_ORP6PH                                                       (0x00F8)
#define     HDMI_ORSP6W0                                                      (0x00FC)
#define     HDMI_ORSP6W1                                                      (0x0100)
#define     HDMI_ORSP6W2                                                      (0x0104)
#define     HDMI_ORSP6W3                                                      (0x0108)
#define     HDMI_ORSP6W4                                                      (0x010C)
#define     HDMI_ORSP6W5                                                      (0x0110)
#define     HDMI_ORSP6W6                                                      (0x0114)
#define     HDMI_ORSP6W7                                                      (0x0118)
#define     HDMI_CECCR                                                        (0x011C)
#define     HDMI_CECRTCR                                                      (0x0120)
#define     HDMI_CECRXCR                                                      (0x0124)
#define     HDMI_CECTXCR                                                      (0x0128)
#define     HDMI_CECTXDR                                                      (0x012C)
#define     HDMI_CECRXDR                                                      (0x0130)
#define     HDMI_CECRXTCR                                                     (0x0134)
#define     HDMI_CECTXTCR0                                                    (0x0138)
#define     HDMI_CECTXTCR1                                                    (0x013C)
#define     HDMI_CRCCR                                                        (0x0140)
#define     HDMI_CRCDOR                                                       (0x0144)
#define     HDMI_TX_1                                                         (0x0154)
#define     HDMI_TX_2                                                         (0x0158)
#define     CEC_DDC_HPD                                                       (0x015C)
#define     MHL_PHYCTL1                                                       (0x0160)
#define     MHL_PHYCTL2                                                       (0x0164)
#define     MHL_PHYCTL3                                                       (0x0168)
#define     MHL_CR                                                            (0x0180)
#define     MHL_INTMSK                                                        (0x0184)
#define     MHL_INTPD                                                         (0x0188)
#define     MHL_INTSR                                                         (0x018c)
#define     MSC_REQMSGR                                                       (0x0190)
#define     MSC_REQRMSGR                                                      (0x0194)
#define     MSC_RSPRMR                                                        (0x0198)
#define     MSC_RSPRFIFO                                                      (0x019c)
#define     MSC_RSPRRMR                                                       (0x01a0)
#define     MHL_DDCCSR                                                        (0x01a4)
#define     MHL_DDCPR                                                         (0x01a8)
#define     CBUS_DCR0TO3                                                      (0x01b0)
#define     CBUS_DCR4TO7                                                      (0x01b4)
#define     CBUS_DCR8TOB                                                      (0x01b8)
#define     CBUS_DCRCTOF                                                      (0x01bc)
#define     CBUS_DEVINTR                                                      (0x01c0)
#define     CBUS_DEVSR                                                        (0x01c4)
#define     CBUS_SPR0TO3                                                      (0x01c8)
#define     CBUS_SPR4TO7                                                      (0x01cc)
#define     CBUS_SPR8TOB                                                      (0x01d0)
#define     CBUS_SPRCTOF                                                      (0x01d4)
#define     CBUS_VID                                                          (0x01d8)
#define     CBUS_LLTCR                                                        (0x01e0)
#define     CBUS_TLTCR                                                        (0x01e4)
#define     MHL_DEBUG                                                         (0x1f0)

#endif
