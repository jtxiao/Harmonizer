#ifndef INCLUDED_CYFITTERIAR_INC
#define INCLUDED_CYFITTERIAR_INC
    INCLUDE cydeviceiar.inc
    INCLUDE cydeviceiar_trm.inc

/* Pin_1 */
Pin_1__0__INTTYPE EQU CYREG_PICU0_INTTYPE1
Pin_1__0__MASK EQU 0x02
Pin_1__0__PC EQU CYREG_PRT0_PC1
Pin_1__0__PORT EQU 0
Pin_1__0__SHIFT EQU 1
Pin_1__AG EQU CYREG_PRT0_AG
Pin_1__AMUX EQU CYREG_PRT0_AMUX
Pin_1__BIE EQU CYREG_PRT0_BIE
Pin_1__BIT_MASK EQU CYREG_PRT0_BIT_MASK
Pin_1__BYP EQU CYREG_PRT0_BYP
Pin_1__CTL EQU CYREG_PRT0_CTL
Pin_1__DM0 EQU CYREG_PRT0_DM0
Pin_1__DM1 EQU CYREG_PRT0_DM1
Pin_1__DM2 EQU CYREG_PRT0_DM2
Pin_1__DR EQU CYREG_PRT0_DR
Pin_1__INP_DIS EQU CYREG_PRT0_INP_DIS
Pin_1__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
Pin_1__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
Pin_1__LCD_EN EQU CYREG_PRT0_LCD_EN
Pin_1__MASK EQU 0x02
Pin_1__PORT EQU 0
Pin_1__PRT EQU CYREG_PRT0_PRT
Pin_1__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
Pin_1__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
Pin_1__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
Pin_1__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
Pin_1__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
Pin_1__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
Pin_1__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
Pin_1__PS EQU CYREG_PRT0_PS
Pin_1__SHIFT EQU 1
Pin_1__SLW EQU CYREG_PRT0_SLW

/* Pin_2 */
Pin_2__0__INTTYPE EQU CYREG_PICU5_INTTYPE1
Pin_2__0__MASK EQU 0x02
Pin_2__0__PC EQU CYREG_PRT5_PC1
Pin_2__0__PORT EQU 5
Pin_2__0__SHIFT EQU 1
Pin_2__AG EQU CYREG_PRT5_AG
Pin_2__AMUX EQU CYREG_PRT5_AMUX
Pin_2__BIE EQU CYREG_PRT5_BIE
Pin_2__BIT_MASK EQU CYREG_PRT5_BIT_MASK
Pin_2__BYP EQU CYREG_PRT5_BYP
Pin_2__CTL EQU CYREG_PRT5_CTL
Pin_2__DM0 EQU CYREG_PRT5_DM0
Pin_2__DM1 EQU CYREG_PRT5_DM1
Pin_2__DM2 EQU CYREG_PRT5_DM2
Pin_2__DR EQU CYREG_PRT5_DR
Pin_2__INP_DIS EQU CYREG_PRT5_INP_DIS
Pin_2__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU5_BASE
Pin_2__LCD_COM_SEG EQU CYREG_PRT5_LCD_COM_SEG
Pin_2__LCD_EN EQU CYREG_PRT5_LCD_EN
Pin_2__MASK EQU 0x02
Pin_2__PORT EQU 5
Pin_2__PRT EQU CYREG_PRT5_PRT
Pin_2__PRTDSI__CAPS_SEL EQU CYREG_PRT5_CAPS_SEL
Pin_2__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT5_DBL_SYNC_IN
Pin_2__PRTDSI__OE_SEL0 EQU CYREG_PRT5_OE_SEL0
Pin_2__PRTDSI__OE_SEL1 EQU CYREG_PRT5_OE_SEL1
Pin_2__PRTDSI__OUT_SEL0 EQU CYREG_PRT5_OUT_SEL0
Pin_2__PRTDSI__OUT_SEL1 EQU CYREG_PRT5_OUT_SEL1
Pin_2__PRTDSI__SYNC_OUT EQU CYREG_PRT5_SYNC_OUT
Pin_2__PS EQU CYREG_PRT5_PS
Pin_2__SHIFT EQU 1
Pin_2__SLW EQU CYREG_PRT5_SLW

