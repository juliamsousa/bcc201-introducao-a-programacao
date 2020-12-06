#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

/**
 * Faca um programa para tabular a funcao:
 * 
 * f(x; y)=  x^4 + 3xy + y^3
 * 			-------------------
 *			2xy + 3x + 4y + 2

 * para x = 2; 4; 6; 8 e y = 1; 3; 5; 7; 9, para cada valor de x. 
 * 
 * Devem ser impressos os valores de x, de y e de f(x; y). Use lacos aninhados. 
 */

int main ()
{
	int x,y;
	double fx;
	
	//imprime a parte de cima da tabela
	for (x=2; x<=8; x+=2)
		cout<<setw(4)<<x<<" "; 
	cout<<endl;
	
	//imprime os tracos que dividem a tabela
	for (x=2; x<=8; x+=2)
		cout<<"-----"; 
	cout<<endl;
	
	// calcula a funcao de acordo com cada valor de x
	for (x=2; x<=8; x+=2)
	{
		cout<<y;

		// calcula a funcao para cada valor de y
		for (y=1;y<=9;y+=2)
		{
			fx=(pow(x,4)+3*x*y+pow(y,3))/(2*x*y+3*x+4*y+2);
			cout<<fx<<" ";
		}
		cout<<endl<<endl;
	}

	return 0;
}
