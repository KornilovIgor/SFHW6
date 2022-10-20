#include "Camera.h"
#include <iostream>

Camera::Camera(int batteryLife, int diskSize) :
	Device(batteryLife),
	_diskSize(diskSize)
{
}

void Camera::showSpec()
{
	std::cout << std::endl
		<< "Camera" << std::endl
		<< "BatteryLife: " << _batteryLife << " hours" << std::endl
		<< "Disk Size: " << _diskSize << "GB" << std::endl
		<< std::endl;
}