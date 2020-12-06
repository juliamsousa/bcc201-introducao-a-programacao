#include <iostream>
using namespace std;

int main ()
{
	char op;
	int vet [100];
	
	cout<<"Digite a opcao desejada: "<<endl;
	cin>>op;
	
	switch (op)
	{
		case 'a':
		{
			vet [0]=30;
			cout<<"Vet[0] inicializado com o valor: "<<vet[0]<<endl;
		}
		break;
		
		case 'b':
		{
			for (int i=0; i<100; i++)
			{
				vet[i]=i+1;
				cout<<vet[i]<<"; ";
			}
			
			cout<<endl;
		}
	}

	return 0;	
}
