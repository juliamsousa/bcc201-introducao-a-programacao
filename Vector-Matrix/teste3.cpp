#include <iostream>
using namespace std;

int main ()
{


	int n=10;
	int *pn = &n;


	cout<<"Expressao: "<<**&pn<<endl;

	cout<<"a: "<<pn++<<endl;
	cout<<"b: "<<(*pn)++<<endl;
	cout<<"c: "<<*(pn++);	
	return 0;

}
