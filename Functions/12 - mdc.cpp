#include <iostream>
using namespace std;

//prototipo da funcao
int mdc (int a, int b);

int main ()
{
	int a, b;
	
	cout<<"Digite os valores de 'a' e 'b': "<<endl;
	cin>>a>>b;
	
	if (a<0)
		a*=-1;
	
	if (b<0)
		b*=-1;
	
	if (b==0)
		cout<<"O M.D.C. de ("<<a<<", "<<b<<")"<<" e: "<<a<<endl;
	else
	cout<<"O M.D.C. de ("<<a<<", "<<b<<")"<<" e: "<<mdc(a,b)<<endl;
	
	return 0;
}

// funcao que calcula o mdc de a e b
int mdc (int a, int b)
{
	int r;
	do
	{
		r=a%b;
		a=b;
		b=r;
	} while (r!=0);
	
	return a;
} 
