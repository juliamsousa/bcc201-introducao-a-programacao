#include <iostream>
using namespace std;

/**
 * Faça um programa que leia 5 valores inteiros. 
 * Conte quantos destes valores digitados são pares e mostre esta informação.
 */ 

int main ()
{
	int contpar = 0, n, vezes=5;
	
	for(int i=1; i<=vezes; i++)
	{
		// le um valor
		cout<<"Digite um numero n: "<<endl;
		cin>>n;
		
		// verifica se o valor fornecido e par
		if (n%2==0)
			// calcula o total de numeros pares
			contpar++;
	}

	// imprime o total de numeros pares
	cout<<contpar<<" valores pares"<<endl;
	
	return 0;
}
