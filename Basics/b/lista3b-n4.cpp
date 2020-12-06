#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
	int p1=2, p2=3, p3=5;
	double somanotas=0, media,nota1, nota2, nota3;
	
	cout<<"Digite a 1 nota: "<<endl;
	cin>>nota1;
	
	cout<<"Digite a 2 nota: "<<endl;
	cin>>nota2;
	
	cout<<"Digite a 1 nota: "<<endl;
	cin>>nota3;
	
	somanotas= (nota1*p1)+(nota2*p2)+(nota3*p3);
	media=somanotas/(p1+p2+p3);
	
	cout<<"A media das notas e: "<<setprecision(1)<<fixed<<media<<endl;
	
	return 0;
}