/* Pin_3 */
Pin_3__0__INTTYPE EQU CYREG_PICU6_INTTYPE5
Pin_3__0__MASK EQU 0x20
Pin_3__0__PC EQU CYREG_PRT6_PC5
Pin_3__0__PORT EQU 6
Pin_3__0__SHIFT EQU 5
Pin_3__AG EQU CYREG_PRT6_AG
Pin_3__AMUX EQU CYREG_PRT6_AMUX
Pin_3__BIE EQU CYREG_PRT6_BIE
Pin_3__BIT_MASK EQU CYREG_PRT6_BIT_MASK
Pin_3__BYP EQU CYREG_PRT6_BYP
Pin_3__CTL EQU CYREG_PRT6_CTL
Pin_3__DM0 EQU CYREG_PRT6_DM0
Pin_3__DM1 EQU CYREG_PRT6_DM1
Pin_3__DM2 EQU CYREG_PRT6_DM2
Pin_3__DR EQU CYREG_PRT6_DR
Pin_3__INP_DIS EQU CYREG_PRT6_INP_DIS
Pin_3__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU6_BASE
Pin_3__LCD_COM_SEG EQU CYREG_PRT6_LCD_COM_SEG
Pin_3__LCD_EN EQU CYREG_PRT6_LCD_EN
Pin_3__MASK EQU 0x20
Pin_3__PORT EQU 6
Pin_3__PRT EQU CYREG_PRT6_PRT
Pin_3__PRTDSI__CAPS_SEL EQU CYREG_PRT6_CAPS_SEL
Pin_3__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT6_DBL_SYNC_IN
Pin_3__PRTDSI__OE_SEL0 EQU CYREG_PRT6_OE_SEL0
Pin_3__PRTDSI__OE_SEL1 EQU CYREG_PRT6_OE_SEL1
Pin_3__PRTDSI__OUT_SEL0 EQU CYREG_PRT6_OUT_SEL0
Pin_3__PRTDSI__OUT_SEL1 EQU CYREG_PRT6_OUT_SEL1
Pin_3__PRTDSI__SYNC_OUT EQU CYREG_PRT6_SYNC_OUT
Pin_3__PS EQU CYREG_PRT6_PS
Pin_3__SHIFT EQU 5
Pin_3__SLW EQU CYREG_PRT6_SLW

/* isr_1 */
isr_1__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
isr_1__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
isr_1__INTC_MASK EQU 0x01
isr_1__INTC_NUMBER EQU 0
isr_1__INTC_PRIOR_NUM EQU 7
isr_1__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_0
isr_1__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
isr_1__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

