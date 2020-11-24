#include<iostream>
#include "mathExample.hpp"
#include "timeExample.hpp"
int main() {
	
	//Quadratic Equation//
	//MathExample math;
	//std::cout << math.quadraticFunction() << std::endl; 

	//Convert Minutes into Seconds//
	//Convert Hours into Seconds//
	TimeExample time;
	std::cout << time.ConvertMinutesToSeconds(time.ConvertHouersToMinutes(4)) << std::endl;
	std::cout << "cos" << std::endl;
	return 0;
}
