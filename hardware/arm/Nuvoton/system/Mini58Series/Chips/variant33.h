
#ifndef GPIO_DESC_USERDEF
const GPIOPinDescription GPIO_Desc[] =
{
  {NULL, NULL, {NULL, NULL, NULL}},                                           // 0
  {P1, BIT5, {(uint32_t)&SYS->P1_MFP, SYS_MFP_P15_Msk, SYS_MFP_P15_GPIO }},   // 1
  {NULL, NULL, {NULL, NULL, NULL}},                                           // 2
  {P3, BIT0, {(uint32_t)&SYS->P3_MFP, SYS_MFP_P30_Msk, SYS_MFP_P30_GPIO }},   // 3
  {NULL, NULL, {NULL, NULL, NULL}},                                           // 4
  {P3, BIT1, {(uint32_t)&SYS->P3_MFP, SYS_MFP_P31_Msk, SYS_MFP_P31_GPIO }},   // 5
  {P3, BIT2, {(uint32_t)&SYS->P3_MFP, SYS_MFP_P32_Msk, SYS_MFP_P32_GPIO }},   // 6
  {P3, BIT4, {(uint32_t)&SYS->P3_MFP, SYS_MFP_P34_Msk, SYS_MFP_P34_GPIO }},   // 7
  {P3, BIT5, {(uint32_t)&SYS->P3_MFP, SYS_MFP_P35_Msk, SYS_MFP_P35_GPIO }},   // 8
  {P3, BIT6, {(uint32_t)&SYS->P3_MFP, SYS_MFP_P36_Msk, SYS_MFP_P36_GPIO }},   // 9
  {NULL, NULL, {NULL, NULL, NULL}},                                           //10
  {NULL, NULL, {NULL, NULL, NULL}},                                           //11
  {NULL, NULL, {NULL, NULL, NULL}},                                           //12
  {NULL, NULL, {NULL, NULL, NULL}}, 									      //13
  {P2, BIT2, {(uint32_t)&SYS->P2_MFP, SYS_MFP_P22_Msk, SYS_MFP_P22_GPIO }},   //14
  {P2, BIT3, {(uint32_t)&SYS->P2_MFP, SYS_MFP_P23_Msk, SYS_MFP_P23_GPIO }},   //15
  {P2, BIT4, {(uint32_t)&SYS->P2_MFP, SYS_MFP_P24_Msk, SYS_MFP_P24_GPIO }},   //16
  {P2, BIT5, {(uint32_t)&SYS->P2_MFP, SYS_MFP_P25_Msk, SYS_MFP_P25_GPIO }},   //17
  {P2, BIT6, {(uint32_t)&SYS->P2_MFP, SYS_MFP_P26_Msk, SYS_MFP_P26_GPIO }},   //18
#if USE_ICE == 0
  {P4, BIT6, {(uint32_t)&SYS->P4_MFP, SYS_MFP_P46_Msk, SYS_MFP_P46_GPIO }},   //19
  {P4, BIT7, {(uint32_t)&SYS->P4_MFP, SYS_MFP_P47_Msk, SYS_MFP_P47_GPIO }},   //20
#else
  {NULL, NULL, {NULL, NULL, NULL}},   //19
  {NULL, NULL, {NULL, NULL, NULL}},   //20
#endif
  {P0, BIT7, {(uint32_t)&SYS->P0_MFP, SYS_MFP_P07_Msk, SYS_MFP_P07_GPIO }},   //21
  {P0, BIT6, {(uint32_t)&SYS->P0_MFP, SYS_MFP_P06_Msk, SYS_MFP_P06_GPIO }},   //22
  {P0, BIT5, {(uint32_t)&SYS->P0_MFP, SYS_MFP_P05_Msk, SYS_MFP_P05_GPIO }},   //23
  {P0, BIT4, {(uint32_t)&SYS->P0_MFP, SYS_MFP_P04_Msk, SYS_MFP_P04_GPIO }},   //24
  {P0, BIT1, {(uint32_t)&SYS->P0_MFP, SYS_MFP_P01_Msk, SYS_MFP_P01_GPIO }},   //25
  {P0, BIT0, {(uint32_t)&SYS->P0_MFP, SYS_MFP_P00_Msk, SYS_MFP_P00_GPIO }},   //26
  {NULL, NULL, {NULL, NULL, NULL}}, 						  				  //27
  {NULL, NULL, {NULL, NULL, NULL}}, 						  				  //28
  {P1, BIT0, {(uint32_t)&SYS->P1_MFP, SYS_MFP_P10_Msk, SYS_MFP_P10_GPIO }},   //29
  {P1, BIT2, {(uint32_t)&SYS->P1_MFP, SYS_MFP_P12_Msk, SYS_MFP_P12_GPIO}},    //30
  {P1, BIT3, {(uint32_t)&SYS->P1_MFP, SYS_MFP_P13_Msk, SYS_MFP_P13_GPIO}},    //31
  {P1, BIT4, {(uint32_t)&SYS->P1_MFP, SYS_MFP_P14_Msk, SYS_MFP_P14_GPIO}},    //32
};
#endif

