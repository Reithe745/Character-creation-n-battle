#include <iostream>
#include "GameMechanic.h"
#include "user.h"
#include "FileManipulation.h"
#include "Enemies.h"

//declaration for menu for it to be used insed any of the other functions
void Menu(UserInfo& cUser);
//end of declarations

void ClearBuffer() {
	cin.ignore(1, '/n');
}

//there are placeholders here, must change latter (values for HEALTH, DAMAGE and XP definition)
void Begin(UserInfo& cUser) {

	string nam, cla;

	cout << "Nomeie seu personagem: " << endl;
	getline(cin, nam);

	cout << "Nomeie sua classe: " << endl;
	getline(cin, cla);
	
	// 3 last values are placeholders - to be defined according to class
	cUser.SaveAll(nam, cla, 20, 5, 0);

	WriteFile_OUT(cUser.Name);
	WriteFile_APP(cUser.Class);
	//placeholder for writing this values
	WriteFile_APP_INT(cUser.Health);
	WriteFile_APP_INT(cUser.Damage);
	WriteFile_APP_INT(cUser.XP);

	system("CLS");

	Menu(cUser);
}

void ShowInfo(UserInfo& cUser) {
	if (cUser.Name == "") {
		cout << "-----------------" << endl;
		cout << "Nenhum personagem ainda selecionado" << endl;
		cout << "-----------------" << endl;
	}
	else {
		cout << "-----------------" << endl;
		cout << "NOME: " << cUser.Name << endl 
			 << "CLASSE: " << cUser.Class << endl
			 << "VIDA: " << cUser.Health << endl
			 << "DANO: " << cUser.Damage << endl
			 << "XP: " << cUser.XP << endl;
		cout << "-----------------" << endl;
	}
	Menu(cUser);
}

//ready for modifications and crate battle sistem
void EnemieFacing(UserInfo& cUser) {

	int x;
	CurrentEnemie FacingEnemie;

	FacingEnemie.ChooseName(); 
	
	// modify all code here to fit a battle and show all values
	cout << "Voce encontra um monstro, o que deseja fazer?" << endl;
	cout << "----------------" << endl 
		 << FacingEnemie.Name << endl; // for now, only the name of the enemie is showing
	cout << cUser.Class << endl 
		 << "----------------" << endl;
	cout << "O que voce fara?:" << endl;
	cout << " 1 - enfrentar" << endl
		 << " 2 - fugir" << endl
		 << " 3 - menu inicial" << endl;
	cin >> x;
	ClearBuffer();

	switch (x){
	case 1:
		break;
	case 2:
		break;
	case 3:
		system("CLS");
		Menu(cUser);
		break;
	default:
		break;
	}
}

void Menu(UserInfo& cUser) {

	int x;

	cout << "escolha o que quer fazer:" << endl;
	cout << " 1 - Mudar personagem" << endl << " 2 - Ver informacoes do seu player" << endl;
	if (cUser.Name != "") {
		cout << " 3 - Iniciar jogo" << endl;
	}
	cout << " any - fechar o programa" << endl;
	cin >> x;
	ClearBuffer();

	switch (x)
	{
	case 1:
		system("CLS");
		Begin(cUser);
		break;
	case 2:
		system("CLS");
		ShowInfo(cUser);
		break;
	case 3:
		if (cUser.Name != "") {
			system("CLS");
			EnemieFacing(cUser);
			break;
		}
		else {
			cout << "nao existe um personagem ainda" << endl;
			Menu(cUser);
			break;
		}
	default:
		break;
	}
}

void GetPLayerInfo(UserInfo& cUser) {
	cUser.Name = ReadFile(0);
	cUser.Class = ReadFile(1);
	cUser.Health = stoi(ReadFile(2));// stoi() is to turn the STRINGS to INTS
	cUser.Damage = stoi(ReadFile(3));// stoi() is to turn the STRINGS to INTS
	cUser.XP = stoi(ReadFile(4));// stoi() is to turn the STRINGS to INTS
}