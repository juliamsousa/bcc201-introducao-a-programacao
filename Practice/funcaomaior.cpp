#include <iostream>
#define length 100
using namespace std;

//prototipo funcao maior
double* maior (double *vetor, int tamanho);

int main ()
{
    double numero [length], n;
    double *pnumero;
    double *enderecomaior;

    cout<<"Digite a quantidade de numeros desejados:"<<endl;
    cin>>n;
    
    if (n<=length)
    {
        for (int i=0; i<n; i++)
        {
            cout<<"Digite o numero real desejado: "<<endl;
            cin>>numero[i];
        }
    }
    else
        cout<<"Digite um numero menor ou igual a 100!"<<endl;

    pnumero = numero;
    
    enderecomaior = maior (pnumero, n);

    cout<<"O maior numero: "<<*enderecomaior<<endl;

    return 0;
}

//implementacao da funcao maior
double* maior (double *vetor, int tamanho)
{   
    double *maior;

    for (int i=0; i<tamanho; i++, vetor++)
    {
        if (*vetor>(*(vetor+1)))
            maior = vetor;
    }
    
    return maior;
}
