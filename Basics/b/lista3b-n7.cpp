#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,i,p2,p3;

	cout<<"Digite um valor para n: "<<endl;
	cin>>n;
	
	if(n>=1 && n<1000)
	{
		for(i=1;i<=n;i++)
		{	
			p2=pow(i,2);
			p3=pow(i,3);
			cout<<i<<" "<<p2<<" "<<p3;
			cout<<endl;
		}
	}
	return 0;
}
