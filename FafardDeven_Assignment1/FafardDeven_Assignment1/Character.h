#pragma once
#include <string>
using namespace std;

class Character
{
	public:
		void TakeDamage(int amount);
		Character(string name, int age);
		int GetLevel();
		string GetName();
		~Character();

	private:
		string name;
		int age;
		int health;
};

