#include "Enemies.h"
#include "user.h"
#include "FileManipulation.h"
#include <iostream>
#include <random>

using namespace std;

ENEMIE One;

void CurrentEnemie::ChooseName() {
	
	random_device rd;
	mt19937 gen(rd());
	int max = sizeof(One.Name)/sizeof(One.Name[0]);

	uniform_int_distribution<int> distribution(0, max - 1);
	
	int x = distribution(gen);

	Name = One.Name[x];
	Health = One.Health[x];
	Damage = One.Damage[x];
	XP = One.XP[x];
}

void CurrentEnemie::DamageUser(CurrentEnemie& x, UserInfo& cUser) {
	
	cUser.ChangeHealth(x.Damage);
}