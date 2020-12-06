#include <iostream>
using namespace std;

/**
 * Elabore um algoritmo que leia o salario atual de cada um dos 30 funcionarios de uma firma e
 * calcule e imprima o novo salario com percentual de reajuste dependendo do salario atual conforme a
 * seguinte Tabela:
 * 
 * 			Salario atual Reajuste
 * 		menor que 1000,00 15%
 * 		maior ou igual a 1000,00 e menor 2000,00 10%
 * 		maior ou igual a 2000,00 5% 
 */

int main ()
{
	double sal, nsal;
	
	for (int i=1;i<=30;i++)
	{
		// le o salario do funcionario
		cout<<"Digite o salario do funcionario: "<<endl;
		cin>>sal;
		
		// calcula o reajuste do salario de acordo com a tabela
		if (sal<1000)
			nsal=sal*1.15;
				else
					if (sal>=1000 && sal<2000)
						nsal=sal*1.1;
							else
								nsal=sal*1.05;	
		
		// imprime o salario reajustado
		cout<<"O novo salario:R$"<<nsal<<endl;	
	} 	

	return 0;
}
