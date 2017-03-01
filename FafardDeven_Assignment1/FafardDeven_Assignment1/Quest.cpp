#include "Quest.h"



int Quest::GetLevel()
{
	return minimumLevel;
}

string Quest::GetLocation()
{
	return startingLocation;
}

Quest::Quest()
{
}

Quest::Quest(string location, int _level)
{
	minimumLevel = _level;
	startingLocation = location;
}


Quest::~Quest()
{
}
