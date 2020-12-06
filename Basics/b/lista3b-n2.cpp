#include <iostream>
using namespace std;
int main ()
{
	int n, x, lims=20, limi=10, contdentro=0, contfora=0;
	
	cout<<"Digite um numero n: "<<endl;
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		cout<<"Digite um numer x: "<<endl;
		cin>>x;
		
		if(x<=lims && x>=limi)
		contdentro++;
		else
		contfora++;
	}
	
	cout<<"Total de numeros dentro do intervalo: "<<contdentro<<endl;
	cout<<"Total de numeros fora do intervalo: "<<contfora<<endl;
	
	return 0;
}
