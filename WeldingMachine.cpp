#include "WeldingMachine.h"
#include <iostream>

WeldingMachine::WeldingMachine(int weight, int power) :
	Appliances(weight), _power(power)
{
}

void WeldingMachine::showSpec()
{
	std::cout << std::endl 
		<< "WeldingMachine" << std::endl
		<< "Weight: " << _weight << " mm" << std::endl
		<< "Power: " << _power << " W" << std::endl 
		<< std::endl;
}