/* Timer_1_TimerUDB */
Timer_1_TimerUDB_rstSts_stsreg__0__MASK EQU 0x01
Timer_1_TimerUDB_rstSts_stsreg__0__POS EQU 0
Timer_1_TimerUDB_rstSts_stsreg__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B0_UDB11_12_ACTL
Timer_1_TimerUDB_rstSts_stsreg__16BIT_STATUS_REG EQU CYREG_B0_UDB11_12_ST
Timer_1_TimerUDB_rstSts_stsreg__2__MASK EQU 0x04
Timer_1_TimerUDB_rstSts_stsreg__2__POS EQU 2
Timer_1_TimerUDB_rstSts_stsreg__3__MASK EQU 0x08
Timer_1_TimerUDB_rstSts_stsreg__3__POS EQU 3
Timer_1_TimerUDB_rstSts_stsreg__MASK EQU 0x0D
Timer_1_TimerUDB_rstSts_stsreg__MASK_REG EQU CYREG_B0_UDB11_MSK
Timer_1_TimerUDB_rstSts_stsreg__MASK_ST_AUX_CTL_REG EQU CYREG_B0_UDB11_MSK_ACTL
Timer_1_TimerUDB_rstSts_stsreg__PER_ST_AUX_CTL_REG EQU CYREG_B0_UDB11_MSK_ACTL
Timer_1_TimerUDB_rstSts_stsreg__STATUS_AUX_CTL_REG EQU CYREG_B0_UDB11_ACTL
Timer_1_TimerUDB_rstSts_stsreg__STATUS_CNT_REG EQU CYREG_B0_UDB11_ST_CTL
Timer_1_TimerUDB_rstSts_stsreg__STATUS_CONTROL_REG EQU CYREG_B0_UDB11_ST_CTL
Timer_1_TimerUDB_rstSts_stsreg__STATUS_REG EQU CYREG_B0_UDB11_ST
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB11_12_ACTL
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_CONTROL_CONTROL_REG EQU CYREG_B0_UDB11_12_CTL
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_CONTROL_COUNT_REG EQU CYREG_B0_UDB11_12_CTL
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_COUNT_CONTROL_REG EQU CYREG_B0_UDB11_12_CTL
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_COUNT_COUNT_REG EQU CYREG_B0_UDB11_12_CTL
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_MASK_MASK_REG EQU CYREG_B0_UDB11_12_MSK
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_MASK_PERIOD_REG EQU CYREG_B0_UDB11_12_MSK
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_PERIOD_MASK_REG EQU CYREG_B0_UDB11_12_MSK
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_PERIOD_PERIOD_REG EQU CYREG_B0_UDB11_12_MSK
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__7__MASK EQU 0x80
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__7__POS EQU 7
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB11_ACTL
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__CONTROL_REG EQU CYREG_B0_UDB11_CTL
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__CONTROL_ST_REG EQU CYREG_B0_UDB11_ST_CTL
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__COUNT_REG EQU CYREG_B0_UDB11_CTL
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__COUNT_ST_REG EQU CYREG_B0_UDB11_ST_CTL
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__MASK EQU 0x80
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__MASK_CTL_AUX_CTL_REG EQU CYREG_B0_UDB11_MSK_ACTL
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__PER_CTL_AUX_CTL_REG EQU CYREG_B0_UDB11_MSK_ACTL
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__PERIOD_REG EQU CYREG_B0_UDB11_MSK
Timer_1_TimerUDB_sT16_timerdp_u0__16BIT_A0_REG EQU CYREG_B0_UDB10_11_A0
Timer_1_TimerUDB_sT16_timerdp_u0__16BIT_A1_REG EQU CYREG_B0_UDB10_11_A1
Timer_1_TimerUDB_sT16_timerdp_u0__16BIT_D0_REG EQU CYREG_B0_UDB10_11_D0
Timer_1_TimerUDB_sT16_timerdp_u0__16BIT_D1_REG EQU CYREG_B0_UDB10_11_D1
Timer_1_TimerUDB_sT16_timerdp_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_B0_UDB10_11_ACTL
Timer_1_TimerUDB_sT16_timerdp_u0__16BIT_F0_REG EQU CYREG_B0_UDB10_11_F0
Timer_1_TimerUDB_sT16_timerdp_u0__16BIT_F1_REG EQU CYREG_B0_UDB10_11_F1
Timer_1_TimerUDB_sT16_timerdp_u0__A0_A1_REG EQU CYREG_B0_UDB10_A0_A1
Timer_1_TimerUDB_sT16_timerdp_u0__A0_REG EQU CYREG_B0_UDB10_A0
Timer_1_TimerUDB_sT16_timerdp_u0__A1_REG EQU CYREG_B0_UDB10_A1
Timer_1_TimerUDB_sT16_timerdp_u0__D0_D1_REG EQU CYREG_B0_UDB10_D0_D1
Timer_1_TimerUDB_sT16_timerdp_u0__D0_REG EQU CYREG_B0_UDB10_D0
Timer_1_TimerUDB_sT16_timerdp_u0__D1_REG EQU CYREG_B0_UDB10_D1
Timer_1_TimerUDB_sT16_timerdp_u0__DP_AUX_CTL_REG EQU CYREG_B0_UDB10_ACTL
Timer_1_TimerUDB_sT16_timerdp_u0__F0_F1_REG EQU CYREG_B0_UDB10_F0_F1
Timer_1_TimerUDB_sT16_timerdp_u0__F0_REG EQU CYREG_B0_UDB10_F0
Timer_1_TimerUDB_sT16_timerdp_u0__F1_REG EQU CYREG_B0_UDB10_F1
Timer_1_TimerUDB_sT16_timerdp_u1__16BIT_A0_REG EQU CYREG_B0_UDB11_12_A0
Timer_1_TimerUDB_sT16_timerdp_u1__16BIT_A1_REG EQU CYREG_B0_UDB11_12_A1
Timer_1_TimerUDB_sT16_timerdp_u1__16BIT_D0_REG EQU CYREG_B0_UDB11_12_D0
Timer_1_TimerUDB_sT16_timerdp_u1__16BIT_D1_REG EQU CYREG_B0_UDB11_12_D1
Timer_1_TimerUDB_sT16_timerdp_u1__16BIT_DP_AUX_CTL_REG EQU CYREG_B0_UDB11_12_ACTL
Timer_1_TimerUDB_sT16_timerdp_u1__16BIT_F0_REG EQU CYREG_B0_UDB11_12_F0
Timer_1_TimerUDB_sT16_timerdp_u1__16BIT_F1_REG EQU CYREG_B0_UDB11_12_F1
Timer_1_TimerUDB_sT16_timerdp_u1__A0_A1_REG EQU CYREG_B0_UDB11_A0_A1
Timer_1_TimerUDB_sT16_timerdp_u1__A0_REG EQU CYREG_B0_UDB11_A0
Timer_1_TimerUDB_sT16_timerdp_u1__A1_REG EQU CYREG_B0_UDB11_A1
Timer_1_TimerUDB_sT16_timerdp_u1__D0_D1_REG EQU CYREG_B0_UDB11_D0_D1
Timer_1_TimerUDB_sT16_timerdp_u1__D0_REG EQU CYREG_B0_UDB11_D0
Timer_1_TimerUDB_sT16_timerdp_u1__D1_REG EQU CYREG_B0_UDB11_D1
Timer_1_TimerUDB_sT16_timerdp_u1__DP_AUX_CTL_REG EQU CYREG_B0_UDB11_ACTL
Timer_1_TimerUDB_sT16_timerdp_u1__F0_F1_REG EQU CYREG_B0_UDB11_F0_F1
Timer_1_TimerUDB_sT16_timerdp_u1__F0_REG EQU CYREG_B0_UDB11_F0
Timer_1_TimerUDB_sT16_timerdp_u1__F1_REG EQU CYREG_B0_UDB11_F1
Timer_1_TimerUDB_sT16_timerdp_u1__MSK_DP_AUX_CTL_REG EQU CYREG_B0_UDB11_MSK_ACTL
Timer_1_TimerUDB_sT16_timerdp_u1__PER_DP_AUX_CTL_REG EQU CYREG_B0_UDB11_MSK_ACTL

