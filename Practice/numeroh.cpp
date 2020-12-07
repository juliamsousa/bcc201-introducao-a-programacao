#include <iostream>
using namespace std;
int main ()
{
    double h=0;
    int i, n;

    cout<<"Digite o numero n: "<<endl;
    cin>>n;
    
    if(n>0)
    {
        for (i=1;i<=n;i++)
        h+=(1.0/i);

        cout<<"H="<<h<<endl;
    }
    return 0;
}
