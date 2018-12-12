/*
  variant33.h
  
  Copyright (c) 2018 huaweiwx@sina.com 2018.11.1

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in all
  copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
  SOFTWARE.
*/
#include "Arduino.h"

#pragma GCC diagnostic ignored "-Wconversion-null"

#ifndef GPIO_DESC_USERDEF
const GPIOPinDescription GPIO_Desc[] =
{
  {NULL, NULL, {NULL, NULL, NULL}}, 														      // 0
  
  {PB, BIT5,  {(uint32_t)&SYS->GPB_MFPL, SYS_GPB_MFPL_PB5MFP_Msk,  SYS_GPB_MFPL_PB5MFP_GPIO }},   // 1
  {PB, BIT4,  {(uint32_t)&SYS->GPB_MFPL, SYS_GPB_MFPL_PB4MFP_Msk,  SYS_GPB_MFPL_PB4MFP_GPIO }},   // 2
  {PB, BIT3,  {(uint32_t)&SYS->GPB_MFPL, SYS_GPB_MFPL_PB3MFP_Msk,  SYS_GPB_MFPL_PB3MFP_GPIO }},   // 3
  {PB, BIT2,  {(uint32_t)&SYS->GPB_MFPL, SYS_GPB_MFPL_PB2MFP_Msk,  SYS_GPB_MFPL_PB2MFP_GPIO }},   // 4
  {PB, BIT1,  {(uint32_t)&SYS->GPB_MFPL, SYS_GPB_MFPL_PB1MFP_Msk,  SYS_GPB_MFPL_PB1MFP_GPIO }},   // 5
  {PB, BIT0,  {(uint32_t)&SYS->GPB_MFPL, SYS_GPB_MFPL_PB0MFP_Msk,  SYS_GPB_MFPL_PB0MFP_GPIO }},   // 6

  {PF, BIT5,  {(uint32_t)&SYS->GPF_MFPL, SYS_GPF_MFPL_PF5MFP_Msk,  SYS_GPF_MFPL_PF5MFP_GPIO }},   // 7
  {PF, BIT4,  {(uint32_t)&SYS->GPF_MFPL, SYS_GPF_MFPL_PF4MFP_Msk,  SYS_GPF_MFPL_PF4MFP_GPIO }},   // 8
  {PF, BIT3,  {(uint32_t)&SYS->GPF_MFPL, SYS_GPF_MFPL_PF3MFP_Msk,  SYS_GPF_MFPL_PF3MFP_GPIO }},   // 9
  {PF, BIT2,  {(uint32_t)&SYS->GPF_MFPL, SYS_GPF_MFPL_PF2MFP_Msk,  SYS_GPF_MFPL_PF2MFP_GPIO }},   //10
  
  {PA, BIT3,  {(uint32_t)&SYS->GPA_MFPL, SYS_GPA_MFPL_PA3MFP_Msk,  SYS_GPA_MFPL_PA3MFP_GPIO }},   //11
  {PA, BIT2,  {(uint32_t)&SYS->GPA_MFPL, SYS_GPA_MFPL_PA2MFP_Msk,  SYS_GPA_MFPL_PA2MFP_GPIO }},   //12
  {PA, BIT1,  {(uint32_t)&SYS->GPA_MFPL, SYS_GPA_MFPL_PA1MFP_Msk,  SYS_GPA_MFPL_PA1MFP_GPIO }},   //13
  {PA, BIT0,  {(uint32_t)&SYS->GPA_MFPL, SYS_GPA_MFPL_PA0MFP_Msk,  SYS_GPA_MFPL_PA0MFP_GPIO }},   //14
  
  {NULL, NULL, {NULL, NULL, NULL}},                                                               //15
  {NULL, NULL, {NULL, NULL, NULL}},                                                               //16
  
  {PF, BIT0,  {(uint32_t)&SYS->GPF_MFPL, SYS_GPF_MFPL_PF0MFP_Msk,  SYS_GPF_MFPL_PF0MFP_GPIO }},   //17
  {PF, BIT1,  {(uint32_t)&SYS->GPF_MFPL, SYS_GPF_MFPL_PF1MFP_Msk,  SYS_GPF_MFPL_PF1MFP_GPIO }},   //18
  
  {PC, BIT1,  {(uint32_t)&SYS->GPC_MFPL, SYS_GPC_MFPL_PC1MFP_Msk,  SYS_GPC_MFPL_PC1MFP_GPIO }},   //19
  {PC, BIT0,  {(uint32_t)&SYS->GPC_MFPL, SYS_GPC_MFPL_PC0MFP_Msk,  SYS_GPC_MFPL_PC0MFP_GPIO }},   //20
  
  {PA, BIT12, {(uint32_t)&SYS->GPA_MFPH, SYS_GPA_MFPH_PA12MFP_Msk, SYS_GPA_MFPH_PA12MFP_GPIO}},   //21
  {PA, BIT13, {(uint32_t)&SYS->GPA_MFPH, SYS_GPA_MFPH_PA13MFP_Msk, SYS_GPA_MFPH_PA13MFP_GPIO}},   //22
  {PA, BIT14, {(uint32_t)&SYS->GPA_MFPH, SYS_GPA_MFPH_PA14MFP_Msk, SYS_GPA_MFPH_PA14MFP_GPIO}},   //23
  {PA, BIT15, {(uint32_t)&SYS->GPA_MFPH, SYS_GPA_MFPH_PA15MFP_Msk, SYS_GPA_MFPH_PA15MFP_GPIO}},   //24
  
  {NULL, NULL, {NULL, NULL, NULL}}, 															  //25
  {NULL, NULL, {NULL, NULL, NULL}}, 															  //26
  {NULL, NULL, {NULL, NULL, NULL}}, 															  //27
  
  {PB, BIT15, {(uint32_t)&SYS->GPB_MFPH, SYS_GPB_MFPH_PB15MFP_Msk, SYS_GPB_MFPH_PB15MFP_GPIO}},   //28
  {PB, BIT14, {(uint32_t)&SYS->GPB_MFPH, SYS_GPB_MFPH_PB14MFP_Msk, SYS_GPB_MFPH_PB14MFP_GPIO}},   //29
  {PB, BIT13, {(uint32_t)&SYS->GPB_MFPH, SYS_GPB_MFPH_PB13MFP_Msk, SYS_GPB_MFPH_PB13MFP_GPIO}},   //30
  {PB, BIT12, {(uint32_t)&SYS->GPB_MFPH, SYS_GPB_MFPH_PB12MFP_Msk, SYS_GPB_MFPH_PB12MFP_GPIO}},   //31
};
#endif

