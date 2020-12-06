#include <iostream>
using namespace std;

/*
 * Construa um algoritmo que leia dois vetores A e B e 
 * gere um terceiro vetor C, formado pela soma
 * dos dois outros (A e B).
 */ 

int main ()
{
	// declaracao dos vetores
	int A[10], B[10], C[10];
	
	// inicializa o vetor a
	for (int i=0; i<10; i++)
	{
		cout<<"Digite o termo "<<i+1<<" do vetor A"<<endl;
		cin>>A[i];
	}
	
	// inicializa o vetor b
	for (int i=0; i<10; i++)
	{
		cout<<"Digite o termo "<<i+1<<" do vetor B"<<endl;
		cin>>B[i];
	}
	
	// preenche o vetor c com a soma dos termos de "a" e "b"
	for (int i=0; i<10; i++)
	{
		C[i]=A[i]+B[i];
		cout<<C[i]<<"; ";
	}
}
