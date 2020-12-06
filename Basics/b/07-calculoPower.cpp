#include <iostream>
#include <cmath>
using namespace std;

/**
 * Escreva um programa que leia um inteiro N (1 < N < 1000). 
 * Imprima em seguida a sequencia de 1 ao número N, com seus respectivos quadrados e cubos.
 */

int main()
{
	int n, p2, p3;

	// le um valor digitado pelo usuario
	cout<<"Digite um valor para n: "<<endl;
	cin>>n;
	
	// verifica se o valor fornecido pelo usuario esta no intervalo
	if(n>=1 && n<1000)
	{
		for(int i=1; i<=n; i++)
		{	
			// calcula o quadrado e cubo dos numeros compreendidos entre [1, n]
			p2=pow(i,2);
			p3=pow(i,3);

			// imprime o valor n, seu quadrado e seu cubo
			cout<<i<<" "<<p2<<" "<<p3;
			cout<<endl;
		}
	}
	return 0;
}
