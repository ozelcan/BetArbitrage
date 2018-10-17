/*
 * Timer.h
 *
 *  Created on: Oct 17, 2018
 *      Author: can
 */

#ifndef TIMER_H_
#define TIMER_H_

#include <chrono>
#include <thread>

class Timer
{
	std::chrono::high_resolution_clock::time_point start, end;
	std::chrono::duration<float> duration;

public:
	Timer();
	~Timer();
};

#endif /* TIMER_H_ */
