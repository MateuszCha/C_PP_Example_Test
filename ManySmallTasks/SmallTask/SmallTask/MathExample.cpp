#include "mathExample.hpp"
#include "myExepction.cpp"
#include <iostream>
#include <math.h>

static const int ROUND_VALUE = 100;

double MathExample::quadraticFunction() {
	return this->quadraticFunction(a, b, c);
}
double MathExample::quadraticFunction(int a, int b, int c) {
	double result;
	double delta = sqrt(static_cast<double>(b) * b - static_cast<double>(4) * a * c);
	if (delta >= 0) {
		if ((-b - delta) >= (-b + delta)) {
			result = ((-b - delta) / (2 * static_cast<double>(a)));
		}
		else {
			result = (-b + delta) / (2 * static_cast<double>(a));
		}
		int value = result * ROUND_VALUE;
		result = value / ROUND_VALUE;
	}
	else throw DeltaUnderZeroExepction();
	return result;
}

void MathExample::getArguments() {
	std::cout << "podaj Ax2 + Bx + C:" << std::endl;
	std::cout << "podaj A :" << std::endl;
	std::cin >> a; 
	std::cout << "podaj B :" << std::endl;
	std::cin >> b;
	std::cout << "podaj C :" << std::endl;
	std::cin >> c;
}
