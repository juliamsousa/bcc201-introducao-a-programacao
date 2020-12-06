#include <iostream>
using namespace std;

/**
 * Faça um programa que leia 2 inteiros X e Y. 
 * Calcule e apresente a soma de todos os ímpares existentes entre X e Y.
 */ 

int main ()
{
	int x, y, soma=0;
	
	// le valores digitados pelo usuario
	cout<<"Digite um valor para x: "<<endl;
	cin>>x;
	cout<<"Digite um valor para y: "<<endl;
	cin>>y;
	
	if (x>y)
		for (y; y<x; y++)
		{
			// verifica se o numero e par
			if (y%2!=0)
				// soma total de numeros impares compreendidos no intervalo [x, y]
				soma+=y;
		}
		else
			for (x; x<y; x++)
			{
				// verifica se o numero e par
				if(x%2!=0)
					// soma total de numeros impares compreendidos no intervalo [x, y]
					soma+=x;
			}

	// imprime o total da soma dos numeros impares compreendidos no intervalo determinado
	cout<<"Soma = "<<soma<<endl;
	
	return 0;
}
