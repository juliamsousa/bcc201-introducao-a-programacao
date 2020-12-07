#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    int n, i, j;
    
    cout<<"Digite o nº desejado: "<<endl;
    cin>>n;
     
    if (n>0)
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=i;j++)
        {
            cout<<setw(2)<<i;
        }
        cout<<endl;
    }
    else
    cout<<"O nº não é positivo e não-nulo."<<endl;

    return 0;
}
