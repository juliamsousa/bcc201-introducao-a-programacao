#include <iostream>
#define length 10
using namespace std;

//prototipo funcao troca
void troca (int *x, int *y);
//prototipo funcao ordem
void ordem (int *vetor,int vezes, int num);

int main()
{
    int numero [length];
    int *pnumero = NULL;
        pnumero = new int [length];
    int n, n1;

    cout<<"Digite a quantidade de numeros desejados: "<<endl;
    cin>>n;

    for (int i=0; i<n; i++)
    {
        cout<<"Digite o numero inteiro desejado (em ordem crescente): "<<endl;
        cin>>numero[i];
    }

    cout<<"Digite o numero inteiro a ser inserido no vetor:"<<endl;
    cin>>n1;
    
    pnumero = numero;

    ordem (pnumero, n, n1); 

    cout<<"Vetor com o numero inserido: ";

    for (int i=0; i<=n; i++)
    {
        cout<<numero[i]<<" ";
    }
    
    cout<<endl;

    return 0;
}

//implemetacao funcao troca
void troca (int *x, int *y)
{
    int aux;
    aux = *x;
    *x = *y;
    *y = aux;
}

//implementacao funcao ordem
void ordem (int *vetor, int vezes, int num)
{
    int *inserir;
    int posicao;

    for (int i=0; i<vezes; i++, vetor++)
    {
        if (num>*vetor && num<(*(vetor+1)))
        {            
            inserir = vetor;
            posicao = i;

            for (int i=0 ; i<=(vezes-posicao); i++, vetor++)
                troca (vetor, vetor+1);

            *inserir = num;
        }
        else
            inserir = (vetor+vezes);
            *inserir = num;
    } 
}
