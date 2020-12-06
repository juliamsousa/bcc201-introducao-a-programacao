#include <iostream>
using namespace std;
int main ()
{
	int x, y, soma=0;
	
	cout<<"Digite um valor para x: "<<endl;
	cin>>x;
	cout<<"Digite um valor para y: "<<endl;
	cin>>y;
	
	if (x>y)
	{
		for (y;y<x;y++)
		{
			if (y%2!=0)
			soma+=y;
		}
	}
	else
		for (x;x<y;x++)
		{
			if(x%2!=0)
			soma+=x;
		}
	cout<<"Soma = "<<soma<<endl;
	return 0;
}
