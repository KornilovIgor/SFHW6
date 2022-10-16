#include "WeldingMachine.h"

WeldingMachine::WeldingMachine(int weight, int power) :
	Appliances(weight), _power(power)
{
}

void WeldingMachine::ShowSpec()
{
	cout << "\nWeldingMachine" << endl;
	cout << "Weight: " << _weight << " mm" << endl;
	cout << "Power: " << _power << " W" << endl;
	cout << endl;
}