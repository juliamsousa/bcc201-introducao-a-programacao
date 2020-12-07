#include <iostream>
#include <cmath>
using namespace std;

//definicao do tipo
typedef struct aluno 
{
    char nome [50];
    float altura;
    float peso;
    double imc;
    int situacao;
} Taluno;

//prototipo das funcoes
float getAlunoIMC (Taluno aluno);
void readAluno (Taluno &aluno);
int getCondicaoFisica (Taluno aluno);
void printAlunos (Taluno aluno[], int);

int main ()
{   
    Taluno aluno[50];
    int nalunos;

    cin>>nalunos;
    
    for (int i=0; i<nalunos; i++)
    {
        readAluno (aluno[i]);
        aluno[i].imc = getAlunoIMC (aluno[i]);
        aluno[i].situacao = getCondicaoFisica (aluno[i]);
    }

    printAlunos (aluno, nalunos);

    return 0;
}

float getAlunoIMC (Taluno aluno)
{
    return (aluno.peso)/pow(aluno.altura,2);
}

void readAluno (Taluno &aluno)
{
    cin>>aluno.nome;
    cin>>aluno.altura;
    cin>>aluno.peso;
}

int  getCondicaoFisica (Taluno aluno)
{   
    double imc = ceil(aluno.imc);
    if (imc<17)
    return 0;
    else if (imc>=17 && imc<=18.5)
    return 1;
    else if (imc>18.5 && imc<=25)
    return 2;
    else if (ceil(imc<30))
    return 3;
    else if (imc<=35)
    return 4;
    else if (imc>35 && imc<=40)
    return 5;
    else
    return 6;
}

void printAlunos (Taluno aluno [50], int nalunos)
{
    for (int i=0; i<nalunos; i++)
    {   
        if (aluno[i].situacao == 0)
        cout<<aluno[i].nome<<" = "<<"Muito abaixo do peso"<<endl;
        else if (aluno[i].situacao == 1)
        cout<<aluno[i].nome<<" = "<<"Abaixo do peso"<<endl;
        else if (aluno[i].situacao == 3)
        cout<<aluno[i].nome<<" = "<<"Acima do peso"<<endl;
        else if (aluno[i].situacao == 4)
        cout<<aluno[i].nome<<" = "<<"Obesidade"<<endl;
        else if (aluno[i].situacao == 5)
        cout<<aluno[i].nome<<" = "<<"Obesidade II"<<endl;
        else if (aluno[i].situacao == 6)
        cout<<aluno[i].nome<<" = "<<"Obesidade III"<<endl;
    }
}       
