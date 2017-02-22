#include "Quest.h"



int Quest::GetLevel()
{
	return minimumLevel;
}

void Quest::SetLevel(int level)
{
	minimumLevel = level;
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
