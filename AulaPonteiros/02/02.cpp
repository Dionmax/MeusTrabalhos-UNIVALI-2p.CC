// 02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <stdio.h>
#include <iostream>

using namespace std;

template<typename T>
void escrever(T algo)
{
	cout << algo << endl;
}

int pegar_valor()
{
	int valor;

	cin >> valor;

	return valor;
}

int main()
{
	int valor;

	valor = pegar_valor();

	int *ponteiro_valor_memoria;

	ponteiro_valor_memoria = &valor;

	escrever(ponteiro_valor_memoria);

	cin.get();
	cin.get();

    return 0;
}