#ifndef PWM_DESC_USERDEF
const PWMPinDescription PWM_Desc[] = {
  {EPWM0, EPWM0_MODULE, EPWM0P1_IRQn, 0, 500, {PB_5, SYS_GPB_MFPL_PB5MFP_EPWM0_CH0 }}, //0 
  {EPWM0, EPWM0_MODULE, EPWM0P1_IRQn, 1, 500, {PB_4, SYS_GPB_MFPL_PB4MFP_EPWM0_CH1 }}, //1 
  {EPWM0, EPWM0_MODULE, EPWM0P1_IRQn, 2, 500, {PB_3, SYS_GPB_MFPL_PB3MFP_EPWM0_CH2 }}, //2 
  {EPWM0, EPWM0_MODULE, EPWM0P1_IRQn, 3, 500, {PB_2, SYS_GPB_MFPL_PB2MFP_EPWM0_CH3 }}, //3 
  {EPWM0, EPWM0_MODULE, EPWM0P1_IRQn, 4, 500, {PB_1, SYS_GPB_MFPL_PB1MFP_EPWM0_CH4 }}, //4 
  {EPWM0, EPWM0_MODULE, EPWM0P1_IRQn, 5, 500, {PB_0, SYS_GPB_MFPL_PB0MFP_EPWM0_CH5 }}, //5 
  {EPWM0, EPWM0_MODULE, EPWM0P0_IRQn, 2, 500, {PA_3, SYS_GPA_MFPL_PA3MFP_EPWM0_CH2 }}, //6 
  {EPWM0, EPWM0_MODULE, EPWM0P0_IRQn, 3, 500, {PA_2, SYS_GPA_MFPL_PA2MFP_EPWM0_CH3 }}, //7 
  {EPWM0, EPWM0_MODULE, EPWM0P0_IRQn, 4, 500, {PA_1, SYS_GPA_MFPL_PA1MFP_EPWM0_CH4 }}, //8 
  {EPWM0, EPWM0_MODULE, EPWM0P0_IRQn, 5, 500, {PA_0, SYS_GPA_MFPL_PA0MFP_EPWM0_CH5 }}, //9 

  {EPWM1, EPWM1_MODULE, EPWM1P2_IRQn, 4, 500, {PC_1, SYS_GPC_MFPL_PC1MFP_EPWM1_CH4 }}, //10
  {EPWM1, EPWM1_MODULE, EPWM1P2_IRQn, 5, 500, {PC_0, SYS_GPC_MFPL_PC0MFP_EPWM1_CH5 }}, //11
  {EPWM1, EPWM0_MODULE, EPWM1P1_IRQn, 0, 500, {PB_15,SYS_GPB_MFPH_PB15MFP_EPWM1_CH0}}, //12
  {EPWM1, EPWM0_MODULE, EPWM1P1_IRQn, 1, 500, {PB_14,SYS_GPB_MFPH_PB14MFP_EPWM1_CH1}}, //13
  {EPWM1, EPWM0_MODULE, EPWM1P1_IRQn, 2, 500, {PB_13,SYS_GPB_MFPH_PB13MFP_EPWM1_CH2}}, //14
  {EPWM1, EPWM0_MODULE, EPWM1P1_IRQn, 3, 500, {PB_12,SYS_GPB_MFPH_PB12MFP_EPWM1_CH3}}, //15

//  {BPWM0, BPWM0_MODULE,   BPWM0_IRQn, 5, 500, {PF_5, SYS_GPF_MFPL_PF5MFP_BPWM0_CH4 }}, //0  PC12
//  {BPWM0, BPWM0_MODULE,   BPWM0_IRQn, 4, 500, {PF_4, SYS_GPF_MFPL_PF4MFP_BPWM0_CH5 }}, //1  PC11
//  {BPWM1, BPWM1_MODULE,   BPWM1_IRQn, 4, 500, {PF_3, SYS_GPF_MFPL_PF3MFP_BPWM1_CH0 }}, //1  PC11
//  {BPWM1, BPWM0_MODULE,   BPWM1_IRQn, 4, 500, {PF_2, SYS_GPF_MFPL_PF2MFP_BPWM1_CH1 }}, //1  PC11
 // {EPWM1, EPWM1_MODULE, EPWM1P2_IRQn, 0, 500, {PC_12,SYS_GPC_MFPH_PC12MFP_EPWM1_CH0 }}, //0  PC12
 // {EPWM1, EPWM1_MODULE, EPWM1P2_IRQn, 1, 500, {PC_11,SYS_GPC_MFPH_PC11MFP_EPWM1_CH1 }}, //1  PC11
 // {EPWM1, EPWM1_MODULE, EPWM1P2_IRQn, 2, 500, {PC_10,SYS_GPC_MFPH_PC10MFP_EPWM1_CH2 }}, //1  PC10
 // {EPWM1, EPWM1_MODULE, EPWM1P2_IRQn, 3, 500, {PC_9, SYS_GPC_MFPH_PC9MFP_EPWM1_CH3  }}, //0  PC9
//  {EPWM1, EPWM1_MODULE, EPWM1P2_IRQn, 4, 500, {PC_13,SYS_GPC_MFPH_PC13MFP_EPWM1_CH4 }}, //4  PC13
//  {EPWM0, EPWM0_MODULE, EPWM1P3_IRQn, 5, 500, {PD_7, SYS_GPD_MFPL_PD7MFP_EPWM0_CH5  }}, //7  PD7
};
#endif

