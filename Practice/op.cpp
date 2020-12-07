#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    double res, n1, n2;
    int op, cond=-1;
    
    do 
    {
        cout<<"\nDigite os números desejados: ";
        cin>>n1>>n2;
        cout<<"Escolha uma operação: "<<endl<<"1-Soma;"<<endl<<"2-Subtração;"<<endl
            <<"3-Divisão;"<<endl<<"4-Multiplicação;"<<endl<<"5-Potenciação;"
            <<endl<<"6-Raiz n-ésima."<<endl;
        cin>>op;
        
        switch (op)
        {
            case 1:
            {
                res=n1+n2;
                cout<<res<<endl;
            }
            break;
            case 2:
            {   
                res=n1-n2;
                cout<<res<<endl;
            } 
            break; 
            case 3:
            {
                if (n2>0)
                {
                    res=n1/n2;
                    cout<<res<<endl;
                }
                else
                cout<<"Não existe divisão real por zero!"<<endl;
            } 
            break; 
            case 4:
            {
                res=n1*n2;
                cout<<res<<endl;
            } 
            break;
            case 5:
            {   
                if (n1>0 || n2>0)
                {
                    res=pow(n1,n2);
                    cout<<res<<endl;
                }
                else
                cout<<"Não é possível elevar 0 a 0!"<<endl;
            } 
            break;
            case 6:
            {
                if (n2>0)
                {
                    res=pow(n1,(1.0/n2));
                    cout<<res<<endl;
                }
                else
                cout<<"Não é possível realizar a operação!"<<endl;
                
            } 
            break;
            case -1:
            cout<<"Fim do programa!"<<endl;
            break;
            default:
            cout<<"Opção inválida, digite novamente: "<<endl;
        }
    }
    while(op!=cond);

    return 0;
   
}
