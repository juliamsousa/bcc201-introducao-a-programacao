#include <iostream>
using namespace std;

//prototipo das funcoes
void ordem (int a, int b, int c);
void troca ( int a, int b, int n);

int main ()
{
    int op, a, b, c, x, y, n;

    cin>>op;

    while (op==1 || op==2)
    {
        switch (op)
        {
    
            case 1:
                {   
                    cin>>a>>b>>c;

                    ordem (a, b, c);

                    cin>>op;
                }
            break;

            case 2:
                {
                    cin>>n;
                    cin>>x>>y;

                    troca (x, y, n);

                    cin>>op;
                }
            break;
        }
    }

    return 0;
}

//implemetacao das funcoes
void ordem (int a, int b, int c)
{
    int aux, aux1;
    int *pa = &a;
    int *pb = &b;
    int *pc = &c;

    if (b>a && b>c)
        {
            aux = *pa;
            *pa = *pb;

            if (c>a)
                {
                    aux1 = *pc;
                    *pc = aux;
                    *pb = aux1; 
                }            
            else
                *pb = aux;  
        }
    
        if (c>a && c>b)
        {
            aux = *pa;
            *pa = *pc;

            if (b<a)
                {
                    aux1 = *pb;
                    *pb = aux;
                    *pc = aux1; 
                }            
            else
                *pc = aux;  
        }

    if (a>b && a>c)
            if (c>b)
                {   
                    aux = *pb;
                    aux1 = *pc;
                    *pc = aux;
                    *pb = aux1; 
                }  
         
    cout<<c<<" "<<b<<" "<<a<<""<<endl;
    cout<<a<<" "<<b<<" "<<c<<""<<endl;
}

void troca ( int a, int b, int n)
{
    int aux;
    int *pa = &a;
    int *pb = &b;
    
    for (int i=0; i<n; i++)
    {
        aux = *pa;
        *pa = *pb;
        *pb = aux;
    }

    cout<<a<<" "<<b<<endl;
}
