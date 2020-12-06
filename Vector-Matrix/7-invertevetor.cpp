#include <iostream>
using namespace std;

/**
 * Escreva um algoritmo que receba 10 numeros pelo teclado, armazene esses numeros em um vetor.
 * Em seguida, o programa inverte os elementos do vetor, gerando um novo vetor com os elementos
 * invertidos. O programa imprime o vetor original e o vetor invertido e os mostre em ordem inversa.
 */ 

int main ()
{
	// declaracao dos vetores
	int vet [10];
	int reverso[10];
	
	for (int i=0; i<10; i++)
	{
		// recebe os valores do tecladoe e armazena-os em um vetor
		cout<<"Digite o termo "<<i+1<<" do vetor: "<<endl;
		cin>>vet[i];
		
		// armazena os valores digitados na ordem inversa em um novo vetor
		reverso [9-i]=vet[i];
	}
	
	// imprime o vetor na ordem normal
	for (int i=0; i<10; i++)
	{
		cout<<vet[i]<<"; ";
	}
	cout<<endl;

	// imprime o vetor reverso
	for (int i=0; i<10; i++)
	{
		cout<<reverso[i]<<"; ";
	}
	cout<<endl;
	
	return 0;
}
