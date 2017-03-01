/*
 Deven Fafard
 CIS-17A
 Assignment 1
*/
#include <iostream>
#include <string>
#include "Character.h"
#include "Item.h"
#include "Quest.h"
#include "Status.h"

void initUser(Character &user);
void runQuest(Quest quest, Character &user, Character boss, Item reward, Status healStatus);
bool wonFight(Character actor1, Character actor2);

int main()
{
	Character actor = Character("NULL", 1, 10);
	Character npc1 = Character("Evil dude", 1);
	Character npc2 = Character("Other Evil dude", 2);
	Quest currentQuest = Quest("Earth", 1);
	Quest nextQuest = Quest("Moon", 2);
	Item item = Item("Potion of Healing", 10);
	Status actorStatus = Status();
	bool userWin = false;
	
	initUser(actor);
	runQuest(currentQuest, actor, npc1, item, actorStatus);
	runQuest(nextQuest, actor, npc2, item, actorStatus);
	
	return 0;
}

void initUser(Character &user)
{
	string name = "";

	cout << "Welcome! Please enter your name >>  ";
	cin >> name;

	user.SetName(name);

	cout << endl << "Nice to meet you, " << user.GetName() << ". Time to adventure!" << endl;
}

void runQuest(Quest quest, Character &user, Character boss, Item reward, Status healStatus)
{
	healStatus.SetHeal(false);
	char c;

	if (quest.GetLevel() > user.GetLevel())
	{
		cout << user.GetName() << " is not high enough level to attempt the quest at " << quest.GetLocation() << "!" << endl;
	}
	else
	{
		cout << endl << user.GetName() << " travels to the " << quest.GetLocation() << "." << endl;
		cout << user.GetName() << " finds the evil layer of " << boss.GetName() << "!" << endl;
		cout << "Do you wish to fight " << boss.GetName() << "? <Y/N>" << endl << endl;
		cin >> c;

		switch (tolower(c))
		{
			case 'y':
				cout << endl << user.GetName() << " goes to fight " << boss.GetName() << "!" << endl;
				if (wonFight(user, boss))
				{
					cout << user.GetName() << " won the fight and got a " << reward.GetName() << "!" << endl << endl;
					healStatus.SetHeal(true);
					user.Heal(reward.GetPower());
					cout << user.GetName() << " was healed " << reward.GetPower() << " HP" << endl;
					user.SetLevel(2);
					cout << user.GetName() << " leveled up and can attempt the next quest!" << endl;
				}
				else
				{
					cout << user.GetName() << " lost the fight :(" << endl;
					user.TakeDamage(5);
				}
				break;

			case 'n':
				cout << user.GetName() << " wimped out :(" << endl << endl;
				break;

			default:
				break;
		}
	}
}

bool wonFight(Character actor1, Character actor2)
{
	if (actor1.GetLevel() >= actor2.GetLevel())
	{
		return true;
	}
	else
	{
		return false;
	}
}