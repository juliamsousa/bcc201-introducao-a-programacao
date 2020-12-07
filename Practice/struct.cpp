#include <iostream>
#include <cstdio>
using namespace std;

//definicao da struct
typedef struct aluno {
    long int matricula;
    char nome [70];
    double nota [3];
    int faltas;
    double frequencia;
} Taluno;

int main () 
{
    Taluno aluno[60];
    int nalunos;
    int imaior=0, imenor=0;

    cout<<"Digite o numero de alunos:"<<endl;
    cin>>nalunos;

    for (int i=0; i<nalunos; i++)
    {   
        cout<<"Digite a matricula do aluno: "<<endl;
        cin>>aluno [i].matricula;

        cout<<"Digite o nome do aluno: "<<endl;
        cin>>aluno [i].nome;

        cout<<"Digite a nota da primeira prova: "<<endl;
        cin>>aluno [i].nota [i];
        cout<<"Digite a nota da segunda prova: "<<endl;
        cin>>aluno [i].nota [i+1];

        aluno [i].nota [i+2] = (aluno [i].nota [i] + aluno [i].nota [i+1])/2.0;   
 
        cout<<"Digite a quantidade de faltas: "<<endl;
        cin>>aluno[i].faltas;
        aluno [i].frequencia = 1-(aluno [i].faltas*1.0/108);
    }

    for (int i=0; i<nalunos; i++)
    {
        if (aluno [i].nota [2]>aluno [i+1].nota [2])
            imaior = i;
        else 
            imenor = i;

        if (aluno [i].nota [2] >= 6 && aluno [i].frequencia >= 0.75)
            cout<<"Aluno: "<<aluno [i].nome<<": "<<" Aprovado."<<endl;    
        else
            cout<<"Aluno: "<<aluno [i].nome<<": "<<" Reprovado."<<endl;
    }

    cout<<"Aluno com maior media geral: "<<aluno[imaior].nome<<endl;
    cout<<"Aluno com menor media geral: "<<aluno[imenor].nome<<endl;

    return 0;
}
