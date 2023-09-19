#include "user.h"
#include <string>
#include <iostream>
using namespace std;

void UserInfo::PrintAll() {
	cout << Name << endl << Class << endl << Health << endl << Damage << endl << XP << endl;
	cout << "----------------------------------------" << endl;
}

void UserInfo::SaveAll(string name, string clas, int health, int damage, int xp) {
	Name = name;
	Class = clas;
	Health = health;
	Damage = damage;
	XP = xp;
}

void UserInfo::ChangeName(string x) {
	Name = x;
}

void UserInfo::ChangeClass(string x) {
	Class = x;
}

void UserInfo::ChangeHealth(int x) {
	Health += x;
}

void UserInfo::ChangeDamage(int x) {
	Damage = x;
}

void UserInfo::ChangeXP(int x) {
	XP += x;
}