/* VDAC8_1_viDAC8 */
VDAC8_1_viDAC8__CR0 EQU CYREG_DAC0_CR0
VDAC8_1_viDAC8__CR1 EQU CYREG_DAC0_CR1
VDAC8_1_viDAC8__D EQU CYREG_DAC0_D
VDAC8_1_viDAC8__PM_ACT_CFG EQU CYREG_PM_ACT_CFG8
VDAC8_1_viDAC8__PM_ACT_MSK EQU 0x01
VDAC8_1_viDAC8__PM_STBY_CFG EQU CYREG_PM_STBY_CFG8
VDAC8_1_viDAC8__PM_STBY_MSK EQU 0x01
VDAC8_1_viDAC8__STROBE EQU CYREG_DAC0_STROBE
VDAC8_1_viDAC8__SW0 EQU CYREG_DAC0_SW0
VDAC8_1_viDAC8__SW2 EQU CYREG_DAC0_SW2
VDAC8_1_viDAC8__SW3 EQU CYREG_DAC0_SW3
VDAC8_1_viDAC8__SW4 EQU CYREG_DAC0_SW4
VDAC8_1_viDAC8__TR EQU CYREG_DAC0_TR
VDAC8_1_viDAC8__TRIM__M1 EQU CYREG_FLSHID_CUST_TABLES_DAC0_M1
VDAC8_1_viDAC8__TRIM__M2 EQU CYREG_FLSHID_CUST_TABLES_DAC0_M2
VDAC8_1_viDAC8__TRIM__M3 EQU CYREG_FLSHID_CUST_TABLES_DAC0_M3
VDAC8_1_viDAC8__TRIM__M4 EQU CYREG_FLSHID_CUST_TABLES_DAC0_M4
VDAC8_1_viDAC8__TRIM__M5 EQU CYREG_FLSHID_CUST_TABLES_DAC0_M5
VDAC8_1_viDAC8__TRIM__M6 EQU CYREG_FLSHID_CUST_TABLES_DAC0_M6
VDAC8_1_viDAC8__TRIM__M7 EQU CYREG_FLSHID_CUST_TABLES_DAC0_M7
VDAC8_1_viDAC8__TRIM__M8 EQU CYREG_FLSHID_CUST_TABLES_DAC0_M8
VDAC8_1_viDAC8__TST EQU CYREG_DAC0_TST

