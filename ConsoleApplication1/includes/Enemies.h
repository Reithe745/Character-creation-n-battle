#pragma once
#include <string>
#include "user.h"

using namespace std;

class CurrentEnemie {
public:
	string Name;
	int Health;
	int Damage;
	int XP;
	
	void ChooseName();
	void DamageUser(CurrentEnemie&, UserInfo&);
};

class ENEMIE {
public:
	string Name[4] = { "Demon", "Skeleton", "Zombie", "Glob"};
	int Health[4] = { 20, 5, 7, 10 };
	int Damage[4] = { -10, -2, -5, -5 };
	int XP[4] = { 50, 10, 15, 20 };
};