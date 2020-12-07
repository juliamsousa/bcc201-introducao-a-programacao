#include <iostream>
#include <cmath>
using namespace std;

//prototipo da funcao nprimo
int nprimo (int num);

//protoripo da funcao diagonal
double diagonal (double lado);

int main ()
{
    int n, div, op; 
    double a;
    
    cout<<"1 - Funcao Numero Primo "<<endl;
    cout<<"2 - Funcao Diagonal do Cubo "<<endl;
    cout<<"Digite a funcao desejada"<<endl;
    cin>>op;
    
    switch (op)
  {     
    case 1:
    {
        cout<<"Digite o numero inteiro desejado: "<<endl;
        cin>>n;
    
        div = nprimo (n);
    
        if (div==2)
            cout<<"O numero "<<n<<" é primo."<<endl;
        else 
            cout<<"O numero "<<n<<" não é primo."<<endl;
    }
    break;
    
    case 2: 
    {
        cout<<"Digite a medida da aresta do cubo: "<<endl;
        cin>>a;
    
        cout<<"A diagonal do cubo é: "<<diagonal(a)<<endl;
    }
    break;
    
    default: 
        cout<<"Opcao invalida!"<<endl;
  }
    return 0;
}

//definicao da funcao nprimo

int nprimo (int num)
{
    int d=0;
    
    for (int i=1; i<=num; i++)
    {
        if (num%i==0)
            d++;
    }
    
    return d;
}

//definicao da funcao diagonal

double diagonal (double lado)
{
    double dbase; 
    double dcubo;
    
    dbase = lado*(pow(2,1.0/2));
    dcubo = pow ((lado*lado+dbase*dbase),1.0/2);
    
    return dcubo; 
}







