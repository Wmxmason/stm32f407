#ifndef __LED_H
#define __LED_H

#include "stdbool.h"
#include "stdint.h"
#include "string.h"
#include "stm32f4xx.h"

typedef struct led_desc
{
	uint32_t RCC_LED;
	GPIO_TypeDef* LED_port;
	uint16_t LED_Pin;
	BitAction LED_ON_LVL;
	BitAction LED_OFF_LVL;
}led_desc_t;

void led_init(const led_desc_t* led);
void led_on(const led_desc_t* led);
void led_off(const led_desc_t* led);

#endif /* __LED_H */
