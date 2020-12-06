#include <iostream>
#include <cmath>
using namespace std;
//prototipo da funcao
void imprimePontos(int a, int b, int delta);

int main ()
{
	int a, b, delta;
	
	cout<<"Digite os valores do intervalo [a,b]: "<<endl;
	cin>>a>>b;

	//funcao y = x^3-3x+1
	delta = ((-3)*(-3))-4*1*1;
	
	cout<<"Os pontos contidos em ["<<a<<","<<b<<"] sao: ";
	imprimePontos(a, b, delta);
	cout<<endl;
	
	return 0;
}

// funcao que imprime os pontos da funcao y = x^3-3x+1
void imprimePontos(int a, int b, int delta)
{	
	for (int i=a; i<=b; i+=delta)
	{
		cout<<"("<<i<<","<<(pow(i,3)-3*i+1)<<")"<<" ;";
	}
} 
