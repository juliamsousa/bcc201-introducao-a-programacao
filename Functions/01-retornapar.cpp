#include <iostream>
using namespace std;

//prototipo da funcao
void retornapar (int);

int main ()
{
	int n;
	
	cout<<"Digite o numero desejado:"<<endl;
	cin>>n;
	
	retornapar (n);
	
	return 0;
}

// le um numero inteiro positivo n e imprime os n primeiros numeros pares.
void retornapar (int n)
{	
	int j=0;
	for (int i=1; i<=n; i++)
		cout<<(j+=2)<<" ";
	
	cout<<endl;
}

