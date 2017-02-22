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

int main()
{
	Character actor = Character("Deven", 0);
	Quest currentQuest = Quest("Earth", 1);
	Item item = Item("Potion of Healing", 10);
	Status actorStatus = Status();

	if (actor.GetLevel() <= currentQuest.GetLevel())
	{
		cout << actor.GetName() << " failed the quest!" << endl;
		actor.TakeDamage(5);
	}
	else
	{
		cout << actor.GetName() << " passed the quest and got a/an " << item.GetName() << "!" << endl;
		actorStatus.SetHeal(true);
	}

	return 0;
}