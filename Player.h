#pragma once
#include "Device.h"

class Player final : public Device
{
public:
	Player(int batteryLife, int totalTracks);
	void showSpec() override;

private:
	int _totalTracks;
};