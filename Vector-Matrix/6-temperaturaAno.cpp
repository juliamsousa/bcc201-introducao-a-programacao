#include <iostream>
using namespace std;
int main ()
{
	double temperatura[365];
	double soma=0, media;
	
	for (int i=0; i<365; i++)
	{
		cout<<"Digite a temperatua no dia "<<i+1<<": "<<endl;
		cin>>temperatura[i];
		
		soma+=temperatura[i];
	}
	
	media=soma/365;
	
	for (int i=0; i<365; i++)
	{
		if (temperatura[i]<media)
			cout<<"A temperatura "<<temperatura[i]<<" esta abaixo da media "<<media<<endl;
	}
	
	return 0;
}
