#include <iostream>
#include <iomanip>
using namespace std;

//declaracao das structs
typedef struct aluno 
{
    char nome [30];
    int turma;
    double notas [3];
} Taluno;

typedef struct cidade
{
    char nomecidade [30];
    long int populacao;
} Tcidade;

typedef struct estado 
{
    char nomeestado [30];
    Tcidade cidade;
} Testado;

typedef struct pais
{
    char nomepais [30];
    Testado estado;
} Tpais;
    
    
int main ()
{
    Taluno aluno;
    Tpais pais;
    int op;
    double somanotas=0;
    
    cin>>op;
    
    while (op==1||op==2)
{
    switch (op) { 
    
    case 1:
    {
        cin>>aluno.nome;
        cin>>aluno.turma;
        
        for (int i=0; i<3; i++)
        {
            cin>>aluno.notas[i];
            somanotas+=aluno.notas[i];
        }
         
        cout<<"Nome: "<<aluno.nome<<endl;
        cout<<"Turma: "<<aluno.turma<<endl;
        cout<<"Media das notas: "<<setprecision(1)<<fixed<<somanotas/3<<endl;
        
        cin>>op;
        
        somanotas=0;
    }
    break;
    
    case 2:
    {   
        cin>>pais.nomepais;
        cin>>pais.estado.nomeestado;
        cin>>pais.estado.cidade.nomecidade;
        cin>>pais.estado.cidade.populacao;
        
        cout<<"PAIS: "<<pais.nomepais<<endl;
        cout<<"ESTADO: "<<pais.estado.nomeestado<<endl;
        cout<<"CIDADE: "<<pais.estado.cidade.nomecidade<<endl;
        cout<<"POPULACAO: "<<pais.estado.cidade.populacao<<endl;  
        
        cin>>op;  
    }
    break;
    }  
}           

    return 0;
}
