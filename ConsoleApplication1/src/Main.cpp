#include <iostream>
#include <fstream>
#include <stdlib.h>
#include "FileManipulation.h"
#include "contas.h"
#include "user.h"
#include "Enemies.h"
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

//proximos passos
/*
Proximos passos:
- adicionar o resto das informações do player no save
- terminar o arquivo dos inimigos
- crair um arquivo com informações de cada classe
- linkar o arquivo das classes com VIDA e DANO
*/

//19/09
/*
- criado o arquivo Enemies.cpp e Enemie.h para guardar e encontrar um inimigo aleatorio
- modificado dentro de GameMechanic.begin o sistema de salvar info do usuario, estava ruim e agora esta melhor,
  sem somar um em cima do outro
*/

//21/09
/*
- iminigo mostra nome e vida dele agora
- inimigo da dano no usuario, mas a vida não é mostrada ainda
- um master write foi criado no FILE MANIPULATION para facilitar as coisas quando se for
  escrever no .txt - esta sendo usado apos dar dano no personagem.
- no jogo, apertar 2 agora mostra a sua vida
- opção 2 no menu leva para o ShowInfo() (esta função apenas mostra o personagem, nao leva
  mais para o menu automaticamente.
*/