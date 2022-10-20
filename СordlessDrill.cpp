#include "ÑordlessDrill.h"
#include <iostream>

ÑordlessDrill::ÑordlessDrill(int batteryLife, int weight) :
	Device(batteryLife), Appliances(weight)
{
}

void ÑordlessDrill::showSpec()
{
	std::cout << std::endl
		<< "ÑordlessDrill" << std::endl
		<< "Weight: " << _weight << " mm" << std::endl
		<< "BatteryLife: " << _batteryLife << " hours" << std::endl << std::endl;
}

