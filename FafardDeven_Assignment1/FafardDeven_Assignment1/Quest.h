#pragma once
#include <string>
using namespace std;

class Quest
{
	public:
		int GetLevel();
		void SetLevel(int level);

		Quest();
		Quest(string location, int level);
		~Quest();

	private:
		string startingLocation;
		int minimumLevel;
};

