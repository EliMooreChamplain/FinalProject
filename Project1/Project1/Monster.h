#ifndef MONSTER_H
#define MONSTER_H

class Monster
{
private:
	int health;
	int attack;

public:
	Monster();

	int getHealth();
	int getAttack();
};

#endif