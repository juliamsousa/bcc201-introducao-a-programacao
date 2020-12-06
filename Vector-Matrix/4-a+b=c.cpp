#include <iostream>
using namespace std;

int main ()
{
	int A[10], B[10], C[10];
	
	for (int i=0; i<10; i++)
	{
		cout<<"Digite o termo "<<i+1<<" do vetor A"<<endl;
		cin>>A[i];
	}
	
	for (int i=0; i<10; i++)
	{
		cout<<"Digite o termo "<<i+1<<" do vetor B"<<endl;
		cin>>B[i];
	}
	
	for (int i=0; i<10; i++)
	{
		C[i]=A[i]+B[i];
		cout<<C[i]<<"; ";
	}
	
	
}
