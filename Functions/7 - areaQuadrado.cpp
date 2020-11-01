#include <iostream>
#include <cmath>
using namespace std;

//prototipo da funcao
double areaQuadrado (double l);

int main ()
{
	double lado;
	
	cout<<"Digite o valor do lado do quadrado: "<<endl;
	cin>>lado;
	
	cout<<"A area do quadrado de lado "<<lado<<" e: "<<areaQuadrado(lado);
	
	return 0;
}

// funcao que calcula a area de um quadrado
double areaQuadrado (double l)
{
	return (pow (l,2));
}
