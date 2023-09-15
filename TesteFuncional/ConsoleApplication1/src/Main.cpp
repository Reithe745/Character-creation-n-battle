#include <iostream>
#include <fstream>
#include "contas.h"
#include "user.h"
#include "FileManipulation.h"
using namespace std;

int main() {

	UserInfo cUser;
	fstream File;
	string x = "??????????";

	cout << "Nomeie seu personagem: " << endl;
	getline(cin, x);
	cUser.ChangeName(x);

	WriteFile(cUser.Name);

	return 0;
}