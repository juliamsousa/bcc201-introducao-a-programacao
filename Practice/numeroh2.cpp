#include <iostream>
using namespace std;
int main ()
{
    double h=1;
    int i, n, sinal=-1, p=3;
    
    cout<<"Digite o numero n desejado: "<<endl;
    cin>>n;
    
    if(n>0)
    {
        for (i=2;i<=n;i++)
        {
            h+=(1.0/p*sinal);
            sinal*=-1;
            p+=2;
        }
    }
  
    cout<<"H="<<h<<endl;
    
    return 0;
}