#ifndef ADC_DESC_USERDEF
const ADCPinDescription ADC_Desc[] = { //SYS_GPE_MFPL_PE0MFP_ADC0_0
  {EADC, EADC_MODULE, 0,  {PB_0, SYS_GPB_MFPL_PB0MFP_EADC0_CH0  }},  //0
  {EADC, EADC_MODULE, 1,  {PB_1, SYS_GPB_MFPL_PB1MFP_EADC0_CH1  }},  //1
  {EADC, EADC_MODULE, 2,  {PB_2, SYS_GPB_MFPL_PB2MFP_EADC0_CH2 }},   //2
  {EADC, EADC_MODULE, 3,  {PB_3, SYS_GPB_MFPL_PB3MFP_EADC0_CH3 }},   //3
  {EADC, EADC_MODULE, 4,  {PB_4, SYS_GPB_MFPL_PB4MFP_EADC0_CH4 }},   //4
  {EADC, EADC_MODULE, 5,  {PB_5, SYS_GPB_MFPL_PB5MFP_EADC0_CH5 }},   //5
  {EADC, EADC_MODULE, 12, {PB_12,SYS_GPB_MFPH_PB12MFP_EADC0_CH12 }}, //12
  {EADC, EADC_MODULE, 13, {PB_13,SYS_GPB_MFPH_PB13MFP_EADC0_CH13}},  //13
  {EADC, EADC_MODULE, 14, {PB_14,SYS_GPB_MFPH_PB14MFP_EADC0_CH14}},  //14
  {EADC, EADC_MODULE, 15, {PB_15,SYS_GPB_MFPH_PB15MFP_EADC0_CH15}},  //15
};
#endif

