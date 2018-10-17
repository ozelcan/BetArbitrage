#include "Timer.h"
#include <iostream>

Timer::Timer()
{
	start = std::chrono::high_resolution_clock::now();
}

Timer::~Timer()
{
	end = std::chrono::high_resolution_clock::now();
	duration = end - start;
	std::cout << "Time elapsed: " << duration.count() * 1000.0f << "ms" << std::endl;
}
