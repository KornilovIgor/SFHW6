#include "ÑordlessDrill.h"

ÑordlessDrill::ÑordlessDrill(int batteryLife, int weight) :
	Device(batteryLife), Appliances(weight)
{
}

void ÑordlessDrill::ShowSpec()
{
	cout << "\nÑordlessDrill" << endl;
	cout << "Weight: " << _weight << " mm" << endl;
	cout << "BatteryLife: " << _batteryLife << " hours" << endl;
	cout << endl;
}

