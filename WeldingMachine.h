#pragma once
#include"Appliances.h"

class WeldingMachine final : public Appliances
{
public:
	WeldingMachine(int weight, int power);
	void showSpec() override;

private:
	int _power;
};

