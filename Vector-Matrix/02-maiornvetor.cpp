#include <iostream>
using namespace std;

/**
 * Construa um algoritmo que leia um vetor de n 
 * posicoes de inteiros e determine qual o maior e 
 * o menor valor existente neste vetor.
 */ 

int main()
{
	int n, maior;

	// recebe do o usuario o tamanho n do vetor
	cout<<"Digite o valor n desejado: "<<endl;
	cin>>n;
	
	// aloca dinamicamente um vetor de n posicoes
	int *vet = new int [n];
	
	// le os inteiros e armazena no vetor
	for (int i=0; i<n; i++)
	{
		cout<<"Digite o termo do vetor: "<<endl;
		cin>>vet[i];
	}
	
	maior = vet[0];
	
	for (int y=0; y<n-1; y++)
	{
		if (vet [y+1]>vet[y])
			maior=vet[y+1];
	}

	cout<<"O maior numero do vetor e: "<<maior<<endl;
	
	delete [] vet;
	
	if (vet!=NULL)
		cout<<"O vetor nao foi desalocado."<<endl;
		else
			cout<<"O vetor foi desalocado."<<endl;
	
	return 0;
}
