#ifndef __LED_H_
#define __LED_H_

#include "hal_GPIO_driver.h"

#define EXTIx_IRQn	EXTIO_IRQn
#define EXTIx_IRQHandler	EXTIO_IRQHandler

#define GPIO_BUTTON_PIN 	0
#define GPIO_BUTTON_PORT	GPIOA

#define GPIOA_PIN_7 7
#define GPIOB_PIN_1 1
#define LED_USER5 GPIOA_PIN_7
#define LED_USER6 GPIOB_PIN_1

void led_init(void);	
void led_turn_on(GPIO_TypeDef *GPIOx, uint16_t pin);
void led_turn_off(GPIO_TypeDef *GPIOx, uint16_t pin);
void led_toggle(GPIO_TypeDef *GPIOx, uint16_t pin);


#endif 
