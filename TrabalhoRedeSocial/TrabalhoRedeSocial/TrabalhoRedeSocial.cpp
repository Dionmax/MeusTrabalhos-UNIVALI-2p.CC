// TrabalhoRedeSocial.cpp :Defines the entry point for Dionmax the console application.
//

#include "stdafx.h"
#include <string>
#include <stdio.h>
#include <iostream>

#include "SuporteEscrita.h"
#include "Modelo.h"
#include "Criacao_usuario.h"

using namespace std;

void testes(Usuarios *algo, int &tamanho)
{
	tamanho++;

	algo = new Usuarios[tamanho];

	cin >> algo[tamanho - 1].idade;

	cout << algo[tamanho - 1].idade << "saida" << endl;
}


int main()
{
	Usuarios *algo = new Usuarios[0];
	int tamanho = 0;

	int aa;

	aa = entrada_senha();

	cout << aa;

	//testes(algo, tamanho);

	//controle_usuarios();

	cin.get();
	cin.get();
	return 0;
}

