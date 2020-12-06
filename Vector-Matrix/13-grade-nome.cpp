#include <iostream>
using namespace std;

/**
 * Escrever um programa que leia dois vetores de mesma dimensao. Para isso o programa le a
 * dimensao dos vetores e seus elementos, uma a um. O primeiro vetor (name) contem os nomes dos
 * alunos de uma turma. O segundo vetor (grade) contem as notas de uma prova desses alunos. Desta
 * forma, o aluno cujo nome esta na posicao i do vetor name, possui a nota da posicao i do vetor grade.
 * O programa busca e imprime o nome dos alunos, e a respectiva nota, considerando que a notas
 * desses alunos de maior ou igual a seis.
 * Caso nenhum aluno atenda a esse criterio, o usuario deve ser notificado atraves de uma mensagem.
 */

int main ()
{
	int n, cont=0;
	
	// le a dimensao n dos vetores
	cout<<"Digite a dimensao dos vetores: "<<endl;
	cin>>n;
	
	// aloca os vetores de alunos e notas dinamicamente
	double *grade = new double [n];
	// vetor de vetores de char
	char **name = new char *[n];

	// aloca os vetores de char (Strings)
	for (int i=0; i<n; i++)
	{
		name[i]= new char [30];
	}
	
	// le as notas de cada aluno
	for (int i=0; i<n; i++)
	{
		cout<<"Digite a "<<i+1<<" nota: "<<endl;
		cin>>grade[i];
	}
	
	// le os nomes de cada aluno
	for (int i=0; i<n; i++)
	{
		cout<<"Digite o nome do "<<i+1<<" aluno: "<<endl;
		cin>>name[i];
	}
	
	// verifica quais notas estao acima da media
	for (int i=0; i<n; i++)
	{
		if (grade[i]>=6)
			cont++;
	}
	
	// notifica o usuario se nenhuma nota estiver acima da media
	if (cont==0)
		cout<<"Nenhum aluno tem nota maior que 6!"<<endl;
		
	// imprime o nome do aluno e sua respectiva nota
	for (int i=0; i<n; i++)
	{
		cout<<"Aluno: "<<name[i]<<endl;
		cout<<"Nota: "<<grade[i]<<endl;
		cout<<endl;
	}
	
	// desaloca os vetores de char alocados dinamicamente
	for (int i=0; i<n; i++)
	{
		delete [] name[i];
	}
	
	// desaloca a memoria alocada dinamicamente
	delete [] name;
	delete [] grade;
	
	return 0;
}
