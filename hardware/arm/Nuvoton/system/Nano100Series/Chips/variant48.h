/*
  variant48.h
  
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

#ifndef GPIO_DESC_USERDEF
const GPIOPinDescription GPIO_Desc[] =
{
  {NULL, NULL, {NULL, NULL, NULL}}, //0
  {PB, BIT12, {(uint32_t)&SYS->PB_H_MFP, SYS_PB_H_MFP_PB12_MFP_Msk, SYS_PB_H_MFP_PB12_MFP_GPB12}}, //1
  {NULL, NULL, {NULL, NULL, NULL}}, /* 2,X32_OUT                                   */
  {NULL, NULL, {NULL, NULL, NULL}}, /* 3,X32_IN                                    */
  {PA, BIT11, {(uint32_t)&SYS->PA_H_MFP, SYS_PA_H_MFP_PA11_MFP_Msk, SYS_PA_H_MFP_PA11_MFP_GPA11}}, //4
  {PA, BIT10, {(uint32_t)&SYS->PA_H_MFP, SYS_PA_H_MFP_PA10_MFP_Msk, SYS_PA_H_MFP_PA10_MFP_GPA10}}, //5
  {PA, BIT9, {(uint32_t)&SYS->PA_H_MFP, SYS_PA_H_MFP_PA9_MFP_Msk,   SYS_PA_H_MFP_PA9_MFP_GPA9}},   //6
  {PA, BIT8, {(uint32_t)&SYS->PA_H_MFP, SYS_PA_H_MFP_PA8_MFP_Msk,   SYS_PA_H_MFP_PA8_MFP_GPA8}},   //7
  {PB, BIT4, {(uint32_t)&SYS->PB_L_MFP, SYS_PB_L_MFP_PB4_MFP_Msk, SYS_PB_L_MFP_PB4_MFP_GPB4}},     //8
  {PB, BIT5, {(uint32_t)&SYS->PB_L_MFP, SYS_PB_L_MFP_PB5_MFP_Msk, SYS_PB_L_MFP_PB5_MFP_GPB5}},     //9
  {NULL, NULL, {NULL, NULL, NULL}}, /* 10,LDO_CAP */
  {NULL, NULL, {NULL, NULL, NULL}}, /* 11,VDD     */
  {NULL, NULL, {NULL, NULL, NULL}}, /* 12,VSS     */
  {NULL, NULL, {NULL, NULL, NULL}}, /* 13,USB_VBUS       */
  {NULL, NULL, {NULL, NULL, NULL}}, /* 14,USB_VDD33_CAP  */
  {NULL, NULL, {NULL, NULL, NULL}}, /* 15,USB_D-         */
  {NULL, NULL, {NULL, NULL, NULL}}, /* 16,USB_D+         */
  {PB, BIT0, {(uint32_t)&SYS->PB_L_MFP, SYS_PB_L_MFP_PB0_MFP_Msk, SYS_PB_L_MFP_PB0_MFP_GPB0}},    //17
  {PB, BIT1, {(uint32_t)&SYS->PB_L_MFP, SYS_PB_L_MFP_PB1_MFP_Msk, SYS_PB_L_MFP_PB1_MFP_GPB1}},    //18
  {PB, BIT2, {(uint32_t)&SYS->PB_L_MFP, SYS_PB_L_MFP_PB2_MFP_Msk, SYS_PB_L_MFP_PB2_MFP_GPB2}},    //19
  {PB, BIT3, {(uint32_t)&SYS->PB_L_MFP, SYS_PB_L_MFP_PB3_MFP_Msk, SYS_PB_L_MFP_PB3_MFP_GPB3}},    //20
  {PC, BIT3, {(uint32_t)&SYS->PC_L_MFP, SYS_PC_L_MFP_PC3_MFP_Msk, SYS_PC_L_MFP_PC3_MFP_GPC3}},    //21
  {PC, BIT2, {(uint32_t)&SYS->PC_L_MFP, SYS_PC_L_MFP_PC2_MFP_Msk, SYS_PC_L_MFP_PC2_MFP_GPC2}},    //22
  {PC, BIT1, {(uint32_t)&SYS->PC_L_MFP, SYS_PC_L_MFP_PC1_MFP_Msk, SYS_PC_L_MFP_PC1_MFP_GPC1}},    //23
  {PC, BIT0, {(uint32_t)&SYS->PC_L_MFP, SYS_PC_L_MFP_PC0_MFP_Msk, SYS_PC_L_MFP_PC0_MFP_GPC0}},    //24
  {PA, BIT15, {(uint32_t)&SYS->PA_H_MFP, SYS_PA_H_MFP_PA15_MFP_Msk, SYS_PA_H_MFP_PA15_MFP_GPA15}},//25
  {PA, BIT14, {(uint32_t)&SYS->PA_H_MFP, SYS_PA_H_MFP_PA14_MFP_Msk, SYS_PA_H_MFP_PA14_MFP_GPA14}},//26
  {PA, BIT13, {(uint32_t)&SYS->PA_H_MFP, SYS_PA_H_MFP_PA13_MFP_Msk, SYS_PA_H_MFP_PA13_MFP_GPA13}},//27
  {PA, BIT12, {(uint32_t)&SYS->PA_H_MFP, SYS_PA_H_MFP_PA12_MFP_Msk, SYS_PA_H_MFP_PA12_MFP_GPA12}},//28
