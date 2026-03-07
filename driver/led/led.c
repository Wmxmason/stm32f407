#include "led.h"

void led_init(const led_desc_t* led)
{
	RCC_AHB1PeriphClockCmd(led->RCC_LED, ENABLE);

	GPIO_InitTypeDef gpio_init;
	memset(&gpio_init, 0, sizeof(GPIO_InitTypeDef)); // 因为led_init里这个gpio_init是局部变量，所以初始化可能为任意值，为了避免出错，需要手动初始化为0
	gpio_init.GPIO_Mode = GPIO_Mode_OUT;
	gpio_init.GPIO_OType = GPIO_OType_PP;
	gpio_init.GPIO_Speed = GPIO_Medium_Speed;
	gpio_init.GPIO_Pin = led->LED_Pin;
	GPIO_Init(led->LED_port, &gpio_init);

	GPIO_WriteBit(led->LED_port, led->LED_Pin, led->LED_ON_LVL);
}

void led_on(const led_desc_t* led)
{
	GPIO_WriteBit(led->LED_port, led->LED_Pin, led->LED_ON_LVL);
}

void led_off(const led_desc_t* led)
{
	GPIO_WriteBit(led->LED_port, led->LED_Pin, led->LED_OFF_LVL);
}
