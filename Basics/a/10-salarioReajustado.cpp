#include <iostream>
using namespace std;

/**
 * Faca um algoritmo que leia a matricula, o cargo e o salario de funcionarios e calcule seu novo
 * salario reajustado. Se o cargo for operador (O), o funcionario devera receber um reajuste de 20%,
 * se o cargo for programador (P), o funcionario devera receber um reajuste de 18%. 
 * O algoritmo deve escrever a matricula e o novo salario do funcionario, ja reajustado. 
 * Quando o salario digitado for igual a zero o algoritmo devera ser finalizado.
 */ 

int main ()
{
	int mat;
	double sal, nsal=0, pop= 0.2, pprog= 0.18;
	char cargo;
	
	// le os dados de entrada
	cout<<"Digite o salario do funcionario: "<<endl;
	cin>>sal;
	cout<<"Digite a matricula do funcionario: "<<endl;
	cin>>mat;
	cout<<"Digite o cargo do funcionario (O=operario e P=programador): "<<endl;
	cin>>cargo;
	
	while (sal!=0)
	{
		// calcula o salario do funcionario de acordo com seu cargo
		switch (cargo)
		{
			case 'O':
				nsal=sal*(1+pop);
			break;

			case 'P':
				nsal=sal*(1+pprog);
			break;

			default:
				cout<<"Cargo invalido."<<endl;
		}
	
		// imprime as informacoes do funcionario e seu salario calculado
		cout<<"Funcionario: "<<mat<<endl;
		cout<<"Novo salario: RS"<<nsal<<endl;		
		
		// le as informacoes novamente
		cout<<"Digite o salario do funcionario: "<<endl;
		cin>>sal;
		cout<<"Digite a matricula do funcionario: "<<endl;
		cin>>mat;
		cout<<"Digite o cargo do funcionario (O=operario e P=programador): "<<endl;
		cin>>cargo;
	}
	
	return 0;
}
