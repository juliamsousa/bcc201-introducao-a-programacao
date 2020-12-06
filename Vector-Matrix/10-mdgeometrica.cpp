#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	double prod=1;
	int n;
	
	cout<<"Digite o numero de notas: "<<endl;
	cin>>n;
	
	double *vetor = new double [n];
	
	for (int i=0; i<n; i++)
	{
		cout<<"Digite a "<<i+1<<" nota: "<<endl;
		cin>>vetor[i];
		
		prod*=vetor[i];
	}
	
	cout<<"A media geometrica e: "<<pow (prod, 1.0/n)<<endl;
	
	delete [] vetor;
	
	return 0;
}
