#include "Player.h"
#include <iostream>

Player::Player(int batteryLife, int totalTracks) :
	Device(batteryLife),
	_totalTracks(totalTracks)
{
}

void Player::showSpec()
{
	std::cout << std::endl
		<< "Player" << std::endl
		<< "BatteryLife: " << _batteryLife << " hours" << std::endl
		<< "Total tracks: " << _totalTracks << std::endl
		<< std::endl;
}