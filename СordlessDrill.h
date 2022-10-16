#pragma once
#include "Device.h"
#include "Appliances.h"

class ÑordlessDrill final : public Device, public Appliances
{
public:
	ÑordlessDrill(int batteryLife, int weight);
	void ShowSpec() override;
};

