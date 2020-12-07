#include <iostream>
using namespace std;

// prototipos das funcoes
int fibonacci (int n);
void retorno (int n);

int main ()
{
    int op, nvezes, numero;
    
    // le a operacao a ser realizada
    cin>>op;

    while (op==1 || op==2)
    {
        switch (op)
        {

            case 1: 
            {
                cin>>nvezes;
                retorno (nvezes);   
            }
            break;

            case 2:
            {
                cin>>numero;
                cout<<"SOMATORIO = "<<fibonacci(numero)<<endl;
            }
            break;
        }

        // le uma nova operacao a ser realizada
        cin>>op;
    }

    return 0;
}

// funcao que calcula a sequencia de fibonacci
int fibonacci (int n)
{   
    int nanterior=0, nproximo=1, natual, soma= 1;
    cout<<"1";

    for (int i=1; i<n; i++)
    {
        natual=nanterior+nproximo;
        nanterior=nproximo;
        nproximo=natual;

        cout<<", "<<natual;
     
        soma+=natual;
    }

    cout<<endl;
    
    return soma;
}

void retorno (int n)
{
    int z, p, u;
    
    for (int i=1; i<=n; i++)
    {
        cin>>z;

        u=z%10;
    
        while (z>10)
        {
            z=z/10;   
        }

        p=z;
 
        cout<<p<<", "<<u<<endl;       
    }
}


