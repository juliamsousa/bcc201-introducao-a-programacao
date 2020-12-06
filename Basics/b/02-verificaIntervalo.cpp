#include <iostream>
using namespace std;

/**
 * Leia um valor inteiro N. Este valor será a quantidade de valores 
 * inteiros X que serão lidos em seguida. Mostre, ao final do programa, 
 * quantos destes valores X estão dentro do intervalo [10,20] 
 * e quantos estão fora do intervalo
 */ 

int main ()
{
	int n, x, lims=20, limi=10, contdentro=0, contfora=0;
	
	// le um valor digitado pelo usuario que determina quantos valores serao lidos
	cout<<"Digite um numero n: "<<endl;
	cin>>n;
	
	for (int i=1; i<=n; i++)
	{
		// le um valor digitado pelo usuario
		cout<<"Digite um numero x: "<<endl;
		cin>>x;
		
		// verifica se o numero estao no intervalo [10, 20]
		if(x<=lims && x>=limi)
			// total de valores compreendidos no intervalo [10, 20]
			contdentro++;

		else
			// total de valores nao compreendidos no intervalo [10, 20]
			contfora++;
	}
	
	// imprime os totais calculados
	cout<<"Total de numeros dentro do intervalo: "<<contdentro<<endl;
	cout<<"Total de numeros fora do intervalo: "<<contfora<<endl;
	
	return 0;
}
