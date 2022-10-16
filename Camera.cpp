#include "Camera.h"

Camera::Camera(int batteryLife, int diskSize) :
	Device(batteryLife),
	_diskSize(diskSize)
{
}

void Camera::ShowSpec()
{
	cout << "\nCamera" << endl;
	cout << "BatteryLife: " << _batteryLife << " hours" << endl;
	cout << "Disk Size: " << _diskSize << "GB" << endl;
	cout << endl;
}