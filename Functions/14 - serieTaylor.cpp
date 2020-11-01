#include <iostream>
#include <cmath>
using namespace std;

//prototipo da funcao
double serieTaylor (int n, int x);

int main ()
{
	int x, n;
	
	cout<<"Digite a exponencial de 'e': "<<endl;
	cin>>x;
	cout<<"Digite o numero 'n': "<<endl;
	cin>>n;
	
	cout<<"e"<<"^"<<x<<"="<<serieTaylor (n, x);
	
	return 0;
}

// funcao para aproximar a funcao exponencial pela serie de Taylor
double serieTaylor (int n, int x)
{
	double result, parcial=0, fatorial=1;
	
	for (int i=2; i<=n; i++)
	{
		for (int y=i; y>=1; y--)
			fatorial*=y;
			
		parcial+=(pow(x,2)/fatorial);
	}
	result = (1+x)+parcial;
	
	return result;
}
