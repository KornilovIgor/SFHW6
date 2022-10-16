#include "Player.h"

Player::Player(int batteryLife, int totalTracks) :
	Device(batteryLife),
	_totalTracks(totalTracks)
{
}

void Player::ShowSpec()
{
	cout << "\nPlayer" << endl;
	cout << "BatteryLife: " << _batteryLife << " hours" << endl;
	cout << "Total tracks: " << _totalTracks << endl;
	cout << endl;
}