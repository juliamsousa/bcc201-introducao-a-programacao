#include <iostream>
using namespace std;

//prototipo das funcoes
double soma (double a, double b);
double sub (double a, double b);
double mult (double a, double b);
double divisao (double a, double b);

int main ()
{
	int operacao;
	double n1, n2, r;
	
	cout<<"Digite os numeros desejados:"<<endl;
	cin>>n1>>n2;
	cout<<"Digite a operacao desejada:"<<endl;
	cin>>operacao;
	
	// dados dois numeros e um caracter (+, {, *, /), indeterminadamente, e calcula e imprime o resultado
	while (operacao == '+' || operacao == '-' || operacao == '*' || operacao == '/')
	{
		if (operacao == '+')
			r = soma (n1, n2);
		else if (operacao =='-')
			r = sub (n1, n2);
		else if (operacao == '*')
			r = mult (n1, n2);
		else if (operacao == '/')
			r = divisao (n1, n2);
		
		cout<<n1<<" "<<operacao<<" "<<n2<<" = "<<r<<endl;				
	}
	
	return 0;
}
 
// funcao que soma dois numeros a, b
double soma (double a, double b)
{
	return a+b;
}

// funcao que subtrai dois numeros a, b
double sub (double a, double b)
{
	return a-b;
}

// funcao que multiplica dois numeros a, b
double mult (double a, double b)
{
	return a*b;
}

// funcao que divide dois numeros a, b
double divisao (double a, double b)
{
	return a/b;
}