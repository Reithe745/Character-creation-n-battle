#pragma once
#include <string>
using namespace std;

class UserInfo {
	public:
		string Name;
		string Class;
		int Health = 0;
		int Damage = 0;
		int XP = 0;
	
		void PrintAll();
		void InitPar(string, string, int, int, int);
		void ChangeName(string);
		void ChangeClass(string);
		void ChangeHealth(int);
		void ChangeDamage(int);
		void ChangeXP(int);
};