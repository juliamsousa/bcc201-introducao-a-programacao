#include <iostream>
using namespace std;
int main ()
{
    int i, j=1, x, soma=0;
    cout<<"Digite o número desejado: "<<endl;
    cin>>x;
    while (x!=0)
    {
        for (i=1;i<=x;i++)
        {
            soma+=j;
            cout<<soma<<" ";
            j+=2;
        }
    cout<<endl;   
    cout<<"Digite o número desejado: "<<endl;
    cin>>x;
    }
    
    return 0;
}   