/* ADC_DelSig_1_DEC */
ADC_DelSig_1_DEC__COHER EQU CYREG_DEC_COHER
ADC_DelSig_1_DEC__CR EQU CYREG_DEC_CR
ADC_DelSig_1_DEC__DR1 EQU CYREG_DEC_DR1
ADC_DelSig_1_DEC__DR2 EQU CYREG_DEC_DR2
ADC_DelSig_1_DEC__DR2H EQU CYREG_DEC_DR2H
ADC_DelSig_1_DEC__GCOR EQU CYREG_DEC_GCOR
ADC_DelSig_1_DEC__GCORH EQU CYREG_DEC_GCORH
ADC_DelSig_1_DEC__GVAL EQU CYREG_DEC_GVAL
ADC_DelSig_1_DEC__OCOR EQU CYREG_DEC_OCOR
ADC_DelSig_1_DEC__OCORH EQU CYREG_DEC_OCORH
ADC_DelSig_1_DEC__OCORM EQU CYREG_DEC_OCORM
ADC_DelSig_1_DEC__OUTSAMP EQU CYREG_DEC_OUTSAMP
ADC_DelSig_1_DEC__OUTSAMPH EQU CYREG_DEC_OUTSAMPH
ADC_DelSig_1_DEC__OUTSAMPM EQU CYREG_DEC_OUTSAMPM
ADC_DelSig_1_DEC__OUTSAMPS EQU CYREG_DEC_OUTSAMPS
ADC_DelSig_1_DEC__PM_ACT_CFG EQU CYREG_PM_ACT_CFG10
ADC_DelSig_1_DEC__PM_ACT_MSK EQU 0x01
ADC_DelSig_1_DEC__PM_STBY_CFG EQU CYREG_PM_STBY_CFG10
ADC_DelSig_1_DEC__PM_STBY_MSK EQU 0x01
ADC_DelSig_1_DEC__SHIFT1 EQU CYREG_DEC_SHIFT1
ADC_DelSig_1_DEC__SHIFT2 EQU CYREG_DEC_SHIFT2
ADC_DelSig_1_DEC__SR EQU CYREG_DEC_SR
ADC_DelSig_1_DEC__TRIM__M1 EQU CYREG_FLSHID_CUST_TABLES_DEC_M1
ADC_DelSig_1_DEC__TRIM__M2 EQU CYREG_FLSHID_CUST_TABLES_DEC_M2
ADC_DelSig_1_DEC__TRIM__M3 EQU CYREG_FLSHID_CUST_TABLES_DEC_M3
ADC_DelSig_1_DEC__TRIM__M4 EQU CYREG_FLSHID_CUST_TABLES_DEC_M4
ADC_DelSig_1_DEC__TRIM__M5 EQU CYREG_FLSHID_CUST_TABLES_DEC_M5
ADC_DelSig_1_DEC__TRIM__M6 EQU CYREG_FLSHID_CUST_TABLES_DEC_M6
ADC_DelSig_1_DEC__TRIM__M7 EQU CYREG_FLSHID_CUST_TABLES_DEC_M7
ADC_DelSig_1_DEC__TRIM__M8 EQU CYREG_FLSHID_CUST_TABLES_DEC_M8

