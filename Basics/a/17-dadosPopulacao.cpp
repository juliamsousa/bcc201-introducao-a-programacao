#include <iostream>
using namespace std;

/**
 * A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salario
 * e numero de filhos. A prefeitura deseja saber:
 * 
 * 	a. A media do salario da populacao;
 * 	b. A media do numero de filhos;
 * 	c. O maior salario;
 * 	d. O percentual de pessoas com salario ate R$1080,00.
 *
 * O final da leitura de dados deve acontecer quando for digitado um salario negativo. 
 */

int main ()
{
	int nfilhos, npopulacao=0, somafilhos=0, ttsalbaixo=0;
	double salario, somasalario , maiorsalario=0, mdfilhos, mdsalario, pctsalbaixo;
	
	//  le os dados do habitante
	cout<<"Digite o salario do habitante: "<<endl;
	cin>>salario;
	cout<<"Digite o numero de filhos do habitante: "<<endl;
	cin>>nfilhos;
		
	while (salario>0)
	{
		// total da populacao
		npopulacao++;
		// total de filhos da populacao
		somafilhos+=nfilhos;
		// total do salario da populacao
		somasalario+=salario;
		
		// total de pessoas com salario considerado 'baixo'
		if (salario<=1080)
			ttsalbaixo++;
		
		// calculo do maior salario da populacao
		if (salario>maiorsalario)
			maiorsalario=salario;	
		
		// le os dados do habitante novamente
		cout<<"Digite o salario do habitante: "<<endl;
		cin>>salario;
		cout<<"Digite o numero de filhos do habitante: "<<endl;
		cin>>nfilhos;		
	}
	
	// calcula a media salarial da populacao
	mdsalario=somasalario/npopulacao;
	// calcula a media de filhos da populacao
	mdfilhos=somafilhos/npopulacao;
	// calcula a porcentagem de pessoas com salario considerado baixo
	pctsalbaixo=(ttsalbaixo*100)/npopulacao;

	// imprime os dados processados
	cout<<"A media do salario da populacao:R$"<<mdsalario<<endl;
	cout<<"A media de filhos: "<<mdfilhos<<endl;
	cout<<"O maior salario:R$"<<maiorsalario<<endl;
	cout<<"Percentual de pessoas com salario<=1080= "<<pctsalbaixo<<"%"<<endl;
	
	return 0;
}
