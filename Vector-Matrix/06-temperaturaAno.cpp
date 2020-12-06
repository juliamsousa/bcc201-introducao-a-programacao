#include <iostream>
using namespace std;

/**
 * As temperaturas no campus da UFOP foram anotadas diariamente durante um determinado ano.
 * Elabore um algoritmo que leia as 365 temperaturas e determine qual a temperatura media registrada.
 * O algoritmo devera tambem imprimir o valor das temperaturas abaixo da media. Utilizar vetor na
 * implementacao do algoritmo.
 */

int main ()
{
	double temperatura[365];
	double soma=0, media;

	// le todas as 365 temperaturas e calcula sua soma total
	for (int i=0; i<365; i++)
	{
		cout<<"Digite a temperatua no dia "<<i+1<<": "<<endl;
		cin>>temperatura[i];
		
		soma+=temperatura[i];
	}
	
	// calcula a media de temperaturas
	media=soma/365;
	
	// verifica quais temperaturas estao abaixo da media calculada
	for (int i=0; i<365; i++)
	{
		if (temperatura[i]<media)
			cout<<"A temperatura "<<temperatura[i]<<" esta abaixo da media "<<media<<endl;
	}
	
	return 0;
}
