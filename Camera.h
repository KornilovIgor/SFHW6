#pragma once
#include "Device.h"

class Camera final : public Device
{
public:
	Camera(int batteryLife, int diskSize);
	void showSpec() override;

private:
	int _diskSize;
};
