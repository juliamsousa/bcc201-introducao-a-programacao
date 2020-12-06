#include <iostream>
using namespace std;
int main ()
{
	int x,y;
	
	do
	{
		cout<<"Digite um valor para x: "<<endl;
		cin>>x;
		cout<<"Digite um valor para y: "<<endl;
		cin>>y;
		
		if(x>y)
		cout<<"ORDEM DECRESCENTE"<<endl;
		else 
		if (x<y)
		cout<<"ORDEM CRESCENTE"<<endl;
		else
		cout<<"FIM DO PROGRAMA"<<endl;
	}
	while (x!=y);
	return 0;
}
