/*
 * software_timer.c
 *
 *  Created on: Oct 1, 2025
 *      Author: tntam
 */

//declare timer_counter variables----------------------------
int timer0_counter = 0;


//declare timer_flag variables--------------------------
int timer0_flag = 0;


//deploy setTimer function---------------------------
void setTimer0(int duration){
	timer0_counter = duration;
	timer0_flag = 0;
}

void timerRun(){
	//led_red toggle per second
	if(timer0_counter > 0)
	{
		timer0_counter--;
		if(timer0_counter <= 0)
		{
			timer0_flag = 1;
		}
	}
}

//led_red toggle per second
//	if(counter > 0)
//	{
//		counter--;
//		if(counter <= 0)
//		{
//			counter = 100;
//			HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
//		}
//	}
