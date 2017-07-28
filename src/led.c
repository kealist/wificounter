#include <stdint.h>
#include "led.h"
#include "hal_gpio_driver.h"


void led_init(void)	
{
	gpio_pin_conf_t led_pin_conf;

	
	//configure LED5 .
	led_pin_conf.pin = LED_USER5;
	led_pin_conf.mode = GPIO_PIN_OUTPUT_MODE;
	led_pin_conf.op_type = GPIO_PIN_OP_TYPE_PUSHPULL;
	led_pin_conf.speed = GPIO_PIN_SPEED_MEDIUM;
	led_pin_conf.pull = GPIO_PIN_NO_PULL_PUSH;
	hal_gpio_init(GPIOA, &led_pin_conf);
	//configure LED6 .
	led_pin_conf.pin = LED_USER6;
	hal_gpio_init(GPIOB, &led_pin_conf);
}


void led_turn_on(GPIO_TypeDef *GPIOx, uint16_t pin)
{
	hal_gpio_write_to_pin(GPIOx, pin, 1);
}

void led_turn_off(GPIO_TypeDef *GPIOx, uint16_t pin)
{
	hal_gpio_write_to_pin(GPIOx, pin, 0);
}

void led_toggle(GPIO_TypeDef *GPIOx, uint16_t pin)
{
	if (hal_gpio_read_from_pin(GPIOx,pin))
	{
		hal_gpio_write_to_pin(GPIOx, pin, 0);
	}
	else
	{
		hal_gpio_write_to_pin(GPIOx, pin, 1);
	}
}
