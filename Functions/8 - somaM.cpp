#include <iostream>
using namespace std;

//prototipo da funcao
int somaM (int m, int n);
void troca (int *m, int *n);

int main ()
{
	int m, n;
	int *pm;
	int *pn;
	
	cout<<"Digite valores para m e n: "<<endl;
	cin>>m>>n;
	
	// validacao da entrada
	if (n<m)
		troca (pm, pn);
	
	cout<<"O resultado da soma e: "<<somaM (m, n)<<endl;
	
	return 0;
}

// troca os valores de m e n para que (m>n) == true
void troca (int *pm, int *pn)
{
	int aux;
	
	aux = *pm;
	*pm = *pn;
	*pn = aux;	
}

// valor da soma m + (m + 1) + (m + 2) + (m + 3) + . . . + n, para os valores de m e n com m < n.
int somaM (int m, int n)
{
	int soma=0;
	
	for (int i=m; i<=n; i++)
		soma+=i;
	
	return soma;
}
