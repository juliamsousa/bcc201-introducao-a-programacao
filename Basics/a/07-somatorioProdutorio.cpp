#include <iostream>
using namespace std;

/** 
 * Criar um programa que calcule a media dos numeros impares e o produtorio dos numeros pares
 * contidos em um intervalo fechado (com incrementos de uma unidade). Os valores dos extremos desse
 * intervalo sao fornecidos pelo usuario. Primeiramente o usuario informa o valor do extremo esquerdo
 * do intervalo (a). A seguir, o programa solicita o valor do extremo direito (b). O programa somente
 * prossegue quando o valor de b for maior que o valor de a.
 */ 

int main ()
{
	int a, b, prod=1, md, soma=0, cimpar=0;
	
	cout<<"Digite o limite inferior: "<<endl;
	cin>>a;
	cout<<"Digite o limite superior: "<<endl;
	cin>>b;
	
	// verifica se o limite superior > limite inferior
	if (b<a)
	{
		cout<<"O limite b deve ser maior que a."<<endl;
		cout<<"Digite o limite superior: "<<endl;
		cin>>b;	
	}		
		else 
		{
			for (int i=a; i<=b; i++)
			{
				if (i%2==0)
					// calculo do produtorio dos numeros impares
					prod*=i;
						else
						{	
							// somatorio doas numeros impares
							soma+=i;
							// total de numeros pares para o calculo da media
							cimpar++;
						}
			}			
		}
	
	// calculo da media dos numeros pares
	md=soma/cimpar;
	
	// imprime os valores calculados
	cout<<"Media dos impares: "<<md<<endl;
	cout<<"Produtorio dos pares: "<<prod<<endl;
	
	return 0;
}
