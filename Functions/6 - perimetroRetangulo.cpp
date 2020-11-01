#include <iostream>
using namespace std;

//prototipo da funcao
double perimetroRetangulo (double a, double b);

int main ()
{
	double altura, comprimento;
	
	cout<<"Digite a altura do retangulo: "<<endl;
	cin>>altura;
	cout<<"Digite o comprimento de retangulo: "<<endl;
	cin>>comprimento;
	
	cout<<"O perimetro do retangulo de altura "<<altura<<" e comprimento "<<comprimento<<" e: "<<perimetroRetangulo (altura, comprimento);
	return 0;
}

// funcao que calcula o perimetro de um retangulo
double perimetroRetangulo (double a , double b)
{
	return (2*a+2*b);
}
