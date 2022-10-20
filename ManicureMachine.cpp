#include "ManicureMachine.h"
#include <iostream>

ManicureMachine::ManicureMachine(int weight, int speed) :
	Appliances(weight), _speed(speed)
{
}

void ManicureMachine::showSpec()
{
	std::cout << std::endl 
		<< "ManicureMachine" << std::endl
		<< "Weight: " << _weight << " mm" << std::endl
		<< "Speed: " << _speed << " rpm" << std::endl
		<< std::endl;
}