#ifndef SPI_DESC_USERDEF
const SPIPinAlt_TypeDef SPI0PinAlt[] = {
  {{PA_2,SYS_GPA_MFPL_PA2MFP_SPI0_CLK} ,{PA_0,SYS_GPA_MFPL_PA0MFP_SPI0_MOSI},
   {PA_1,SYS_GPA_MFPL_PA1MFP_SPI0_MISO},{PA_3,SYS_GPA_MFPL_PA3MFP_SPI0_SS}},  //Loc 0
};
const SPIPinAlt_TypeDef SPI1PinAlt[] = {
  {{PB_3,SYS_GPB_MFPL_PB3MFP_SPI1_CLK} ,{PB_4,SYS_GPB_MFPL_PB4MFP_SPI1_MOSI },
   {PB_5,SYS_GPB_MFPL_PB5MFP_SPI1_MISO},{PB_2,SYS_GPB_MFPL_PB2MFP_SPI1_SS}},  //Loc 0
};
const SPIPinAlt_TypeDef SPI2PinAlt[] = {
  {{PA_13,SYS_GPA_MFPH_PA13MFP_SPI2_CLK} ,{PA_15,SYS_GPA_MFPH_PA15MFP_SPI2_MOSI},
   {PA_14,SYS_GPA_MFPH_PA14MFP_SPI2_MISO},{PA_12,SYS_GPA_MFPH_PA12MFP_SPI2_SS}},  //Loc 0
};
const SPIPinDescription SPI_Desc[] = {
  {SPI0,SPI0_MODULE,SPI0_IRQn,CLK_CLKSEL2_SPI0SEL_PCLK1,SPI0PinAlt},
  {SPI1,SPI1_MODULE,SPI1_IRQn,CLK_CLKSEL2_SPI2SEL_PCLK1,SPI1PinAlt},
  {SPI2,SPI2_MODULE,SPI2_IRQn,CLK_CLKSEL2_SPI2SEL_PCLK1,SPI2PinAlt},
};
#endif

