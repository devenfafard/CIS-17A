#include "Character.h"

void Character::TakeDamage(int amount)
{
	health -= amount;
}

Character::Character(string _name, int _age)
{
	name = _name;
	age = _age;
}

int Character::GetLevel()
{
	return this->age;
}

string Character::GetName()
{
	return name;
}

Character::~Character()
{
}