#if USE_ICE == 0
  {PF, BIT0, {(uint32_t)&SYS->PF_L_MFP, SYS_PF_L_MFP_PF0_MFP_Msk, SYS_PF_L_MFP_PF0_MFP_GPF0}},   //29
  {PF, BIT1, {(uint32_t)&SYS->PF_L_MFP, SYS_PF_L_MFP_PF1_MFP_Msk, SYS_PF_L_MFP_PF1_MFP_GPF1}},   //30
#else
  {NULL, NULL, {NULL, NULL, NULL}}, //29
  {NULL, NULL, {NULL, NULL, NULL}}, //30
#endif
  {NULL, NULL, {NULL, NULL, NULL}}, /*31,AVSS*/
  {PA, BIT0, {(uint32_t)&SYS->PA_L_MFP, SYS_PA_L_MFP_PA0_MFP_Msk, SYS_PA_L_MFP_PA0_MFP_GPA0}}, //32
  {PA, BIT1, {(uint32_t)&SYS->PA_L_MFP, SYS_PA_L_MFP_PA1_MFP_Msk, SYS_PA_L_MFP_PA1_MFP_GPA1}}, //33
  {PA, BIT2, {(uint32_t)&SYS->PA_L_MFP, SYS_PA_L_MFP_PA2_MFP_Msk, SYS_PA_L_MFP_PA2_MFP_GPA2}}, //34
  {PA, BIT3, {(uint32_t)&SYS->PA_L_MFP, SYS_PA_L_MFP_PA3_MFP_Msk, SYS_PA_L_MFP_PA3_MFP_GPA3}}, //35
  {PA, BIT4, {(uint32_t)&SYS->PA_L_MFP, SYS_PA_L_MFP_PA4_MFP_Msk, SYS_PA_L_MFP_PA4_MFP_GPA4}}, //36
  {PA, BIT5, {(uint32_t)&SYS->PA_L_MFP, SYS_PA_L_MFP_PA5_MFP_Msk, SYS_PA_L_MFP_PA5_MFP_GPA5}}, //37
  {PA, BIT6, {(uint32_t)&SYS->PA_L_MFP, SYS_PA_L_MFP_PA6_MFP_Msk, SYS_PA_L_MFP_PA6_MFP_GPA6}}, //38
  {NULL, NULL, {NULL, NULL, NULL}}, /*39,VREF*/
  {NULL, NULL, {NULL, NULL, NULL}}, /*40,AVDD*/
  {PC, BIT7, {(uint32_t)&SYS->PC_L_MFP, SYS_PC_L_MFP_PC7_MFP_Msk, SYS_PC_L_MFP_PC7_MFP_GPC7 }},   //41
  {PC, BIT6, {(uint32_t)&SYS->PC_L_MFP, SYS_PC_L_MFP_PC6_MFP_Msk, SYS_PC_L_MFP_PC6_MFP_GPC6 }},   //42
  {PB, BIT15, {(uint32_t)&SYS->PB_H_MFP, SYS_PB_H_MFP_PB15_MFP_Msk, SYS_PB_H_MFP_PB15_MFP_GPB15}},//43
  {NULL, NULL, {NULL, NULL, NULL}}, /*44,XT1_IN */
  {NULL, NULL, {NULL, NULL, NULL}}, /*45,XT1_OUT*/
  {NULL, NULL, {NULL, NULL, NULL}}, /*46,nRESET */
  {NULL, NULL, {NULL, NULL, NULL}}, /*47,PVSS*/
  {PB, BIT8, {(uint32_t)&SYS->PB_H_MFP, SYS_PB_H_MFP_PB8_MFP_Msk, SYS_PB_H_MFP_PB8_MFP_GPB8 }},   //48
};
#endif

