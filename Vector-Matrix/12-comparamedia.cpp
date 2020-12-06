#include <iostream>
using namespace std;
int main ()
{
	int cont=0, n;
	double soma =0, media;
	
	cout<<"Digite a dimensao do vetor: "<<endl;
	cin>>n;
	
	double *vetor= new double [n];
	
	for (int i=0; i<n; i++)
	{
		cout<<"Digite o termo "<<i+1<<" do vetor: "<<endl;
		cin>>vetor[i];
		
		soma+=vetor[i];
	}
	
	media=soma/n;
	
	for (int i=0; i<n; i++)
	{
		if (vetor[i]<media)
		{
			cout<<"O numero "<<vetor[i]<<", que se encontra na posicao "<<i<<" e menor que a media "<<media<<endl;
			cont++;
		}
	}
	
	if (cont==0)
		cout<<"Nao ha nenhum numero abaixo da media."<<endl;
		
	delete [] vetor;
		
	return 0;
}
