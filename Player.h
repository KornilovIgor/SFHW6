#pragma once
#include "Device.h"

class Player final : public Device
{
public:
	Player(int batteryLife, int totalTracks);
	void ShowSpec() override;

private:
	int _totalTracks;
};