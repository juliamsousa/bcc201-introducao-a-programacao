#include <iostream>
using namespace std;
int main ()
{
    double s1=0, s2=0,valor;
    int termos, i, j;

    cout<<"Digite o número de termos: "<<endl;
    cin>>termos;

    for (i=1;i<=termos;i+=2)
    {
        s1+=(1.0/(i*2.0-1));
    }

    for (j=1;j<termos;j+=2)
    {
        s2-=(1.0/(j*2.0+1));
    }

    valor=(s1+s2)*4;

    cout<<"O valor de pi="<<valor<<endl;
    
    return 0;
}
