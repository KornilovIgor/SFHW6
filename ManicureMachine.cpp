#include "ManicureMachine.h"

ManicureMachine::ManicureMachine(int weight, int speed) :
	Appliances(weight), _speed(speed)
{
}

void ManicureMachine::ShowSpec()
{
	cout << "\nManicureMachine" << endl;
	cout << "Weight: " << _weight << " mm" << endl;
	cout << "Speed: " << _speed << " rpm" << endl;
	cout << endl;
}
