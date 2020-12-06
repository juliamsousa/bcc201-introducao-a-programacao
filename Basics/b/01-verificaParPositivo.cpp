#include <iostream>
using namespace std;

/**
 * Leia 5 valores Inteiros. A seguir mostre quantos valores digitados foram pares, 
 * quantos valores digitados foram ímpares, quantos valores digitados foram positivos 
 * e quantos valores digitados foram negativos.
 */

int main()
{
	int n, vezes = 5, i, contpar = 0, contimpar = 0, contpositivo = 0, contnegativo = 0;

	for (i = 1; i <= vezes; i++)
	{
		cout << "Digite um numero: " << endl;
		cin >> n;

		// verifica se o numero e par
		if (n % 2 == 0)
			// calcula o total de numeros pares
			contpar++;
		else
			// calcula o total de numeros impares
			contimpar++;

		// verifica se o numero e positivo
		if (n > 0)
			// total de numeros positivos
			contpositivo++;
		else
			// total de numeros negativos
			contnegativo++;
	}

	// imprime os totais calculados
	cout << "Numeros positivos totais: " << contpositivo << endl;
	cout << "Numeros negativos totais: " << contnegativo << endl;
	cout << "Numeros pares totais: " << contpar << endl;
	cout << "Numeros impares totais: " << contimpar << endl;

	return 0;
}
