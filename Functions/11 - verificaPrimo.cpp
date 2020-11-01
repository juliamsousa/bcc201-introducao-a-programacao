#include <iostream>
using namespace std;

//prototipo da funcao
// a funcao nao foi implementada
bool verificaPrimo (int numero);

int main ()
{
	int n;
	
	cout<<"Digite o numero desejado: "<<endl;
	cin>>n;
	if (n<1)
	{
		while (n<=1)
		{
			cout<<"Digite o numero desejado (maior que 1): "<<endl;
			cin>>n;	 
		}
		if (verificaPrimo (n))
			cout<<"O numero "<<n<<" e primo."<<endl;
			else
				cout<<"O numero "<<n<<" nao e primo."<<endl;
	}
	else 
	{
		if (verificaPrimo (n))
			cout<<"O numero "<<n<<" e primo."<<endl;
			else
				cout<<"O numero "<<n<<" nao e primo."<<endl;
	}
	return 0;
}


