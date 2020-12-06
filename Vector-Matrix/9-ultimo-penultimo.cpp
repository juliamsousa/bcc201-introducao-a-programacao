#include <iostream>
using namespace std;
int main ()
{
	int vet[20], aux;
	
	for (int i=0; i<20; i++)
	{
		cout<<"Digite o termo "<<i+1<<" do vetor: "<<endl;
		cin>>vet[i];
	}
	cout<<endl;
	
	for (int i=0; i<20; i++)
	{
		cout<<vet[i]<<"; ";
	}
	cout<<endl;
	
	for (int i=0; i<10; i++)
	{	
		aux=vet[i];
		vet[i]=vet[19-i];
		vet[19-i]=aux;
	}
	
	for (int i=0; i<20; i++)
		cout<<vet[i]<<";";
	
	cout<<endl;
	
	return 0;
}