#ifndef PWM_DESC_USERDEF
const PWMPinDescription PWM_Desc[] = {
  {PWM0, PWM0_CH01_MODULE, PWM0_IRQn, 0, 500, {PA_12, SYS_PA_H_MFP_PA12_MFP_PWM0_CH0}}, //0
  {PWM0, PWM0_CH01_MODULE, PWM0_IRQn, 1, 500, {PA_13, SYS_PA_H_MFP_PA13_MFP_PWM0_CH1}}, //1
  {PWM0, PWM0_CH23_MODULE, PWM0_IRQn, 2, 500, {PA_14, SYS_PA_H_MFP_PA14_MFP_PWM0_CH2}}, //2
  {PWM0, PWM0_CH23_MODULE, PWM0_IRQn, 3, 500, {PA_15, SYS_PA_H_MFP_PA15_MFP_PWM0_CH3}}, //3
};
#endif

#ifndef ADC_DESC_USERDEF
const ADCPinDescription ADC_Desc[] = {
  {ADC, ADC_MODULE, 0, {PA_0, SYS_PA_L_MFP_PA0_MFP_ADC_CH0}}, //0
  {ADC, ADC_MODULE, 1, {PA_1, SYS_PA_L_MFP_PA1_MFP_ADC_CH1}}, //1
  {ADC, ADC_MODULE, 2, {PA_2, SYS_PA_L_MFP_PA2_MFP_ADC_CH2}}, //2
  {ADC, ADC_MODULE, 3, {PA_3, SYS_PA_L_MFP_PA3_MFP_ADC_CH3}}, //3
  {ADC, ADC_MODULE, 4, {PA_4, SYS_PA_L_MFP_PA4_MFP_ADC_CH4}}, //4
  {ADC, ADC_MODULE, 5, {PA_5, SYS_PA_L_MFP_PA5_MFP_ADC_CH5}}, //5
  {ADC, ADC_MODULE, 6, {PA_6, SYS_PA_L_MFP_PA6_MFP_ADC_CH6}}, //6
};
#endif