/* ADC_DelSig_1_DSM */
ADC_DelSig_1_DSM__BUF0 EQU CYREG_DSM0_BUF0
ADC_DelSig_1_DSM__BUF1 EQU CYREG_DSM0_BUF1
ADC_DelSig_1_DSM__BUF2 EQU CYREG_DSM0_BUF2
ADC_DelSig_1_DSM__BUF3 EQU CYREG_DSM0_BUF3
ADC_DelSig_1_DSM__CLK EQU CYREG_DSM0_CLK
ADC_DelSig_1_DSM__CR0 EQU CYREG_DSM0_CR0
ADC_DelSig_1_DSM__CR1 EQU CYREG_DSM0_CR1
ADC_DelSig_1_DSM__CR10 EQU CYREG_DSM0_CR10
ADC_DelSig_1_DSM__CR11 EQU CYREG_DSM0_CR11
ADC_DelSig_1_DSM__CR12 EQU CYREG_DSM0_CR12
ADC_DelSig_1_DSM__CR13 EQU CYREG_DSM0_CR13
ADC_DelSig_1_DSM__CR14 EQU CYREG_DSM0_CR14
ADC_DelSig_1_DSM__CR15 EQU CYREG_DSM0_CR15
ADC_DelSig_1_DSM__CR16 EQU CYREG_DSM0_CR16
ADC_DelSig_1_DSM__CR17 EQU CYREG_DSM0_CR17
ADC_DelSig_1_DSM__CR2 EQU CYREG_DSM0_CR2
ADC_DelSig_1_DSM__CR3 EQU CYREG_DSM0_CR3
ADC_DelSig_1_DSM__CR4 EQU CYREG_DSM0_CR4
ADC_DelSig_1_DSM__CR5 EQU CYREG_DSM0_CR5
ADC_DelSig_1_DSM__CR6 EQU CYREG_DSM0_CR6
ADC_DelSig_1_DSM__CR7 EQU CYREG_DSM0_CR7
ADC_DelSig_1_DSM__CR8 EQU CYREG_DSM0_CR8
ADC_DelSig_1_DSM__CR9 EQU CYREG_DSM0_CR9
ADC_DelSig_1_DSM__DEM0 EQU CYREG_DSM0_DEM0
ADC_DelSig_1_DSM__DEM1 EQU CYREG_DSM0_DEM1
ADC_DelSig_1_DSM__MISC EQU CYREG_DSM0_MISC
ADC_DelSig_1_DSM__OUT0 EQU CYREG_DSM0_OUT0
ADC_DelSig_1_DSM__OUT1 EQU CYREG_DSM0_OUT1
ADC_DelSig_1_DSM__REF0 EQU CYREG_DSM0_REF0
ADC_DelSig_1_DSM__REF1 EQU CYREG_DSM0_REF1
ADC_DelSig_1_DSM__REF2 EQU CYREG_DSM0_REF2
ADC_DelSig_1_DSM__REF3 EQU CYREG_DSM0_REF3
ADC_DelSig_1_DSM__RSVD1 EQU CYREG_DSM0_RSVD1
ADC_DelSig_1_DSM__SW0 EQU CYREG_DSM0_SW0
ADC_DelSig_1_DSM__SW2 EQU CYREG_DSM0_SW2
ADC_DelSig_1_DSM__SW3 EQU CYREG_DSM0_SW3
ADC_DelSig_1_DSM__SW4 EQU CYREG_DSM0_SW4
ADC_DelSig_1_DSM__SW6 EQU CYREG_DSM0_SW6
ADC_DelSig_1_DSM__TR0 EQU CYREG_NPUMP_DSM_TR0
ADC_DelSig_1_DSM__TST0 EQU CYREG_DSM0_TST0
ADC_DelSig_1_DSM__TST1 EQU CYREG_DSM0_TST1

/* ADC_DelSig_1_Ext_CP_Clk */
ADC_DelSig_1_Ext_CP_Clk__CFG0 EQU CYREG_CLKDIST_DCFG0_CFG0
ADC_DelSig_1_Ext_CP_Clk__CFG1 EQU CYREG_CLKDIST_DCFG0_CFG1
ADC_DelSig_1_Ext_CP_Clk__CFG2 EQU CYREG_CLKDIST_DCFG0_CFG2
ADC_DelSig_1_Ext_CP_Clk__CFG2_SRC_SEL_MASK EQU 0x07
ADC_DelSig_1_Ext_CP_Clk__INDEX EQU 0x00
ADC_DelSig_1_Ext_CP_Clk__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
ADC_DelSig_1_Ext_CP_Clk__PM_ACT_MSK EQU 0x01
ADC_DelSig_1_Ext_CP_Clk__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
ADC_DelSig_1_Ext_CP_Clk__PM_STBY_MSK EQU 0x01

/* ADC_DelSig_1_IRQ */
ADC_DelSig_1_IRQ__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
ADC_DelSig_1_IRQ__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
ADC_DelSig_1_IRQ__INTC_MASK EQU 0x20000000
ADC_DelSig_1_IRQ__INTC_NUMBER EQU 29
ADC_DelSig_1_IRQ__INTC_PRIOR_NUM EQU 7
ADC_DelSig_1_IRQ__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_29
ADC_DelSig_1_IRQ__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
ADC_DelSig_1_IRQ__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

