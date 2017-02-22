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
		void SetLevel(int _level);

	private:
		string startingLocation;
		int minimumLevel;
};

