#include <stdlib.h>
#include <time.h>
#include "Room.h"

Room::Room(int roomNum)
{
	srand(time(NULL));
	this->monster = rand() % 4;
	this->item = rand() % 4;
	this->roomNum = roomNum;

}

int Room::getMonster()
{
	return this->monster;
}

int Room::getItem()
{
	return this->item;
}

int Room::getRoomNum()
{
	return this->roomNum;
}