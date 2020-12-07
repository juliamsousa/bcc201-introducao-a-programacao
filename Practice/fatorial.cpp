#include <iostream>
using namespace std;

// funcao que calcula o fatorial de um numero fornecido pelo usuario
int main ()
{
    int n, ni;
    long long fat=1;

    // le um valor digitado pelo usuario
    cout<<"Digite o número desejado: "<<endl;
    cin>>n;

    ni=n;

    // calcula o fatorial de n
    while (n>0)
    {
        fat*=n;
        n--;
    }

    // imprime o valor calculado
    cout<<ni<<"!"<<" = "<<fat<<endl;   

    return 0;       
}
