#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
	int linha=10, coluna=15;
	
	cout<<"\n\t\tTabuada de Multiplicação\n";
	cout<<"    ";
	for (int i=1;i<=coluna;i++)//parte de cima da tabela
		cout<<setw(4)<<i; 
	cout<<"\n";
	
	for (int i=1;i<=coluna+1;i++)//controla os tracinhos a partir do numero de colunas
		cout<<"----";
	cout<<"\n";
	
	for (int i=1;i<=linha;i++)//controla as linhas e pula ao fim do laço interno
	{
		cout<<setw(2)<<i<<" |";
		for (int j=1;j<=coluna;j++)
			cout<<setw(4)<<i*j;
		cout<<endl;
	}
	return 0;
}
