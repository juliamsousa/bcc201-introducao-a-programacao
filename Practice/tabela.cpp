#include <iostream>
using namespace std;
int main ()
{
    int x, y, i, j, linha=8, coluna=8;
    cout<<"Digite o número da linha: "<<endl;
    cin>>x;
    cout<<"Digite o número da coluna: "<<endl;
    cin>>y;
    for (i=1; i<=linha; i++)
    {
        for(j=1; j<=coluna; j++)
        if (i==x && j==y)
        cout<<" C ";
        else 
        if (j==y)
        cout<<" B ";
        else
        if (i==x)
        cout<<" A ";
        else
        cout<<" O ";
        cout<<endl;
     }
        
    return 0;
}