#ifndef UART_DESC_USERDEF
const UARTPinAlt_TypeDef UART0PinAlt[] = {
  {{PF_2, SYS_GPF_MFPL_PF2MFP_UART0_RXD }, {PF_3, SYS_GPF_MFPL_PF3MFP_UART0_TXD }},  //Loc 0
  {{PA_0, SYS_GPA_MFPL_PA0MFP_UART0_RXD }, {PA_1, SYS_GPA_MFPL_PA1MFP_UART0_TXD }},  //Loc 1
  {{PA_15,SYS_GPA_MFPH_PA15MFP_UART0_RXD}, {PA_14,SYS_GPA_MFPH_PA14MFP_UART0_TXD}},  //Loc 2 
  {{PB_12,SYS_GPB_MFPH_PB12MFP_UART0_RXD}, {PB_13,SYS_GPB_MFPH_PB13MFP_UART0_TXD}},  //Loc 3
};
const UARTPinAlt_TypeDef UART1PinAlt[] = {
  {{PB_2, SYS_GPB_MFPL_PB2MFP_UART1_RXD }, {PB_3, SYS_GPB_MFPL_PB3MFP_UART1_TXD }},  //Loc 0
  {{PA_2, SYS_GPA_MFPL_PA2MFP_UART1_RXD }, {PA_3, SYS_GPA_MFPL_PA3MFP_UART1_TXD }},  //Loc 1
};
const UARTPinAlt_TypeDef UART2PinAlt[] = {
  {{PB_0, SYS_GPB_MFPL_PB0MFP_UART2_RXD }, {PB_1, SYS_GPB_MFPL_PB1MFP_UART2_TXD }},  //Loc 0
  {{PF_5, SYS_GPF_MFPL_PF5MFP_UART2_RXD }, {PF_4, SYS_GPF_MFPL_PF4MFP_UART2_TXD }},  //Loc 1
  {{PC_0, SYS_GPC_MFPL_PC0MFP_UART2_RXD }, {PC_1, SYS_GPC_MFPL_PC1MFP_UART2_TXD }},  //Loc 2
};
const UARTPinAlt_TypeDef UART3PinAlt[] = {
  {{PB_14,SYS_GPB_MFPH_PB14MFP_UART3_RXD}, {PB_15,SYS_GPB_MFPH_PB15MFP_UART3_TXD}},  //Loc 0
};
const UARTPinAlt_TypeDef UART4PinAlt[] = {
  {{PA_2, SYS_GPA_MFPL_PA2MFP_UART4_RXD }, {PA_3, SYS_GPA_MFPL_PA3MFP_UART4_TXD }},  //Loc 0
  {{PA_13,SYS_GPA_MFPH_PA13MFP_UART4_RXD}, {PA_12,SYS_GPA_MFPH_PA12MFP_UART4_TXD}},  //Loc 1
};
const UARTPinAlt_TypeDef UART5PinAlt[] = {
  {{PB_4, SYS_GPB_MFPL_PB4MFP_UART5_RXD }, {PB_5, SYS_GPB_MFPL_PB5MFP_UART5_TXD }},  //Loc 0
};

const UARTPinDescription UART_Desc[] = {
  {UART0, UART0_MODULE, UART0_IRQn, UART0PinAlt},  //0
  {UART1, UART1_MODULE, UART1_IRQn, UART1PinAlt},  //1
  {UART2, UART2_MODULE, UART2_IRQn, UART2PinAlt},  //2
  {UART3, UART3_MODULE, UART3_IRQn, UART3PinAlt},  //3
  {UART4, UART4_MODULE, UART4_IRQn, UART4PinAlt},  //4
  {UART5, UART5_MODULE, UART5_IRQn, UART5PinAlt},  //5
 };

#endif

#ifndef I2C_DESC_USERDEF
const I2CPinAlt_TypeDef I2C0PinAlt[] = {
  {{PC_1, SYS_GPC_MFPL_PC1MFP_I2C0_SCL}, {PC_0, SYS_GPC_MFPL_PC0MFP_I2C0_SDA }},//Loc 0
  {{PB_5, SYS_GPB_MFPL_PB5MFP_I2C0_SCL}, {PB_4, SYS_GPB_MFPL_PB4MFP_I2C0_SDA }},//Loc 1
};
const I2CPinAlt_TypeDef I2C1PinAlt[] = {
  {{PB_1, SYS_GPB_MFPL_PB1MFP_I2C1_SCL}, {PB_0, SYS_GPB_MFPL_PB0MFP_I2C1_SDA }},//Loc 0
  {{PA_3, SYS_GPA_MFPL_PA3MFP_I2C1_SCL}, {PA_2, SYS_GPA_MFPL_PA2MFP_I2C1_SDA }},//Loc 1
};
const I2CPinAlt_TypeDef I2C2PinAlt[] = {
  {{PA_1, SYS_GPA_MFPL_PA1MFP_I2C2_SCL}, {PA_0, SYS_GPA_MFPL_PA0MFP_I2C2_SDA }},//Loc 0
  {{PB_13,SYS_GPB_MFPH_PB13MFP_I2C2_SCL},{PB_12,SYS_GPB_MFPH_PB12MFP_I2C2_SDA}},//Loc 1
};
const I2CPinDescription I2C_Desc[] = {
  {I2C0, I2C0_MODULE, I2C0PinAlt},
  {I2C1, I2C1_MODULE, I2C1PinAlt},
  {I2C2, I2C2_MODULE, I2C2PinAlt},
};
#endif

#ifndef CAN_DESC_USERDEF
const CANPinDescription CAN_Desc[] = {
//  {CAN0, CAN0_MODULE, CAN0_IRQn, {{84, SYS_GPA_MFPH_PA13MFP_CAN0_RXD}, {83, SYS_GPA_MFPH_PA12MFP_CAN0_TXD}}},
};
#endif
