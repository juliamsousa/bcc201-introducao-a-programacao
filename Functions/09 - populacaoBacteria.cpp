#include <iostream>
#include <cmath>
using namespace std;

// define valores padroes utilizados nas funcoes
#define euler 2.7182
#define k 0.0462

//prototipo da funcao
double populacaoBacteria(double pinicial, double tempo);

int main ()
{
	double n, t;

	cout<<"Digite a populacao inicial de bacterias: "<<endl;
	cin>>n;
	cout<<"Digite o tempo decorrido em minutos: "<<endl;
	cin>>t;
	
	cout<<"O total de bacterias no decorrer de "<<t<<" minutos e: "<<populacaoBacteria (n, t);
}

// calcula o numero de bacterias presentes em uma cultura com populacao inicial==200
double populacaoBacteria (double pinicial, double tempo)
{
	return (pinicial*(pow(euler, (k*tempo))));
}
