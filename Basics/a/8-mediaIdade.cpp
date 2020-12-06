#include <iostream>
using namespace std;

/**
 * Elabore um algoritmo que leia um numero indeterminado de valores representando cada um a
 * idade de um individuo. O ultimo valor, que nao deve entrar nos calculos, de zero. 
 * O algoritmo deve calcular e imprimir a idade media deste grupo de individuos.
 */ 

int main ()
{
	int idade, tp=0, soma=0;
	double media;

	// faz a leitura da idade digitada pelo usuario
	cout<<"Digite a idade da pessoa: "<<endl;
	cin>>idade;

	// loop que para quando uma idade==0 é digitada
	do 
	{
		// soma total das idades digitadas
		soma+=idade;

		// total de idades digitadas
		tp++;

		// faz a leitura da idade novamente
		cout<<"Digite a idade da pessoa: "<<endl;
		cin>>idade;
	}
	while (idade!=0);
	
	// calculo da media das idades
	media=soma/tp;
	
	// imprime a media calculada
	cout<<"A media das idades e: "<<media<<endl;
		
	return 0;
}
