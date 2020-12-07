#include <iostream>
using namespace std;
int main () 
{
const int ano=365;
double tm [365];
double media, somat=0;
int quant=0;

    for (int i=0; i<ano; i++)
    {
        cout<<"Digite a temperatura media do dia: "<<i+1<<endl;
        cin>>tm[i];
        somat+=tm[i];
    }

    media=somat/ano;

    cout<<"Temperaturas acima da media: ";

    for (int j=0; j<ano; j++)
    {
        if (tm[j]>media)
            {
                quant++;
                cout<<tm[j]<<" ";     
            } 
    }
 
    cout<<"\nDias com temperatura acima da media: "<<quant<<endl;

    return 0;
}
