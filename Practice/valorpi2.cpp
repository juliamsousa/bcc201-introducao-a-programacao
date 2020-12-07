#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int termos, i, j;
    double pi, s1=0, s2=0, s=0;
    
    cout<<"Digite o nº de termos: "<<endl;
    cin>>termos;

    for (i=1;i<=termos;i+=2)
    {
        s1+=(1.0/(pow((2*i-1),3)));
    }
    for (j=1;j<termos;j+=2)   
    {
        s2-=(1.0/(pow((2*j+1),3)));
    }
    
    s=s1+s2;
    pi=pow((s*32),(1.0/3));

    cout<<"O valor de pi é: "<<pi<<endl;

    return 0;
}
