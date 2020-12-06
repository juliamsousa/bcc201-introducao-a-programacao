#include <iostream>
using namespace std;

/**
 * Um Posto de combustíveis deseja determinar qual de seus produtos tem a preferência de seus clientes. 
 * Escreva um algoritmo para ler o tipo de combustível abastecido 
 * (codificado da seguinte forma: 1.Álcool 2.Gasolina 3.Diesel 4.Fim). 
 * Caso o usuário informe um código inválido (fora da faixa de 1 a 4) 
 * deve ser solicitado um novo código (até que seja válido). 
 * O programa será encerrado quando o código informado for o número 4.
 */

int main ()
{
	int n, contg=0, contd=0, conta=0;
	
	// executa enquanto o usuario nao digitar a opcao 4
	do
	{
		cout<<"\nDigite o combustivel abastecido: "<<endl;
		cout<<"1.Alcool"<<endl;
		cout<<"2.Gasolina"<<endl;
		cout<<"3.Diesel"<<endl;
		cout<<"4.Fim\n"<<endl;
		cin>>n;
		
		switch (n)
		{
			case 1:
				// total de usuarios que digitaram alcool
				conta++;
			break;

			case 2:
				// total de usuarios que digitaram gasolina
				contg++;
			break;

			case 3:
				// total de usuarios que digitaram diesel
				contd++;
			break;

			case 4:
				cout<<"Fim programa."<<endl;
			break;

			default:
				cout<<"Digite o codigo novamente"<<endl;			
		}
		
		// imprime os totais calculados
		cout<<"\nAlcool: "<<conta<<endl;
		cout<<"Gasolina: "<<contg<<endl;
		cout<<"Diesel: "<<contd<<endl<<endl;
	}
	while(n!=4);

	return 0;
}
