#pragma once
#include <string>
using namespace std;

class Character
{
	public:
		Character(string name, int level);
		Character(string name, int level, int health);
		~Character();
		void TakeDamage(int amount);
		void Heal(int amount);
		int GetLevel();
		void SetLevel(int _level);
		string GetName();
		void SetName(string _name);
	
	private:
		string name = "";
		int level = 0;
		int health = 0;
};

