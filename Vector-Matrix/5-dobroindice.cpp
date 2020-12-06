#include <iostream>
using namespace std;

int main ()
{
	int vet [50];
	
	for (int y=0; y<50; y++)
	{
		vet[y]=2*y;
		
		cout<<vet[y]<<"; ";
	}
	
	cout<<endl;
	
	return 0;
}
