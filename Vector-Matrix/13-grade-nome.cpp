#include <iostream>
using namespace std;
int main ()
{
	int n, cont=0;
	
	cout<<"Digite a dimensao dos vetores: "<<endl;
	cin>>n;
	
	double *grade = new double [n];
	char **name = new char *[n];
	for (int i=0; i<n; i++)
	{
		name[i]= new char [30];
	}
	
	for (int i=0; i<n; i++)
	{
		cout<<"Digite a "<<i+1<<" nota: "<<endl;
		cin>>grade[i];
	}
	
	for (int i=0; i<n; i++)
	{
		cout<<"Digite o nome do "<<i+1<<" aluno: "<<endl;
		cin>>name[i];
	}
	
	for (int i=0; i<n; i++)
	{
		if (grade[i]>=6)
			cont++;
	}
	
	if (cont==0)
		cout<<"Nenhum aluno tem nota maior que 6!"<<endl;
		
	for (int i=0; i<n; i++)
	{
		cout<<"Aluno: "<<name[i]<<endl;
		cout<<"Nota: "<<grade[i]<<endl;
		cout<<endl;
	}
	
	for (int i=0; i<n; i++)
	{
		delete [] name[i];
	}
	
	delete [] name;
	
	return 0;
}
