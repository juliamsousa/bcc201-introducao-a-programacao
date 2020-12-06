#include <iostream>
using namespace std;

/**
 * Escreva um algoritmo que leia um vetor de 20 posicoes e mostre-o. 
 * Em seguida, troque o primeiro elemento com o ultimo, o segundo com o 
 * penultimo, o terceiro com o antepenultimo, e assim sucessivamente. 
 * Mostre o novo vetor depois da troca
 */ 

int main ()
{
	// declaracao de variaveis
	int vet[20], aux;
	
	// le os valores e armazena no vetor
	for (int i=0; i<20; i++)
	{
		cout<<"Digite o termo "<<i+1<<" do vetor: "<<endl;
		cin>>vet[i];
	}
	cout<<endl;
	
	// imprime o vetor
	for (int i=0; i<20; i++)
	{
		cout<<vet[i]<<"; ";
	}
	cout<<endl;
	
	// troca as posicoes do vetor
	for (int i=0; i<10; i++)
	{	
		aux=vet[i];
		vet[i]=vet[19-i];
		vet[19-i]=aux;
	}
	
	// imprime o vetor com as posicoes trocadas
	for (int i=0; i<20; i++)
		cout<<vet[i]<<";";
	
	cout<<endl;
	
	return 0;
}

