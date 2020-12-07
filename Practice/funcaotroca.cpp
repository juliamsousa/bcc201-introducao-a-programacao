#include <iostream>
using namespace std;

//prototipo funcao troca
void troca (int *x, int *y);

int main ()
{
    int a, b;
    int *pa;
    int *pb;
    
    cout<<"Digite o primeiro numero desejado: "<<endl;
    cin>>a;
    cout<<"Digite o segundo numero desejado: "<<endl;
    cin>>b;
    
    cout<< "Numeros digitados: "<<a<<", "<<b<<endl;

    //passagem dos ponteiros
    pa = &a;
    pb = &b;

    troca (pa, pb);

    cout<<"Numeros trocados: "<<a<<", "<<b<<endl;

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
