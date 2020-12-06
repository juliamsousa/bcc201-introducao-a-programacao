#include <iostream>
using namespace std;

/**
 * Elabore um algoritmo que inicialize um vetor de 50 posicoes de inteiros 
 * (os valores devem ser lidos atraves do teclado) e, em seguida, 
 * calcule e imprima a soma desses elementos.
 */

int main()
{
	int vet[50], soma=0;
	
	// calcula a soma das 50 posicoes do vetor
	for (int i=0; i<50; i++)
	{
		cout<<"Digite o termo "<<i+1<<" do vetor: "<<endl;
		cin>>vet[i];
		soma+=vet[i];
	}
	
	// imprime a soma total no terminal
	cout<<"A soma do vetor e: "<<soma<<endl;
	
	return 0;
}
