#include <iostream>
#include <cmath>
using namespace std;

/**
 * Refaca o programa anterior calculando a norma do vetor lido
 */

int main ()
{
	int n, soma=0;
	
	// le o tamanho n do vetor
	cout<<"Digite o numero de valores: "<<endl;
	cin>>n;
	
	// aloca o vetor dinamicamente
	double *vetor = new double [n];
	
	// le os valores do vetor e calcula a soma total
	for (int i=0; i<n; i++)
	{
		cout<<"Digite o "<<i+1<<" valor: "<<endl;
		cin>>vetor[i];
		
		soma+=pow(vetor[i],2);
	}
	
	// calcula a norma e imprime seu valor
	cout<<"Norma do vetor: "<<pow(soma,1.0/2);
	
	// desaloca a memoria alocada dinamicamente
	delete [] vetor;
	
	return 0;
}
