#include <iostream>
using namespace std;

/**
 * Suponha que para cada aluno de sua sala exista uma ficha contendo a 
 * matricula e a idade do aluno. Supondo que exista 50 alunos, faca 
 * uma algoritmo que determine quantos desses alunos tem idade maior que 20.
 */ 

int main ()
{	
	int mat, idade, cont=0;
	
	for (int i=1; i<=50; i++)
	{
		// le os dados das fichas dos alunos
		cout<<"Digite a matricula do aluno: "<<endl;
		cin>>mat;
		cout<<"Digite a idade do aluno: "<<endl;
		cin>>idade;
		
		// verifica se a idade do aluno é maior que 10
		if (idade>20)
			cont++;
	}
	
	// imprime o numero de alunos com idade maior que 20
	cout<<"O numero de pessoas mais velhas que vinte anos: "<<cont<<endl;
	
	return 0;
}
