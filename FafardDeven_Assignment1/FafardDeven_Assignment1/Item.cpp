#include "Item.h"

Item::Item(string _name, int _power)
{
	isActive = true;
	name = _name;
	power = _power;
}

Item::~Item()
{
}

int Item::GetPower()
{
	return this->power;
}

string Item::GetName()
{
	return this->name;
}
