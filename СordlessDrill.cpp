#include "�ordlessDrill.h"

�ordlessDrill::�ordlessDrill(int batteryLife, int weight) :
	Device(batteryLife), Appliances(weight)
{
}

void �ordlessDrill::ShowSpec()
{
	cout << "\n�ordlessDrill" << endl;
	cout << "Weight: " << _weight << " mm" << endl;
	cout << "BatteryLife: " << _batteryLife << " hours" << endl;
	cout << endl;
}

