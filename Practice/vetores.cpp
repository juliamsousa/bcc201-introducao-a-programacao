#include <iostream>
using namespace std;
int main ()
{
    int n, m, j=0, k=0, l=0, h=0;
    int v1[100], v2[100], v3[200];
    
    cout<<"Digite o numero de termos do vetor 1: "<<endl;
    cin>>n;    
    cout<<"Digite o numero de termos do vetor 2: "<<endl;
    cin>>m;

    for (int i=0; i<n; i++)
    {
        cout<<"Digite o "<<i+1<<" termo do vetor 1 : "<<endl;
        cin>>v1[i];
    }

    for (int i=0; i<m; i++)
    {
        cout<<"Digite o "<<i+1<<" termo do vetor 2 : "<<endl;
        cin>>v2[i];
    }
    
    if (m>n)
    {
        for (int i=0; i<n; i++)
        {    
            if ((i+1)%2==0)
                {v3[i]=v2[j];
                j++;}
            else
                {v3[i]=v1[k];
                k++;}
        }
        for (int i=n; i<(m+n); i++)
        {                
            v3[i]=v2[i-1];
        }
    }

    else
    {
        for (int i=0; i<m; i++)
        {    
            if ((i+1)%2==0)
                {v3[i]=v2[l];
                l++;}
            else
                {v3[i]=v1[h];
                h++;}  
        }
        
        for (int i=m; i<(m+n); i++)
        {                
            v3[i]=v2[i-1];
        }
    }

    cout<<"V3 = {";

    for (int i=0; i<(m+n); i++)
    {
        cout<<v3[i]<<" ";
    }
    
    cout<<"}"<<endl;
        
    return 0;
}
