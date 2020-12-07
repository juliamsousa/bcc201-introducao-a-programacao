#include <iostream>
using namespace std;
int main ()
{
    int i,j=1,x,res=0;
    cout<<"Digite o número desejado: "<<endl;
    cin>>x;
    while (x!=0)
    { 
        for (i=1;i<=x;i++)
        {
            res+=j*j;
            cout<<res<<" ";
            j++;
            res=0;
        }
    cout<<endl;   
    cout<<"Digite o número desejado: "<<endl;
    cin>>x;
    j=1;
    }
    
    return 0;
}
