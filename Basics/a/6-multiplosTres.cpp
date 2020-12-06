#include <iostream>
using namespace std;

/**
 * Elabore um algoritmo que calcule e imprima os multiplos de 3, compreendidos no intervalo entre
 * 6 e um dado limite superior fornecido pelo usuario.
 */ 

int main ()
{
	int lim;
	
	// le o limite superior fornecido pelo usuario
	cout<<"Digite um limite superior: "<<endl;
	cin>>lim;
	
	// calculo os mutliplos de 3 compreendidos no intervalo
	for (int i=6;i<=lim;i++)
	{
		if (i%3 ==0)
		cout<<i<<" ";
	}	
	
	return 0;
}
