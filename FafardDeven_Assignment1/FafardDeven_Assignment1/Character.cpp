#include "Character.h"

void Character::TakeDamage(int amount)
{
	health -= amount;
}

void Character::Heal(int amount)
{
	health += amount;
}

Character::Character(string _name, int _level)
{
	name = _name;
	level = _level;
}

Character::Character(string _name, int _level, int _health)
{
	name = _name;
	level = _level;
	health = _health;
}

int Character::GetLevel()
{
	return this->level;
}

string Character::GetName()
{
	return name;
}

void Character::SetName(string _name)
{
	this->name = _name;
}


void Character::SetLevel(int _level)
{
	level = _level;
}

Character::~Character()
{
}
