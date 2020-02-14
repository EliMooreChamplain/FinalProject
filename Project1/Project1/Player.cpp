#include <string>
#include <vector>
#include "Player.h"

Player::Player()
{
	this->room = 0;
	this->items.push_back("Torch");
}

int Player::getRoom()
{
	return this->room;
}

std::vector<std::string> Player::getItems()
{
	return this->items;
}