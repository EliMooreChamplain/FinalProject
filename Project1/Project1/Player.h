#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>

class Player
{
private:
	int room;
	std::vector<std::string> items;

public:
	Player();

	int getRoom();
	std::vector<std::string> getItems();
};

#endif