#ifndef PWM_DESC_USERDEF
const PWMPinDescription PWM_Desc[]={
	{PWM,PWMCH01_MODULE,PWM_IRQn,1,500,{P2_2,SYS_MFP_P22_PWM0_CH0}},  //3  
	{PWM,PWMCH01_MODULE,PWM_IRQn,1,500,{P2_3,SYS_MFP_P23_PWM0_CH1}},  //3  
	{PWM,PWMCH23_MODULE,PWM_IRQn,2,500,{P2_4,SYS_MFP_P24_PWM0_CH2}},  //4 	
	{PWM,PWMCH23_MODULE,PWM_IRQn,3,500,{P2_5,SYS_MFP_P25_PWM0_CH3}},  //4 	
	{PWM,PWMCH45_MODULE,PWM_IRQn,4,500,{P2_6,SYS_MFP_P26_PWM0_CH4}},  //4 	
	{PWM,PWMCH01_MODULE,PWM_IRQn,0,500,{P0_7,SYS_MFP_P07_PWM0_CH0}},  //5 
	{PWM,PWMCH01_MODULE,PWM_IRQn,1,500,{P0_6,SYS_MFP_P06_PWM0_CH1}},  //6 
	{PWM,PWMCH45_MODULE,PWM_IRQn,4,500,{P0_5,SYS_MFP_P05_PWM0_CH4}},  //7 
	{PWM,PWMCH45_MODULE,PWM_IRQn,5,500,{P0_4,SYS_MFP_P04_PWM0_CH5}},  //7 
	{PWM,PWMCH01_MODULE,PWM_IRQn,0,500,{P1_2,SYS_MFP_P12_PWM0_CH0}},  //0
	{PWM,PWMCH01_MODULE,PWM_IRQn,1,500,{P1_3,SYS_MFP_P13_PWM0_CH1}},  //1  
	{PWM,PWMCH45_MODULE,PWM_IRQn,4,500,{P1_4,SYS_MFP_P14_PWM0_CH4}},  //2  
};
#endif

#ifndef ADC_DESC_USERDEF
const ADCPinDescription ADC_Desc[]={
	{ADC,ADC_MODULE,5,{P1_5,SYS_MFP_P15_ADC_CH5}},		//5	
	{ADC,ADC_MODULE,6,{P3_0,SYS_MFP_P30_ADC_CH6}},   	//6 
	{ADC,ADC_MODULE,7,{P3_1,SYS_MFP_P31_ADC_CH7}},   	//7 
	{ADC,ADC_MODULE,0,{P5_3,SYS_MFP_P53_ADC_CH0}},   	//0 
	{ADC,ADC_MODULE,1,{P1_0,SYS_MFP_P10_ADC_CH1}},   	//1 
	{ADC,ADC_MODULE,2,{P1_2,SYS_MFP_P12_ADC_CH2}},		//2
	{ADC,ADC_MODULE,3,{P1_3,SYS_MFP_P13_ADC_CH3}},		//3
	{ADC,ADC_MODULE,4,{P1_4,SYS_MFP_P14_ADC_CH4}},		//4
};
#endif

