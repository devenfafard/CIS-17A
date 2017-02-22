#pragma once
#include <string>
using namespace std;

class Character
{
	public:
		Character(string name, int age);
		~Character();
		void TakeDamage(int amount);
		int GetLevel();
		string GetName();
		

	private:
		string name;
		int age;
		int health;
};

