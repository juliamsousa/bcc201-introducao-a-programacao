#include <iostream>
using namespace std;
int main ()
{
	int contpar=0,i,n, vezes=5;
	
	for(i=1;i<=vezes;i++)
	{
		cout<<"Digite um numero n: "<<endl;
		cin>>n;
		
		if (n%2==0)
		contpar++;
	}
	cout<<contpar<<" valores pares"<<endl;
	return 0;
}
