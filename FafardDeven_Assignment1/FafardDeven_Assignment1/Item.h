#pragma once
#include <string>
using namespace std;

class Item
{
	public:
		bool isActive;
		Item(string name, int power);
		~Item();

	private:
		string name;
		int power;
};

