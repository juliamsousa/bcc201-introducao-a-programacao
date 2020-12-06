#include<iostream>
using namespace std;

/**
 * Leia um conjunto de pares de valores M e N (parar quando algum dos valores for menor ou igual a zero). 
 * Para cada par lido, mostre a sequencia do menor até o maior e a soma dos 
 * inteiros consecutivos entre eles (incluindo M e N).
 */

int main()
{
	int n, m, i, j, soma=0;
	
	cout<<"Digite um valor para n: "<<endl;
	cin>>n;
	cout<<"digite um valor para m: "<<endl;
	cin>>m;
	
	// verifica qual dos dois numeros digitados e o maior
	if (n>m)
	{
		// imprime a sequencia do menor para o maior no intervalo [n, m]
		for (m; m<=n; m++)
		{
			cout<<m<<" ";
			soma+=m;
		}	

		// imprime a soma dos inteiros compreendidos no intervalo [n, m]
		cout<<"Soma = "<<soma<<endl;
	} 
		else
		{
			// imprime a sequencia do menor para o maior no intervalo [m, n]
			for (n; n<=m; n++)
			{
				cout<<n<<" ";
				soma+=n;
			}	

			// imprime a soma dos inteiros compreendidos no intervalo [m, n]
			cout<<"Soma = "<<soma<<endl;
		}

	return 0;
}
