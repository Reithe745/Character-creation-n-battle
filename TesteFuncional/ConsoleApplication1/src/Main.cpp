#include <iostream>
#include <fstream>
#include <stdlib.h>
#include "FileManipulation.h"
#include "contas.h"
#include "user.h"
#include "GameMechanic.h"

using namespace std;

int main() {

	UserInfo cUser;

	cout << "-----------------------" << endl
		 << "|                     |" << endl
		 << "|  YURI LITTLE GAME!  |" << endl
		 << "|                     |" << endl
		 << "-----------------------" << endl;

	GetPLayerInfo(cUser);

	//opens to main menu:
	//choose: add a character / show character / start game / exit
	Menu(cUser);

	return 0;
}

/*
Proximos passos:
- adicionar o resto das informações do player no save
- criar o arquivo dos inimigos
- crair um arquivo com informações de cada classe
- linkar o arquivo das classes com VIDA e DANO
*/