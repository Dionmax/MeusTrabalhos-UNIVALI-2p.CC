// 03.cpp : Defines the entry point for the console application.
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

void trocar_valor(int* valor_um, int* valor_dois)
{
	int aux_um,aux_dois;

	aux_um = *valor_um;
	aux_dois = *valor_dois;

	*valor_um = aux_dois;
	*valor_dois = aux_um;
}

int main()
{
	int valor_um = 6,
		valor_dois = 1;

	int *ponteiro_um, *ponteiro_dois;

	cout << "Antes" << endl;

	escrever(valor_um);
	escrever(valor_dois);

	ponteiro_um = &valor_um;
	ponteiro_dois = &valor_dois;

	trocar_valor(ponteiro_um,ponteiro_dois);

	cout << "Depois" << endl;

	escrever(valor_um);
	escrever(valor_dois);

	cin.get();
	return 0;
}

