/*
 * software_timer.h
 *
 *  Created on: Oct 1, 2025
 *      Author: tntam
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

void timerRun();

//declare timer_flag variables
extern int timer0_flag;//toggle led per second
extern int timer1_flag;//toggle dot per second
extern int timer2_flag;//digital clock
extern int timer3_flag;//update 7SEG
extern int timer4_flag;//led matrix
extern int timer5_flag;//shift left

//declare setTimer function
void setTimer0(int duration);//toggle led per second
void setTimer1(int duration);//toggle dot per second
void setTimer2(int duration);//digital clock
void setTimer3(int duration);//update 7SEG
void setTimer4(int duration);//led matrix
void setTimer5(int duration);//shift left
#endif /* INC_SOFTWARE_TIMER_H_ */
