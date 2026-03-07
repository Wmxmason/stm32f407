#include "board.h"
#include "delay.h"

int main(void)
{
	led_init(&led1);
	led_init(&led2);
	led_init(&led3);
	while (1)
	{
		led_on(&led1);
		led_on(&led2);
		led_on(&led3);
		led_delay();
		led_off(&led1);
		led_off(&led2);
		led_on(&led3);
		led_delay();
	}
}
