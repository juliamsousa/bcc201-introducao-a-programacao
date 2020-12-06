#include <iostream>
using namespace std;

/**
 * Uma certa firma fez uma pesquisa de mercado para saber se as pessoas gostaram ou nao de um
 * novo produto lancado por eles. Para isso, forneceu o sexo do entrevistado e sua resposta (sim ou nao).
 * Sabendo-se que foram entrevistadas 2.000 pessoas, elabore um algoritmo que calcule e imprima:
 * 
 * 	a. O numero de pessoas que responderam sim;
 * 	b. O numero de pessoas que responderam nao;
 * 	c. A porcentagem de pessoas do sexo feminino que responderam sim;
 * 	d. A porcentagem de pessoas do sexo masculino que responderam nao.
 */ 

int main ()
{	
	char sexo, homem='m', mulher='f', sim='s', nao='n', resposta;
	int tt=2000, conts=0, contn=0, contms=0, conthn=0, i, ttmulher=0, tthomem=0;
	double pcth, pctm;
	
	for (i=1; i<=tt; i++)
	{
		// le os dados do cliente
		cout<<"Digite o sexo da pessoa: "<<endl;
		cin>>sexo;
		cout<<"Digite a opiniao da pessoa (s||n): "<<endl;
		cin>>resposta;
		
		if (resposta == sim)
			// total de pessoas que responderam sim
			conts++;
				else
					// total de pessoas que responderam nao
					contn++;
		
		if (sexo==mulher)
		{
			// total de mulheres que responderam
			ttmulher++;

			// total de mulheres que responderam sim
			if (resposta==sim)
				contms++;
		}	
			else if (sexo==homem)
			{
				// total de homens que responderam
				tthomem++;

				// total de homens que responderam nao
				if (resposta==nao)
					conthn++;
			}
	}
	
	// porcentagem de mulheres que responderam sim
	pctm=(contms*100)/ttmulher;
	// porcentagem de homens que responderam nao
	pcth=(conthn*100)/tthomem;	

	// imprime os dados calculados
	cout<<"O numero de pessoas que respondeu sim: "<<conts<<endl;
	cout<<"O numero de pessoas que responder nao: "<<contn<<endl;
	cout<<"Porcentagem de homens que responderam nao: "<<pcth<<"%"<<endl;
	cout<<"Porcentagem de mulheres que responderam sim: "<<pctm<<"%"<<endl;
	
	return 0;
}
