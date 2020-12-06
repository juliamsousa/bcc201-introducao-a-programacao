#include <iostream>
using namespace std;

/**
 * Tem-se um conjunto de dados contendo a altura e o sexo (masculino - M, feminino - F)
 * de 50 pessoas. Fazer um algoritmo que calcule e imprima:
 * 
 *  -> a maior e a menor altura do grupo;
 *  -> a media de altura das mulheres
 *  -> o numero de homens.
 */

int main ()
{
	double maioralt=0, menoralt=100000, altura, thomem=0, tmulher=0, ttaltura=0, mediaalt;
	char sexo, homem='M', mulher='F'; 
	
	for (int i=1; i<=5; i++)
	{
		// le os dados da pessoa
		cout<<"Digite o sexo da pessoa: "<<endl;
		cin>>sexo;
		cout<<"Digite a altura da pessoa"<<endl;
		cin>>altura;
		
		// verifica se a altura digitada e a maior
		if (altura>maioralt)
			maioralt=altura;

		// verifica se a altura digitada e a menor
		if (altura<menoralt)
			menoralt=altura;
		
		// verifica o sexo do usuario
		if (sexo==mulher)
		{
			// calcula o total de altura de mulheres
			ttaltura+=altura;
			// calcula o total de mulheres
			tmulher++;
		}
		else
			if (sexo==homem)
				// calcula o total de homens
				thomem++;
	}
	
	// calcula a media de alturas das mulheres
	mediaalt=ttaltura/tmulher;
	
	// imprime os dados processados
	cout<<"A maior altura: "<<maioralt<<endl;
	cout<<"A menor altura: "<<menoralt<<endl;
	cout<<"A media de altura das mulheres: "<<mediaalt<<endl;
	cout<<"O numero de homens: "<<thomem<<endl;
	
	return 0;
}
