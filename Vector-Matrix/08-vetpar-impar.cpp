#include <iostream>
using namespace std;

/**
 * Elaborar um algoritmo que le um conjunto de 30 valores e os 
 * coloca em 2 vetores conforme forem pares ou impares. 
 * Terminada a entrada dos numeros escrever o conteudo dos dois vetores. 
 */

int main ()
{
	// declaracao dos vetores e variaveis auxiliares
	int vet[30], vetpar[30], vetimpar[30];
	int x=0, y=0;
	
	// le os valores digitados no teclado
	for (int i=0; i<30; i++)
	{
		cout<<"Digite o termo "<<i+1<<" do vetor: "<<endl;
		cin>>vet[i];
	}
	
	// verifica se os valores sao pares ou impares e armazena-os nos determinados vetores
	for (int i=0; i<30; i++)
	{
		// caso o valor seja par, é armazenado no vetor de numeros pares
		if (vet[i]%2==0)
		{
			vetpar[x]=vet[i];
			x++;
		}
			// caso o valor seja impar, é armazenado no vetor de numeros impares
			else
			{	
				vetimpar[y]=vet[i];
				y++;
			}
	}
	
	// imprime o vetor par
	cout<<"Vetor par: ";
	for (int i=0; i<x; i++)
	{
		cout<<vetpar[i]<<"; ";
	}
	cout<<endl;

	// imprime o vetor impar
	cout<<"Vetor impar: ";
	for (int i=0; i<y; i++)
	{
		cout<<vetimpar[i]<<"; ";
	}
	cout<<endl;

	return 0;
}
