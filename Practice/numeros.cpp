#include <iostream>
using namespace std;
int main ()
{
    double h=0;
    int i, n,p;
    
    cout<<"Digite o numero n desejado: "<<endl;
    cin>>n;
    if (n<0)
    cout<<"Deve ser digitado um numero inteiro positivo!"<<endl;
    else
    {
        p=n;
        for (i=1;i<=n;i++)
        {
            h+=(1.0*i)/p;
            p--;
        }
    cout<<"S = "<<h<<endl;
    }
    return 0;
}
