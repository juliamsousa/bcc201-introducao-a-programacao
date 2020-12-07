#include <iostream>
#define tamanho 100
using namespace std;

void preenchevetor (int vet[], int n);
void calculovetor (int vet[], int n);
void imprimevetor (int vet[], int n);

int main ()
{
    int vet[tamanho], n, op;

    cin>>op;
       
   while (op!=0)
   { 
    switch (op) { 
    case 1:
    {
        cin>>n;
        preenchevetor (vet, n);
        imprimevetor (vet, n);
        cin>>op;
    }
    break;
    
    case 2:
    {
        cin>>n;
        preenchevetor (vet, n);
        calculovetor (vet, n);
        cin>>op;
    }
    break;
    
    cin>>op;}
  }  
    return 0;
}

void preenchevetor (int vet[] , int n)
{
    if (n<=tamanho)
        for (int i = 0; i<n; i++)
            cin>>vet[i];
}

void imprimevetor (int vet[], int n)
{   
    if (n<=tamanho)
        for (int i = n-1 ; i>=0; i--)
            cout<<vet[i]<<" ";
    
    cout<<endl;
}

void calculovetor (int vet[], int n)
{
    int soma2=0, sub3=0, mult6=1;
    
    if (n<=tamanho)
    for (int i = 0; i<n; i++)
    {
        if (i%2==0)
            soma2+=vet[i];
        if (i%3==0)
            sub3-=vet[i];
        if (i%2==0 && i%3==0)
            mult6*=vet[i]; 
    }     

    cout<<soma2<<" "<<sub3<<" "<<mult6<<endl;
}
