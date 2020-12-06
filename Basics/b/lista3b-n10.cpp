#include <iostream>
using namespace std;
int main ()
{
	int n,contg=0, contd=0, conta=0;
	
	do
	{
		cout<<"\nDigite o combustivel abastecido: "<<endl;
		cout<<"1.Alcool"<<endl;
		cout<<"2.Gasolina"<<endl;
		cout<<"3.Diesel"<<endl;
		cout<<"4.Fim\n"<<endl;
		cin>>n;
		
		switch (n)
		{
			case 1:
				conta++;
			break;
			case 2:
				contg++;
			break;
			case 3:
				contd++;
			break;
			case 4:
				cout<<"Fim programa."<<endl;
			break;
			default:
				{
					cout<<"Digite o codigo novamente"<<endl;
				}
			
		}
		
		cout<<"\nAlcool: "<<conta<<endl;
		cout<<"Gasolina: "<<contg<<endl;
		cout<<"Diesel: "<<contd<<endl<<endl;
	}
	while(n!=4);

	return 0;
}
