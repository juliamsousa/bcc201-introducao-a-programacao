#include <iostream>
using namespace std;
int main ()
{
    int vezes=5, inscr, nlcd, nled, i;
    double sal, nsal=0, inss, pctinss=0.08, pctir=0.05, clcd, cled, salb;

    for (i=1;i<=vezes;i++)
    {
        cout<<"Digite a incricão do funcionario: "<<endl;
        cin>>inscr;
        cout<<"Digite o salrio fixo do funcionario: "<<endl;
        cin>>sal;
        cout<<"Digite o numero de tvs LCD vendidas: "<<endl;
        cin>>nlcd;  
        cout<<"Digite o numero de tvs LED vendidas: "<,endl;
        cin>>nled;

        if (nlcd>=10)
            clcd=lcd*50;
        else
            clcd=lcd*40;

        if (nled>=20)
            cled=nled*30;
        else 
            cled=nled*15;

        salb=sal+cled+clcd;
        inss=sal*pctinss;
        nsal=sal-inss+cled+clcd;

        if (nsal>=1315)
            nsal*=(1-pctir);
        
        cout<<"Funcionario: "<<inscr;<<endl;
        cout<<"Salario bruto:RS"<<salb<<endl;
        cout<<"Salario liquido:R$"<<nsal<<endl;
    }

    return 0;
}
