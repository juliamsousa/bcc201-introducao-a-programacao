#include <iostream>
using namespace std;

int main()
{
	int vet[50], soma=0;
	
	for (int i=0; i<50; i++)
	{
		cout<<"Digite o termo "<<i+1<<" do vetor: "<<endl;
		cin>>vet[i];
		soma+=vet[i];
	}
	
	cout<<"A soma do vetor e: "<<soma<<endl;
	
	return 0;
}
