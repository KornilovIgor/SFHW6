#pragma once
#include"Appliances.h"

class WeldingMachine final : public Appliances
{
public:
	WeldingMachine(int weight, int power);
	void ShowSpec() override;

private:
	int _power;
};