#ifndef UART_DESC_USERDEF
const UARTPinAlt_TypeDef UART0PinAlt[] = {
   {{P0_1,SYS_MFP_P01_UART0_RXD}, {P0_0,SYS_MFP_P00_UART0_TXD}},	
   {{P1_2,SYS_MFP_P12_UART0_RXD}, {P1_3,SYS_MFP_P13_UART0_TXD}},	
   {{P5_1,SYS_MFP_P51_UART0_RXD}, {P5_0,SYS_MFP_P50_UART0_TXD}},	
};
const UARTPinAlt_TypeDef UART1PinAlt[] = {
   {{P1_4,SYS_MFP_P14_UART1_RXD}, {P1_5,SYS_MFP_P15_UART1_TXD}},	
   {{P2_4,SYS_MFP_P24_UART1_RXD}, {P2_5,SYS_MFP_P25_UART1_TXD}},	
#if USE_ICE == 0
   {{P4_6,SYS_MFP_P46_UART1_RXD}, {P4_7,SYS_MFP_P47_UART1_TXD}},
#endif
};
const UARTPinDescription UART_Desc[]={
   {UART0,UART0_MODULE,UART0_IRQn,UART0PinAlt},	
   {UART1,UART1_MODULE,UART1_IRQn,UART1PinAlt},	
};
#endif

#ifndef SPI_DESC_USERDEF
const SPIPinAlt_TypeDef SPI0PinAlt[] = { 
	  {{P0_7,SYS_MFP_P07_SPI0_CLK},{P0_6,SYS_MFP_P06_SPI0_MISO},{P0_5,SYS_MFP_P05_SPI0_MOSI}, {P0_4,SYS_MFP_P04_SPI0_SS}},
};
const SPIPinDescription SPI_Desc[]={
  {SPI0,SPI0_MODULE,SPI_IRQn,CLK_CLKSEL1_SPISEL_HCLK, SPI0PinAlt},
};
#endif

#ifndef I2C_DESC_USERDEF
const I2CPinAlt_TypeDef I2C0PinAlt[] = {
 {{P3_4,SYS_MFP_P34_I2C0_SDA},{P3_5, SYS_MFP_P35_I2C0_SCL}},
};
const I2CPinAlt_TypeDef I2C1PinAlt[] = {
 {{P2_3,SYS_MFP_P23_I2C1_SDA},{P2_2, SYS_MFP_P22_I2C1_SCL}},
 {{P5_0,SYS_MFP_P50_I2C1_SDA},{P5_1, SYS_MFP_P51_I2C1_SCL}},
};
const I2CPinDescription I2C_Desc[]={	
 {I2C0,I2C0_MODULE,I2C0PinAlt},
 {I2C1,I2C1_MODULE,I2C1PinAlt},
};
#endif

#ifndef PORT_DESC_USERDEF
const GPIOPortDescription PORT_Desc[]={
	{P0,0b11110011,(uint32_t)&SYS->P0_MFP,SYS_P0_MFP_MFP_Pos,SYS_P0_MFP_MFP_Msk,}, 
	{P1,0b00111101,(uint32_t)&SYS->P1_MFP,SYS_P1_MFP_MFP_Pos,SYS_P1_MFP_MFP_Msk,}, 
	{P2,0b01111100,(uint32_t)&SYS->P2_MFP,SYS_P2_MFP_MFP_Pos,SYS_P2_MFP_MFP_Msk,}, 
	{P3,0b01111011,(uint32_t)&SYS->P3_MFP,SYS_P3_MFP_MFP_Pos,SYS_P3_MFP_MFP_Msk,}, 
	{P4,0b11000000,(uint32_t)&SYS->P4_MFP,SYS_P4_MFP_MFP_Pos,SYS_P4_MFP_MFP_Msk,}, 
	{P5,0b00011111,(uint32_t)&SYS->P4_MFP,SYS_P4_MFP_MFP_Pos,SYS_P4_MFP_MFP_Msk,}, 
};
#endif
