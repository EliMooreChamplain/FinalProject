#ifndef ROOM_H
#define ROOM_H

class Room
{
private:
	int monster;
	int item;
	int roomNum;

public:
	Room(int roomNum);

	int getMonster();
	int getItem();
	int getRoomNum();
};

#endif