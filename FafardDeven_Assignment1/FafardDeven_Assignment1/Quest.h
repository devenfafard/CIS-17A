#pragma once
#include <string>
using namespace std;

class Quest
{
	public:
		Quest();
		Quest(string location, int _level);
		~Quest();
		int GetLevel();
		string GetLocation();

	private:
		string startingLocation = "";
		int minimumLevel = 0;
};

