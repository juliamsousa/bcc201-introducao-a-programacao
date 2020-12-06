#include <iostream>
using namespace std;

/*
 * Dado o vetor vet, definido por:
 *	int vet [100];
 *
 *	Escrever um algoritmo para:
 *	a) Inicializa-lo com o valor inteiro 30;
 *	b) Inicializa-lo como os numeros inteiros 1, 2, 3, 4, 5, ... , 100.
 */

int main ()
{
	char op;
	int vet [100];
	
	cout<<"Digite a opcao desejada: "<<endl;
	cin>>op;
	
	switch (op)
	{
		// inicializa a primeira posicao do vetor com o inteiro 30
		case 'a':
		{
			vet [0]=30;
			cout<<"Vet[0] inicializado com o valor: "<<vet[0]<<endl;
		}
		break;
		
		// incializa o vetor com inteiros variando de 1,2,3...100
		case 'b':
		{
			for (int i=0; i<100; i++)
			{
				vet[i]=i+1;
				cout<<vet[i]<<"; ";
			}
			
			cout<<endl;
		}
	}

	return 0;	
}
