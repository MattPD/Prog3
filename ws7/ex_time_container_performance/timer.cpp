#include "timer.h"

std::chrono::microseconds time_func(void  (f)()){
	std::chrono::high_resolution_clock clock{};
	auto start=clock.now();
		f();
	auto end = clock.now();
	return end - start;
}
