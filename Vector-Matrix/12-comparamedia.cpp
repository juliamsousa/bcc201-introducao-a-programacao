#include <iostream>
using namespace std;

/**
 * Escrever um programa que leia a dimens~ao e os elementos de um vetor, um de cada vez. 
 * O programa calcula a media aritmetica dos elementos do vetor e determina quais elementos 
 * do vetor sao menores que a media. 
 * O programa deve imprimir os elementos menores e suas posicoes. 
 * Caso n~ao seja encontrado nenhum elementos menor que a media, o usuario 
 * deve ser notificado atraves de uma mensagem.
 */

int main ()
{
	int cont=0, n;
	double soma=0, media;
	
	// le a dimensao n do vetor
	cout<<"Digite a dimensao do vetor: "<<endl;
	cin>>n;
	
	// aloca dinamicamente um vetor de tamanho n
	double *vetor= new double [n];
	
	// le os valores e armazana-os no vetor, alem de calcular sua soma total
	for (int i=0; i<n; i++)
	{
		cout<<"Digite o termo "<<i+1<<" do vetor: "<<endl;
		cin>>vetor[i];
		
		soma+=vetor[i];
	}
	
	// calculo da media
	media=soma/n;
	
	// verifica qual valor esta abaixo da media
	for (int i=0; i<n; i++)
	{
		if (vetor[i]<media)
		{
			cout<<"O numero "<<vetor[i]<<", que se encontra na posicao "<<i<<" e menor que a media "<<media<<endl;
			cont++;
		}
	}
	
	// notifica o usuario caso nao ha nehum valor abaixo da media
	if (cont==0)
		cout<<"Nao ha nenhum numero abaixo da media."<<endl;
		
	// desaloca a memoria alocada dinamicamente
	delete [] vetor;
		
	return 0;
}
