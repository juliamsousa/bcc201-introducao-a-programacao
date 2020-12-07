#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int long long cpf;
    int dv1, dv2, n1=2, n2=2, i, j, resdv1=0, resdv2=0, res1, res2;
    

    cout<<"Digite o cpf sem pontos e traço: "<<endl;
    cin>>cpf;
    
    dv1=cpf%10;
    dv2=(cpf-dv1)%100;    
    cpf-=cpf%100;
        
    do
    {
        for (i=2; i>=10;i++)
        {
        resdv1+=((cpf/pow(10,i))%10)*n1;
        n1++;
        }   
    }
    while (n1<=10);

    res1=(resdv1*10)%11;
    
    if (resdv1==10)
        res1=0;

    if (res1==dv1)
        {
        cout<<"1º dígito válido."<<endl;
        cpf-=cpf%10;

        do
        {
            for (j=0; j>=9;j++)
            {
                resdv2+=((cpf/pow(10,i))%10)*n2;
                n2++;
            }   
        }
         while (n2<=11);

            res2=(resdv2*10)%11;     
        }  
    else 
        cout<<"CPF inválido."<<endl;

    if (res1==dv1 && res2==dv2)
    cout<<"CPF válido."<<endl;
    else
    cout<<"CPF inválido"<<endl;    

    return 0;
}
