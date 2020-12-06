#include<iostream>
using namespace std;

/**
 * Leia um valor inteiro N. Este valor será a quantidade de valores que serão lidos em seguida. 
 * Para cada valor lido, mostre uma mensagem em inglês dizendo se este valor lido é 
 * par (PAR), ímpar (ÍMPAR), positivo (POSITIVO) ou negativo (NEGATIVO). 
 * No caso do valor ser igual a zero (0), seu programa deverá imprimir apenas NULO. 
 */ 

int main ()
{
	int n, x;
	
	// le o valor n que determinara quantos valores serao digitados
	cout<<"Digite um valor n: "<<endl;
	cin>>n;

	for (int i=1; i<=n; i++)
	{
		// le um valor digitado pelo usuario
		cout<<"Digite o numero desejado: "<<endl;
		cin>>x;

		// verifica se o valor digitado e nulo
		if (x == 0)
			cout<<"NULL";

		else
		{
			// verifica se o valor digitado e par ou impar
			if (x%2 == 0)
				cout<<"EVEN";
			else
				cout<<"NOT EVEN";
			
			//  verifica se o numero digitado e positivo oi negativo
			if (x>0)
				cout<<"POSITIVE";
			else
				cout<<"NEGATIVE";
		}
		
		cout<<endl;
	}
	return 0;
}
