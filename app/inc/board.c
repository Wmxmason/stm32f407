#include "board.h"

const led_desc_t led1=
{
    .RCC_LED = RCC_AHB1Periph_GPIOE,
    .LED_port = GPIOE,
    .LED_Pin = GPIO_Pin_9,
    .LED_ON_LVL = Bit_RESET,
    .LED_OFF_LVL = Bit_SET
};

const led_desc_t led2=
{
    .RCC_LED = RCC_AHB1Periph_GPIOB,
    .LED_port = GPIOB,
    .LED_Pin = GPIO_Pin_1,
    .LED_ON_LVL = Bit_RESET,
    .LED_OFF_LVL = Bit_SET
};

const led_desc_t led3=
{
    .RCC_LED = RCC_AHB1Periph_GPIOB,
    .LED_port = GPIOB,
    .LED_Pin = GPIO_Pin_0,
    .LED_ON_LVL = Bit_RESET,
    .LED_OFF_LVL = Bit_SET
};
