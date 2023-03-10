//lib for lcd-------------------------------

#ifndef LCD_H_
#define LCD_H_
//------------------------------------------------
#include "stm32f4xx.h"
//------------------------------------------------
#define d4_set() HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, GPIO_PIN_SET)
#define d5_set() HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, GPIO_PIN_SET)
#define d6_set() HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, GPIO_PIN_SET)
#define d7_set() HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, GPIO_PIN_SET)
#define d4_reset() HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, GPIO_PIN_RESET)
#define d5_reset() HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, GPIO_PIN_RESET)
#define d6_reset() HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, GPIO_PIN_RESET)
#define d7_reset() HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, GPIO_PIN_RESET)
#define e1 HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, GPIO_PIN_SET) //set line E in 1
#define e0 HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, GPIO_PIN_RESET)//reset line E in 0
#define rs1 HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, GPIO_PIN_SET)//set line RS in 1
#define rs0 HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, GPIO_PIN_RESET)// reset line Rs in 0
//------------------------------------------------
void LCD_ini(void);
//------------------------------------------------
void LCD_Clear(void);
//------------------------------------------------
void LCD_SendChar(char ch);
//------------------------------------------------
void LCD_String(char*);
//------------------------------------------------

#endif /* LCD_H_ */