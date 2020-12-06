#include <iostream>
#include <cmath>
using namespace std;

/**
 * Escrever um programa que leia um conjunto de n notas. 
 * Para isso, o programa le a dimensao do vetor e as notas, uma a uma.
 * Apos a leitura das notas, o programa calcula e imprime a 
 * media geometrica das notas armazenadasno vetor.
 */ 

int main ()
{
	double prod=1;
	int n;
	
	cout<<"Digite o numero de notas: "<<endl;
	cin>>n;
	
	// alocacao dinamica de um vetor de tamanho n
	double *vetor = new double [n];
	
	// le as n notas e armazena no vetor
	for (int i=0; i<n; i++)
	{
		cout<<"Digite a "<<i+1<<" nota: "<<endl;
		cin>>vetor[i];
		
		prod*=vetor[i];
	}
	
	// calcula a media geometrica e imprime
	cout<<"A media geometrica e: "<<pow (prod, 1.0/n)<<endl;
	
	// desaloca a memoria alocada dinamicamente
	delete [] vetor;
	
	return 0;
}
