#pragma once
#include "Appliances.h"

class ManicureMachine final : public Appliances
{
public:
	ManicureMachine(int weight, int speed);
	void showSpec() override;

private:
	int _speed;
};