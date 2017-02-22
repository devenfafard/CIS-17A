#pragma once
#include <string>
using namespace std;

class Quest
{
	public:
		int GetLevel();
		void SetLevel(int _level);

		Quest();
		Quest(string location, int _level);
		~Quest();

	private:
		string startingLocation;
		int minimumLevel;
};

