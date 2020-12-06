#include <iostream>
using namespace std;

int main()
{
	int n, maior;
	cout<<"Digite o valor n desejado: "<<endl;
	cin>>n;
	
	int *vet = new int [n];
	
	for (int i=0; i<n; i++)
	{
		cout<<"Digite o termo do vetor: "<<endl;
		cin>>vet[i];
	}
	
	maior = vet[0];
	
	for (int y=0; y<n-1; y++)
	{
		if (vet [y+1]>vet[y])
			maior=vet[y+1];
	}

	cout<<"O maior numero do vetor e: "<<maior<<endl;
	
	delete [] vet;
	
	if (vet!=NULL)
		cout<<"O vetor nao foi desalocado."<<endl;
		else
			cout<<"O vetor foi desalocado."<<endl;
	
	return 0;
}
