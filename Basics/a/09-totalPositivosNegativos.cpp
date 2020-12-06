#include <iostream>
using namespace std;

/**
 * Escreva um programa que leia uma quantidade indeterminada de numeros reais nao nulos. 
 * Quando o for digitado o zero, o programa determina a quantidade de numeros positivos e negativos digitados.
 * A seguir, um exemplo de execucao do programa. 
 */

int main ()
{
	int np=0,nn=0;
	double n;
	
	// le um numero digtado pelo usuario
	cout<<"Digite um numero: "<<endl;
	cin>>n;
	
	while (n!=0) 
	{
		if (n>0)
			// total de numeros positivos
			np++;
				else
					// total de numeros negativos
					nn++;
	
		// le um novo numero digitado pelo usuario
		cout<<"Digite um numero: "<<endl;
		cin>>n;
	}

	// imprime os totais calculados
	cout<<"Total de numeros positivos: "<<np<<endl;
	cout<<"Total de numeros negativos: "<<nn<<endl;
	
	return 0;
}
