// 01.cpp : Defines the entry point for the console application.
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

void alocar_array(int tamanho)
{
	int *array;

	array = new int[tamanho];
}

int main()
{

	alocar_array(5);

	cin.get();
    return 0;
}

