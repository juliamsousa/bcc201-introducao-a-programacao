#include <iostream>
#include <cmath>
using namespace std;

/**
 * Escreva um programa que imprima o quadrado dos numeros inteiros,
 * no intervalo fechado de 1 a 20.
 */

int main ()
{
	// imprime o quadrado dos numeros inteiros de 1 a 20
	for (int i=1; i<=20; i++)
		cout<<pow (i,2)<<" ";
		
	cout<<endl;
	
	return 0;
}
