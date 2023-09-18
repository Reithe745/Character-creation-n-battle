#include <iostream>
#include "GameMechanic.h"
#include "user.h"
#include "FileManipulation.h"

//declaration for menu for it to be used insed any of the other functions
void Menu(UserInfo& cUser);
//end of declarations

void ClearBuffer() {
	cin.ignore(1, '/n');
}

void Begin(UserInfo& cUser) {

	string x;

	cout << "Nomeie seu personagem: " << endl;
	getline(cin, x);
	cUser.ChangeName(x);

	cout << "Nomeie sua classe: " << endl;
	getline(cin, x);
	cUser.ChangeClass(x);
	

	WriteFile_OUT(cUser.Name);
	WriteFile_APP(cUser.Class);

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
			 << "VIDA: " << cUser.Health << endl;
		cout << "-----------------" << endl;
	}
	Menu(cUser);
}

void EnemieFacing(UserInfo& cUser) {

	int x;

	cout << "Voce encontra um monstro, o que deseja fazer?" << endl;
	cout << "----------------" << endl 
		 << cUser.Name << endl;
	cout << cUser.Class << endl 
		 << "----------------" << endl;
	cout << "O que voce fara?:" << endl;
	cout << " 1 - enfrentar" << endl
		 << " 2 - fugir" << endl
		 << " 3 - menu inicial" << endl;
	cin >> x;
	ClearBuffer();

	switch (x){
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
}