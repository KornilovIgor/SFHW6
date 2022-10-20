#include "�ordlessDrill.h"
#include <iostream>

�ordlessDrill::�ordlessDrill(int batteryLife, int weight) :
	Device(batteryLife), Appliances(weight)
{
}

void �ordlessDrill::showSpec()
{
	std::cout << std::endl
		<< "�ordlessDrill" << std::endl
		<< "Weight: " << _weight << " mm" << std::endl
		<< "BatteryLife: " << _batteryLife << " hours" << std::endl << std::endl;
}

