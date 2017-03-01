#pragma once
#include <string>
using namespace std;

class Item
{
	public:
		Item(string name, int power);
		~Item();
		bool isActive;
		int GetPower();
		string GetName();

	private:
		string name = "";
		int power = 0;
};

