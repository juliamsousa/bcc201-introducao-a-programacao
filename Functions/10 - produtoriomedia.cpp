#include <iostream>
using namespace std;

//prototipo das funcoes
double mediaImpares (int a, int b);
double produtorioPares (int a, int b);

int main ()
{
	int a, b;
	
	cout<<"Digite o extremo esquerdo do intervalo: "<<endl;
	cin>>a;
	cout<<"Digite o extremo direito do intervalo: "<<endl;
	cin>>b;
	
	while (b<a)
	{
		cout<<"O valor e tem que ser maior que a!"<<endl;
		cout<<"\nDigite o limite superior: "<<endl;
		cin>>b;
	}
	
	cout<<"A media dos numeros impares do intervalo e: "<<mediaImpares(a, b)<<endl;
	cout<<"O produtorio dos numeros pares e: "<<produtorioPares(a, b)<<endl;
		
	return 0;
}

// calcula a media dos numeros impares
double mediaImpares (int a, int b)
{
	int soma=0;
	int cont =0;
	
	for (int i=a; i<=b; i++)
	{
		if (i%2!=0)
		{	
			soma+=i;	
			cont++;
		}
	}
	
	return (soma/cont);
}

// calcula o produtorio dos numeros pares
double produtorioPares (int a, int b)
{
	int prod=1;
	
	for (int i=a; i<=b; i++)
		if (i%2==0)
			prod*=i;
	
	return prod;
}

