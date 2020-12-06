#include<iostream>
using namespace std;
int main()
{
	int n, m, i, j, soma=0;
	
	cout<<"Digite um valor para n: "<<endl;
	cin>>n;
	cout<<"digite um valor para m: "<<endl;
	cin>>m;
	
	if (n>m)
	{
		for (m;m<=n;m++)
		{
			cout<<m<<" ";
			soma+=m;
		}	
		cout<<"Soma = "<<soma<<endl;
	} 
	else
	{
		for (n;n<=m;n++)
		{
			cout<<n<<" ";
			soma+=n;
		}	
		cout<<"Soma = "<<soma<<endl;
	}
	return 0;
}
