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

struct Array
{
	int *numeros;

	int tamanho;
};

int main()
{
	Array telefone;

	int numeros_telefone;

	cin >> telefone.tamanho;

	telefone.numeros = &numeros_telefone;

	telefone.numeros = new int[telefone.tamanho];

	cin.get();
	cin.get();
    return 0;
}

