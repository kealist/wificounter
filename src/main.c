/*
Write a  program to PUSH the contents of R0,R1,R2 Registers 
using MSP as a stack pointer, and then POP the contents back  using PSP as a stack pointer 
*/

#include <stdint.h>
#include "stm32f7xx.h"
#include "hal_gpio_driver.h"
#include "led.h"

int  main(void)
{
	uint32_t i;
	led_init();
	/* LEDs PA7 , PB1 */

	while (1) {
			led_turn_on(GPIOA, LED_USER5);
			led_turn_on(GPIOB, LED_USER6);
			for (i=0;i<500000;i++) {}
			led_turn_off(GPIOA, LED_USER5);
			led_turn_off(GPIOB, LED_USER6);
			for (i=0;i<500000;i++) {}
	}
	return 0;
}
