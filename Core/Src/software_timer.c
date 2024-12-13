/*
 * software_timer.c
 *
 *  Created on: Nov 2, 2024
 *      Author: QUÝ
 */
#include "software_timer.h"

int tick = 10;
int timer_flag[100];
int timer_counter[100];

void set_timer(int index, int counter)
{
	timer_flag[index] = 0;
	timer_counter[index] = counter/tick;
}
void led_timer()
{
	HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_5);
}
void timer_run()
{
	for (int i = 0; i < 10; i++)
	{
		if (timer_counter[i] >= 0)
		{
			timer_counter[i]--;
			if (timer_counter[i] <= 0)
			{
				timer_flag[i] = 1;
			}
		}
	}
}

int is_timer_expired(int index) {
    if (index < 0 || index >= 100) {
        return -1;
    }
    return timer_flag[index];
}



