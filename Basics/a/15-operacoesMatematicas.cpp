#include <iostream>
using namespace std;

/**
 * Faca um algoritmo que, dados dois numeros e um caracter (+, -, *, /), indeterminadamente, e
 * calcule e imprima:
 * 
 * 	a. A soma desses numeros, caso seja digitado o caracter +
 * 	b. A subtracao desses numeros, caso seja digitado o caracter -
 * 	c. A multiplicacao desses numeros, caso seja digitado o caracter *
 * 	d. A divis~ao desses numeros, caso seja digitado o caracter /
 * 
 * As operacoes devem finalizar quando a operacao digitada for diferente de uma das anteriores.
 */

int main ()
{
	char soma='+', sub='-', div='/', mult='*', op;
	int n1, n2;
	double res=0;
	
	// faz os calculos equanto o usuario digitar uma operacao valida
	do
	{
		// le os valores e a operacao
		cout<<"Digite um numero: "<<endl;
		cin>>n1;
		cout<<"Digite um numero: "<<endl;
		cin>>n2;
		cout<<"Digite a operacao desejada: (+, -, *, /)"<<endl;
		cin>>op;
		
		switch (op)
		{
			// calcula a soma e imprime o resultado
			case '+':
			{
				res=n1+n2;
				cout<<n1<<op<<n2<<"="<<res<<endl;
			}
			break;

			// calcula a subtracao e imprime o resultado
			case '-':
			{
				res=n1-n2;
				cout<<n1<<op<<n2<<"="<<res<<endl;
			}
			break;

			// calcula a multiplicacao e imprime o resultado
			case '*':
			{
				res=n1*n2;
				cout<<n1<<op<<n2<<"="<<res<<endl;
			}
			break;

			// calcula a divisao e imprime o resultado
			case '/':
			{
				res=1.0*n1/n2;
				cout<<n1<<op<<n2<<"="<<res<<endl;
			}
			break;	

			default:
				cout<<"Fim do programa."<<endl;
		}		
	} 
	while (op=='+'||op=='-'||op=='*'||op=='/');
	
	return 0;
}
