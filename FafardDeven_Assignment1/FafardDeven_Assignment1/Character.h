#pragma once
#include <string>
using namespace std;

class Character
{
	public:
		void TakeDamage(int amount);
		Character(string name, int age);
		~Character();

	private:
		string name;
		int age;
		int health;
};