#ifndef SPI_DESC_USERDEF
const SPIPinAlt_TypeDef SPI0PinAlt[] = {
    {{PC_1, SYS_PC_L_MFP_PC1_MFP_SPI0_SCLK }, {PC_3, SYS_PC_L_MFP_PC3_MFP_SPI0_MOSI0}, /* Loc 0 */
      {PC_2, SYS_PC_L_MFP_PC2_MFP_SPI0_MISO0}, {PC_0, SYS_PC_L_MFP_PC0_MFP_SPI0_SS0}}
};
const SPIPinAlt_TypeDef SPI1PinAlt[] = {
    {{PB_2, SYS_PB_L_MFP_PB2_MFP_SPI1_SCLK }, {PB_0, SYS_PB_L_MFP_PB0_MFP_SPI1_MOSI0}, /* Loc 0 */
      {PB_1, SYS_PB_L_MFP_PB1_MFP_SPI1_MISO0}, {PB_3, SYS_PB_L_MFP_PB3_MFP_SPI1_SS0}}
};
const SPIPinAlt_TypeDef SPI2PinAlt[] = { 
    {{PA_9, SYS_PA_H_MFP_PA9_MFP_SPI2_SCLK }, {PA_11, SYS_PA_H_MFP_PA11_MFP_SPI2_MOSI0}, /* Loc 0 */
      {PA_10, SYS_PA_H_MFP_PA10_MFP_SPI2_MISO0}, {PA_8, SYS_PA_H_MFP_PA8_MFP_SPI2_SS0}},
    {{PB_5, SYS_PB_L_MFP_PB5_MFP_SPI2_SCLK }, {PA_11, SYS_PA_H_MFP_PA11_MFP_SPI2_MOSI0}, /* Loc 1 */
      {PA_10, SYS_PA_H_MFP_PA10_MFP_SPI2_MISO0}, {PB_4, SYS_PB_L_MFP_PB4_MFP_SPI2_SS0}},
};
const SPIPinDescription SPI_Desc[] = {
  { SPI0, SPI0_MODULE, SPI0_IRQn, CLK_CLKSEL2_SPI0_S_HCLK, SPI0PinAlt},
  { SPI1, SPI1_MODULE, SPI1_IRQn, CLK_CLKSEL2_SPI1_S_HCLK, SPI1PinAlt},
  { SPI2, SPI2_MODULE, SPI2_IRQn, CLK_CLKSEL2_SPI2_S_HCLK, SPI2PinAlt},
};
#endif

#ifndef UART_DESC_USERDEF
const UARTPinAlt_TypeDef UART0PinAlt[] = {
  {{PA_14,SYS_PA_H_MFP_PA14_MFP_UART0_RX}, {PA_15,SYS_PA_H_MFP_PA15_MFP_UART0_TX}}, /* Loc 0 */
  {{PB_0, SYS_PB_L_MFP_PB0_MFP_UART0_RX }, {PB_1, SYS_PB_L_MFP_PB1_MFP_UART0_TX }}, /* Loc 1 */
};
const UARTPinAlt_TypeDef UART1PinAlt[] = {
  {{PB_4, SYS_PB_L_MFP_PB4_MFP_UART1_RX }, {PB_5, SYS_PB_L_MFP_PB5_MFP_UART1_TX}},  /* Loc 0 */
  {{PA_2, SYS_PA_L_MFP_PA2_MFP_UART1_RX }, {PA_3, SYS_PA_L_MFP_PA3_MFP_UART1_TX}},  /* Loc 1 */
};
const UARTPinDescription UART_Desc[] = {
  {UART0, UART0_MODULE, UART0_IRQn, UART0PinAlt},
  {UART1, UART1_MODULE, UART1_IRQn, UART1PinAlt}, 
};
#endif

#ifndef I2C_DESC_USERDEF
const I2CPinAlt_TypeDef I2C0PinAlt[] = {
  {{PA_9,  SYS_PA_H_MFP_PA9_MFP_I2C0_SCL },{PA_8, SYS_PA_H_MFP_PA8_MFP_I2C0_SDA }},   /* Loc 0 */
  {{PA_5,  SYS_PA_L_MFP_PA5_MFP_I2C0_SCL },{PA_4, SYS_PA_L_MFP_PA4_MFP_I2C0_SDA }},   /* Loc 1 */
  {{PA_13, SYS_PA_H_MFP_PA13_MFP_I2C0_SCL},{PA_12,SYS_PA_H_MFP_PA12_MFP_I2C0_SDA}},   /* Loc 2 */
};
const I2CPinAlt_TypeDef I2C1PinAlt[] = {
  {{PA_11, SYS_PA_H_MFP_PA11_MFP_I2C1_SCL},{PA_10, SYS_PA_H_MFP_PA10_MFP_I2C1_SDA}},  /* Loc 0 */
};
const I2CPinDescription I2C_Desc[] = {
  {I2C0, I2C0_MODULE, I2C0PinAlt},
  {I2C1, I2C1_MODULE, I2C1PinAlt},
};
#endif
