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


//declare setTimer function
void setTimer0(int duration);//toggle led per second


#endif /* INC_SOFTWARE_TIMER_H_ */
