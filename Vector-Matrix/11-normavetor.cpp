#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	int n, soma=0;
	
	cout<<"Digite o numero de valores: "<<endl;
	cin>>n;
	
	double *vetor = new double [n];
	
	for (int i=0; i<n; i++)
	{
		cout<<"Digite o "<<i+1<<" valor: "<<endl;
		cin>>vetor[i];
		
		soma+=pow(vetor[i],2);
	}
	
	cout<<"Norma do vetor: "<<pow(soma,1.0/2);
	
	delete [] vetor;
	
	return 0;
}
