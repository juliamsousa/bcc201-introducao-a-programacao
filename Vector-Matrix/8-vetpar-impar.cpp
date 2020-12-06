#include <iostream>
using namespace std;
int main ()
{
	int vet[30], vetpar[30], vetimpar[30];
	int x=0, y=0;
	
	for (int i=0; i<30; i++)
	{
		cout<<"Digite o termo "<<i+1<<" do vetor: "<<endl;
		cin>>vet[i];
	}
	
	for (int i=0; i<30; i++)
	{
		if (vet[i]%2==0)
		{
			vetpar[x]=vet[i];
			x++;
		}
		else
		{	
			vetimpar[y]=vet[i];
			y++;
		}
	}
	
	cout<<"Vetor par: ";
	for (int i=0; i<x; i++)
	{
		cout<<vetpar[i]<<"; ";
	}
	cout<<endl;

	cout<<"Vetor impar: ";
	for (int i=0; i<y; i++)
	{
		cout<<vetimpar[i]<<"; ";
	}
	cout<<endl;

	return 0;
}
