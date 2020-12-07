#include <iostream>
using namespace std;

/**
 * Funcao que imprime os numeros na forma de cascata
 * Exemplo:
 * 
 * 1
 * 1 2
 * 1 2 3
 * 1 2 3 4
 * ...
 * 1 2 3 4 ... n
 * 
 */

int main ()
{
    int i, j, n;

    // le um valor digitado pelo usuario
    cout<<"Digite um valor para n: "<<endl;
    cin>>n;
    
    // imprime os numeros ate n em cascata
    for (i=1; i<=n; i++)
    {
        for (j=1; j<=i; j++)
            cout<<i;

        cout<<endl;
    }

    return 0;
}       

