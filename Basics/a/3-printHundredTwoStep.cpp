#include <iostream>
using namespace std;

/**
 * Escreva um programa que imprima todos os numeros inteiros do intervalo fechado de 1 a 100
 * (com incrementos de duas unidades)
 */ 

int main ()
{
	int i;
	
	// imprime os numeros no intervalo de 0 a 100 pulando 2 unidades
	for (i=1;i<100;i+=2)
		cout<<i<<" ";
	cout<<endl;

	return 0;
}
