#include <iostream>
using namespace std;
int main ()
{
	int vet [10];
	int reverso[10];
	
	for (int i=0; i<10; i++)
	{
		cout<<"Digite o termo "<<i+1<<" do vetor: "<<endl;
		cin>>vet[i];
		
		reverso [9-i]=vet[i];
	}
	
	for (int i=0; i<10; i++)
	{
		cout<<vet[i]<<"; ";
	}
	cout<<endl;
	
	for (int i=0; i<10; i++)
	{
		cout<<reverso[i]<<"; ";
	}
	cout<<endl;
	
	return 0;
}
