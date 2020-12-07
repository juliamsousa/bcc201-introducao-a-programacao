#include <iostream>
using namespace std;

int** alocaMatriz (int m, int n);
void deletaMatriz (int **matriz, int m);
void somaProdutorio (int **matriz, int m, int n, int coluna, int linha, int *soma, int *prod);
void entradaMatriz (int **matriz, int m, int n);

int main ()
{
    int m, n, linhas, colunas;
    int *soma = new int;
    int *prod = new int;
    int **M;
    
    cin>>m>>n;
    cin>>linhas>>colunas;


    M = alocaMatriz (m, n);
    entradaMatriz (M, m, n);
    somaProdutorio (M, m, n, colunas, linhas, soma, prod);

    cout<<"SOMA = "<<*soma<<endl;
    cout<<"PRODUTORIO = "<<*prod<<endl;

    deletaMatriz (M, m);
    
    return 0;
}

int** alocaMatriz (int m, int n)
{
    int i;
    int **matriz = new int*[m];
    
    for (i=0; i<m; i++)
        matriz[i] = new int [n];
    
    return matriz;
}

void entradaMatriz (int **matriz, int m, int n)
{
    int i, j;

    for (i=0; i<m; i++)
        for (j=0; j<n; j++) 
            cin>>matriz[i][j];
}

void somaProdutorio (int **matriz, int m, int n, int coluna, int linha, int *soma, int *prod)
{
    int sum=0, i, j, mult=1;

    for (i=linha; i<=linha; i++)
        for (j=0; j<n; j++)
            sum+= matriz [i][j];

    for (i=0; i<m; i++)
        for (j=coluna; j<=coluna; j++)
            mult*= matriz [i][j];
    *soma = sum;
    *prod = mult;
}

void deletaMatriz (int **matriz, int m)
{   
    int i;

    for (i=0; i<m; i++)
        delete [] matriz[i];

    delete [] matriz;
}
