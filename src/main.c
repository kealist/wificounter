/*
Write a  program to PUSH the contents of R0,R1,R2 Registers 
using MSP as a stack pointer, and then POP the contents back  using PSP as a stack pointer 
*/

#include <stdint.h>
#include "stm32f7xx.h"
#include "hal_gpio_driver.h"
#include "hal_spi_driver.h"
#include "led.h"

int  main(void)
{
	
	_HAL_RCC_GPIOA_CLK_ENABLE();
	_HAL_RCC_GPIOB_CLK_ENABLE();
	

	/* LEDs PA7 , PB1 */
	led_init();
  /* Button PA0*/
	hal_gpio_configure_interrupt(GPIO_BUTTON_PIN, INT_FALLING_EDGE);
	hal_gpio_enable_interrupt(GPIO_BUTTON_PIN, EXTI0_IRQn);
	while (1) {
		/*
		
			led_toggle(GPIOA, LED_USER5);
			led_toggle(GPIOB, LED_USER6);
		*/
	}
}

void EXTI0_IRQHandler(void) 
{	
	hal_gpio_clear_interrupt (GPIO_BUTTON_PIN);
	led_toggle(GPIOA, LED_USER5);
	led_toggle(GPIOB, LED_USER6);
}

