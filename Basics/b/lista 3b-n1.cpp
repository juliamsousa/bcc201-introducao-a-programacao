#include <iostream>
using namespace std;
int main ()
{
	int n, vezes=5, i,contpar=0, contimpar=0, contpositivo=0, contnegativo=0;
	
	for (i=1;i<=vezes;i++)
		{
			cout<<"Digite um numero: " <<endl;
			cin>>n;
			
			if (n%2==0)
				contpar++;
				else
				contimpar++;
				
			if(n>0)
				contpositivo++;
				else
				contnegativo++;
		}
		
	cout<<"Numeros positivos totais: "<<contpositivo<<endl;
	cout<<"Numeros negativos totais: "<<contnegativo<<endl;
	cout<<"Numeros pares totais: "<<contpar<<endl;
	cout<<"Numeros impares totais: "<<contimpar<<endl;
	
	return 0;
}
