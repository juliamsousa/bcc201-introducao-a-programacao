#include <iostream>

using namespace std;

int soma (int a, int b);
int subtracao (int a, int b);
int multiplicacao (int a, int b);
int divisao (int a, int b);

int main ()
{
    int n1, n2, op;

do {
    cout<<"Digite o primeiro numero inteiro desejado: "<<endl;
    cin>>n1;
    cout<<"Digite o segundo numero inteiro desejado: "<<endl;
    cin>>n2;

    cout<<"Funcoes disponiveis: "<<endl;
    cout<<"1 - Soma"<<endl;
    cout<<"2 - Subtracao"<<endl;
    cout<<"3 - Multiplicacao"<<endl;
    cout<<"4 - Divisao"<<endl;
    cin>>op;

    switch (op)
 {
    case 1:
        {
            cout<<soma(n1,n2)<<endl;
        }
    break;

    case 2:
        {
            cout<<subtracao(n1,n2)<<endl;
        }
    break;

    case 3:
        {
            cout<<multiplicacao(n1,n2)<<endl;
        }
    break;

    case 4:
        {
            cout<<divisao(n1,n2)<<endl;
        }
    break;
    
    default:
        cout<<"Fim do programa!"<<endl;

 }
} while (op==1||op==2||op==3||op==4);
    return 0;
}

int soma (int a, int b)
{
    int r;
    r=a+b;
    return r;
}

int subtracao (int a, int b)
{
    int r;
    r=a-b;
    return r;
}

int multiplicacao (int a, int b)
{
    int r=0;
    for (int i=1;i<=b;i++)
    {
        r+=a;
    }

    return r;
}

int divisao (int a, int b)
{
    int cont=1;
    do
    {
        subtracao(a,b); 
        a=subtracao(a,b);

        if (subtracao(a,b)>=0)
            cont++;
    }
    while (subtracao(a,b)>=0);

    return cont;
}


















