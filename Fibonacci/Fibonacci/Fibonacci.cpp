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

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started:
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
