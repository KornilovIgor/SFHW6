#pragma once
#include "Device.h"
#include "Appliances.h"

class �ordlessDrill final : public Device, public Appliances
{
public:
	�ordlessDrill(int batteryLife, int weight);
	void ShowSpec() override;
};

