#include <iostream>
#include <iomanip>
using namespace std;

/**
 * Leia 3 valores reais cada um deles com uma casa decimal. 
 * Apresente a média ponderada para cada um destes conjuntos de 3 valores, 
 * sendo que o primeiro valor tem peso 2, o segundo valor tem peso 3 
 * e o terceiro valor tem peso 5.
 */

int main ()
{
	int p1=2, p2=3, p3=5;
	double somanotas=0, media,nota1, nota2, nota3;
	
	// le as notas digitadas pelo usuario
	cout<<"Digite a 1 nota: "<<endl;
	cin>>nota1;
	
	cout<<"Digite a 2 nota: "<<endl;
	cin>>nota2;
	
	cout<<"Digite a 1 nota: "<<endl;
	cin>>nota3;
	
	// soma das notas com seus devidos pesos
	somanotas= (nota1*p1)+(nota2*p2)+(nota3*p3);
	// calculo da media ponderada
	media=somanotas/(p1+p2+p3);
	
	// imprime os dados processados
	cout<<"A media das notas e: "<<setprecision(1)<<fixed<<media<<endl;
	
	return 0;
}
