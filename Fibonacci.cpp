// Fibonacci.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

int main()
{
	unsigned long long x = 0;
	unsigned long long y = 1;
	int count = 0;
	std::cout << std::setw(2) << std::setfill('0') << 0 << ": " << x << std::endl;
	std::cout << std::setw(2) << std::setfill('0') << 1 << ": " << y << std::endl;
	for (int i = 2; i < 94; i++) {
		y += x;
		x = y - x;
		std::cout << std::setw(2) << std::setfill('0') << i << ": " << y << std::endl;
	}
}