/* ADC_DelSig_1_theACLK */
ADC_DelSig_1_theACLK__CFG0 EQU CYREG_CLKDIST_ACFG0_CFG0
ADC_DelSig_1_theACLK__CFG1 EQU CYREG_CLKDIST_ACFG0_CFG1
ADC_DelSig_1_theACLK__CFG2 EQU CYREG_CLKDIST_ACFG0_CFG2
ADC_DelSig_1_theACLK__CFG2_SRC_SEL_MASK EQU 0x07
ADC_DelSig_1_theACLK__CFG3 EQU CYREG_CLKDIST_ACFG0_CFG3
ADC_DelSig_1_theACLK__CFG3_PHASE_DLY_MASK EQU 0x0F
ADC_DelSig_1_theACLK__INDEX EQU 0x00
ADC_DelSig_1_theACLK__PM_ACT_CFG EQU CYREG_PM_ACT_CFG1
ADC_DelSig_1_theACLK__PM_ACT_MSK EQU 0x01
ADC_DelSig_1_theACLK__PM_STBY_CFG EQU CYREG_PM_STBY_CFG1
ADC_DelSig_1_theACLK__PM_STBY_MSK EQU 0x01

/* Miscellaneous */
BCLK__BUS_CLK__HZ EQU 24000000
BCLK__BUS_CLK__KHZ EQU 24000
BCLK__BUS_CLK__MHZ EQU 24
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PSOC4A EQU 12
CYDEV_CHIP_DIE_PSOC5LP EQU 19
CYDEV_CHIP_DIE_PSOC5TM EQU 20
CYDEV_CHIP_DIE_TMA4 EQU 2
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_FM0P EQU 4
CYDEV_CHIP_FAMILY_FM3 EQU 5
CYDEV_CHIP_FAMILY_FM4 EQU 6
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC5
CYDEV_CHIP_JTAG_ID EQU 0x2E123069
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_4A EQU 12
CYDEV_CHIP_MEMBER_4C EQU 18
CYDEV_CHIP_MEMBER_4D EQU 8
CYDEV_CHIP_MEMBER_4E EQU 4
CYDEV_CHIP_MEMBER_4F EQU 13
CYDEV_CHIP_MEMBER_4G EQU 2
CYDEV_CHIP_MEMBER_4H EQU 11
CYDEV_CHIP_MEMBER_4I EQU 17
CYDEV_CHIP_MEMBER_4J EQU 9
CYDEV_CHIP_MEMBER_4K EQU 10
CYDEV_CHIP_MEMBER_4L EQU 16
CYDEV_CHIP_MEMBER_4M EQU 15
CYDEV_CHIP_MEMBER_4N EQU 6
CYDEV_CHIP_MEMBER_4O EQU 5
CYDEV_CHIP_MEMBER_4P EQU 14
CYDEV_CHIP_MEMBER_4Q EQU 7
CYDEV_CHIP_MEMBER_4U EQU 3
CYDEV_CHIP_MEMBER_5A EQU 20
CYDEV_CHIP_MEMBER_5B EQU 19
CYDEV_CHIP_MEMBER_FM3 EQU 24
CYDEV_CHIP_MEMBER_FM4 EQU 25
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 EQU 21
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 EQU 22
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 EQU 23
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_5B
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_MEMBER_USED
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REV_PSOC4A_ES0 EQU 17
CYDEV_CHIP_REV_PSOC4A_PRODUCTION EQU 17
CYDEV_CHIP_REV_PSOC5LP_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5LP_PRODUCTION EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES1 EQU 1
CYDEV_CHIP_REV_PSOC5TM_PRODUCTION EQU 1
CYDEV_CHIP_REV_TMA4_ES EQU 17
CYDEV_CHIP_REV_TMA4_ES2 EQU 33
CYDEV_CHIP_REV_TMA4_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_4A_ES0 EQU 17
CYDEV_CHIP_REVISION_4A_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4C_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4D_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4E_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256K EQU 0
CYDEV_CHIP_REVISION_4G_ES EQU 17
CYDEV_CHIP_REVISION_4G_ES2 EQU 33
CYDEV_CHIP_REVISION_4G_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4H_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4I_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4J_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4K_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4L_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4M_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4N_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4O_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4P_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4Q_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4U_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5B_ES0 EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_FM3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_FM4_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_5B_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REVISION_USED
CYDEV_CONFIG_FASTBOOT_ENABLED EQU 1
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_AllowButWarn
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_CONFIGURATION_COMPRESSED EQU 1
CYDEV_CONFIGURATION_DMA EQU 0
CYDEV_CONFIGURATION_ECC EQU 1
CYDEV_CONFIGURATION_IMOENABLED EQU CYDEV_CONFIG_FASTBOOT_ENABLED
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_COMPRESSED
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_DEBUG_ENABLE_MASK EQU 0x20
CYDEV_DEBUG_ENABLE_REGISTER EQU CYREG_MLOGIC_DEBUG
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS_JTAG_4 EQU 1
CYDEV_DEBUGGING_DPS_JTAG_5 EQU 0
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_DEBUGGING_DPS_SWD_SWV EQU 6
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD_SWV
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_DEBUGGING_XRES EQU 0
CYDEV_DMA_CHANNELS_AVAILABLE EQU 24
CYDEV_ECC_ENABLE EQU 0
CYDEV_HEAP_SIZE EQU 0x80
CYDEV_INSTRUCT_CACHE_ENABLED EQU 1
CYDEV_INTR_RISING EQU 0x00000001
CYDEV_IS_EXPORTING_CODE EQU 0
CYDEV_IS_IMPORTING_CODE EQU 0
CYDEV_PROJ_TYPE EQU 0
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LAUNCHER EQU 5
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER EQU 4
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_PROTECTION_ENABLE EQU 0
CYDEV_STACK_SIZE EQU 0x0800
CYDEV_USE_BUNDLED_CMSIS EQU 1
CYDEV_VARIABLE_VDDA EQU 0
CYDEV_VDDA_MV EQU 5000
CYDEV_VDDD_MV EQU 5000
CYDEV_VDDIO0_MV EQU 5000
CYDEV_VDDIO1_MV EQU 5000
CYDEV_VDDIO2_MV EQU 5000
CYDEV_VDDIO3_MV EQU 5000
CYDEV_VIO0_MV EQU 5000
CYDEV_VIO1_MV EQU 5000
CYDEV_VIO2_MV EQU 5000
CYDEV_VIO3_MV EQU 5000
CYIPBLOCK_ARM_CM3_VERSION EQU 0
CYIPBLOCK_P3_ANAIF_VERSION EQU 0
CYIPBLOCK_P3_CAN_VERSION EQU 0
CYIPBLOCK_P3_CAPSENSE_VERSION EQU 0
CYIPBLOCK_P3_COMP_VERSION EQU 0
CYIPBLOCK_P3_DECIMATOR_VERSION EQU 0
CYIPBLOCK_P3_DFB_VERSION EQU 0
CYIPBLOCK_P3_DMA_VERSION EQU 0
CYIPBLOCK_P3_DRQ_VERSION EQU 0
CYIPBLOCK_P3_DSM_VERSION EQU 0
CYIPBLOCK_P3_EMIF_VERSION EQU 0
CYIPBLOCK_P3_I2C_VERSION EQU 0
CYIPBLOCK_P3_LCD_VERSION EQU 0
CYIPBLOCK_P3_LPF_VERSION EQU 0
CYIPBLOCK_P3_OPAMP_VERSION EQU 0
CYIPBLOCK_P3_PM_VERSION EQU 0
CYIPBLOCK_P3_SCCT_VERSION EQU 0
CYIPBLOCK_P3_TIMER_VERSION EQU 0
CYIPBLOCK_P3_USB_VERSION EQU 0
CYIPBLOCK_P3_VIDAC_VERSION EQU 0
CYIPBLOCK_P3_VREF_VERSION EQU 0
CYIPBLOCK_S8_GPIO_VERSION EQU 0
CYIPBLOCK_S8_IRQ_VERSION EQU 0
CYIPBLOCK_S8_SAR_VERSION EQU 0
CYIPBLOCK_S8_SIO_VERSION EQU 0
CYIPBLOCK_S8_UDB_VERSION EQU 0
DMA_CHANNELS_USED__MASK0 EQU 0x00000000
CYDEV_BOOTLOADER_ENABLE EQU 0

#endif /* INCLUDED_CYFITTERIAR_INC */
