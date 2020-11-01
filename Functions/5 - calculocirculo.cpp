#include <iostream>
#include <cmath>
#define pi 3.14
using namespace std;

//prototipo das funcoes funcoes
double comprimentoCircunferencia (double raio);
double areaCirculo (double raio);
double volumeEsfera (double raio);

int main ()
{
	double raio;
	
	cout<<"Digite o raio r"<<endl;
	cin>>raio;
	
	cout<<"O comprimento do circulo eh: "<<comprimentoCircunferencia(raio)<<endl;
	cout<<"A area do circulo eh: "<<areaCirculo(raio)<<endl;
	cout<<"O volume da esfera eh: "<<volumeEsfera(raio)<<endl;
	
	return 0;
}

//implementacao das funcoes
// funcao que calcula o comprimento da circunferencia
double comprimentoCircunferencia (double raio)
{
	return (raio*pi*2);
}

// funcao que calcula a area do circulo
double areaCirculo (double raio)
{
	return (pi*(pow(raio,2)));
}

// funcao que calcula o volume da esfera
double volumeEsfera (double raio)
{
	return ((4.0/3)*pi*(pow(raio,3)));
} 
