#include "Character.h"

void Character::TakeDamage(int amount)
{
	health -= amount;
}

Character::Character(string name, int age)
{
	name = name;
	age = age;
}

Character::~Character()
{
}
