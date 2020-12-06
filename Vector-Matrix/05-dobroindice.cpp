#include <iostream>
using namespace std;

/**
 * Elabore um algoritmo que construa um vetor de 50 elementos, 
 * tal que o valor de cada elemento
 * seja o dobro do indice de sua posicao no vetor
 */ 

int main ()
{
	// declaracao do vetor
	int vet [50];
	
	// preenche o vetor com elementos que equivalem ao dobro de sua posicao no vetor
	for (int y=0; y<50; y++)
	{
		vet[y]=2*y;
		cout<<vet[y]<<"; ";
	}
	
	cout<<endl;
	
	return 0;
}
