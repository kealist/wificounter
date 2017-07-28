#ifndef __HAL_GPIO_DRIVER_H
#define __HAL_GPIO_DRIVER_H

#include "stm32f723xx.h"

/* GPIO Mode Settings values */
#define GPIO_PIN_INPUT_MODE				( (uint32_t) 0x00)
#define GPIO_PIN_OUTPUT_MODE			( (uint32_t) 0x01)
#define GPIO_PIN_ALTERNATE_MODE		( (uint32_t) 0x02)

/* GPIO OP type selection values */
#define GPIO_PIN_OP_TYPE_PUSHPULL				( (uint32_t) 0x00)
#define GPIO_PIN_OP_TYPE_OPEN_DRAIN			( (uint32_t) 0x01)

/* GPIO Speed type selection values */
#define GPIO_PIN_SPEED_LOW				( (uint32_t) 0x00)
#define GPIO_PIN_SPEED_MEDIUM			( (uint32_t) 0x01)
#define GPIO_PIN_SPEED_HIGH				( (uint32_t) 0x02)
#define GPIO_PIN_SPEED_VERY_HIGH	( (uint32_t) 0x03)

/* GPIO Pull up / Pull down selection */
#define GPIO_PIN_NO_PULL_PUSH		( (uint32_t) 0x00)
#define GPIO_PIN_PULL_UP				( (uint32_t) 0x01)
#define GPIO_PIN_PULL_DOWN			( (uint32_t) 0x11)


/* GPIO PORT */
#define GPIO_PORT_A GPIOA
#define GPIO_PORT_B GPIOB
#define GPIO_PORT_C GPIOC
#define GPIO_PORT_D GPIOD
#define GPIO_PORT_E GPIOE
#define GPIO_PORT_F GPIOF
#define GPIO_PORT_G GPIOG
#define GPIO_PORT_H GPIOH
#define GPIO_PORT_I GPIOI

/* Macros to enable clock for different GPIO ports in RCC register */
#define _HAL_RCC_GPIOA_CLK_ENABLE()	(RCC->AHB1ENR |= (1 << 0))
#define _HAL_RCC_GPIOB_CLK_ENABLE()	(RCC->AHB1ENR |= (1 << 1))
#define _HAL_RCC_GPIOC_CLK_ENABLE()	(RCC->AHB1ENR |= (1 << 2))
#define _HAL_RCC_GPIOD_CLK_ENABLE()	(RCC->AHB1ENR |= (1 << 3))
#define _HAL_RCC_GPIOE_CLK_ENABLE()	(RCC->AHB1ENR |= (1 << 4))
#define _HAL_RCC_GPIOF_CLK_ENABLE()	(RCC->AHB1ENR |= (1 << 5))
#define _HAL_RCC_GPIOG_CLK_ENABLE()	(RCC->AHB1ENR |= (1 << 6))
#define _HAL_RCC_GPIOH_CLK_ENABLE()	(RCC->AHB1ENR |= (1 << 7))
#define _HAL_RCC_GPIOI_CLK_ENABLE()	(RCC->AHB1ENR |= (1 << 8))

/* GPIO pin structure */
typedef struct {
	uint32_t	pin; 		/* */
	uint32_t	mode;/* */
	uint32_t	op_type;/* */
	uint32_t	pull;/* */
	uint32_t	speed;/* */
	uint32_t	alternate;/* */
} gpio_pin_conf_t;/* */

typedef enum 
{
	INT_RISING_EDGE,
	INT_FALLING_EDGE,
	INT_RISING_FALLING_EDGE
} int_edge_sel_t;

/* Driver Exposed APIs */

/**
	* @brief Read a value from a given pin number
	* @param *GPIOx : GPIO Port Base address
	* @param gpio_pin_conf : Pointer to the pin conf structure (application)
	*	@retval uint8_t : value read
	*/

void hal_gpio_init(GPIO_TypeDef *GPIOx, gpio_pin_conf_t *gpio_pin_conf);

void hal_gpio_write_to_pin(GPIO_TypeDef *GPIOx, uint16_t pin_no, uint8_t val);

uint8_t hal_gpio_read_from_pin(GPIO_TypeDef *GPIOx, uint16_t pin_no);

void hal_gpio_configure_interrupt(uint16_t pin_no, int_edge_sel_t edge_sel);

void hal_gpio_enable_interrupt(uint16_t pin_no, IRQn_Type irq_no);

void hal_gpio_clear_interrupt(uint16_t pin_no);

#endif /* __HAL_GPIO_DRIVER_H */
