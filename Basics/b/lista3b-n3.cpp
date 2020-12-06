#include<iostream>
using namespace std;
int main ()
{
	int n, x;
	
	cout<<"Digite um valor n: "<<endl;
	cin>>n;

	for(int i=1;i<=n;i++)
	{
		cout<<"Digite o numero desejado: "<<endl;
		cin>>x;
		if (x==0)
		cout<<"NULO";
		else
		{
			if (x%2==0)
			cout<<"PAR ";
			else
				cout<<"IMPAR ";
				if (x>0)
				cout<<"POSITIVO";
				else
					cout<<"NEGATIVO";
		}
		cout<<endl;
	}
	return 0;
}
