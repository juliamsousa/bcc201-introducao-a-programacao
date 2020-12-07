#include <iostream>
#include <cmath>
using namespace std;

int main() {
	
	int codigo;
	double num1, num2, divisao, raiz, potencia, soma, subtracao, multiplicacao;
		
	cout << "1) Soma;" << endl;
	cout << "2) Subtração;" << endl;
	cout << "3) Divisão;" << endl;
	cout << "4) Multiplicação;" << endl;
	cout << "5) Potenciação;" << endl;
	cout << "6) Raiz n-ésima." << endl;		
	
 	cin >> codigo;

	
	
	
	
		  
	while (codigo) {

		while (codigo != 1 && codigo != 2 && codigo != 3 && codigo != 4 && codigo != 5 && codigo != 6 && codigo != -1){
		cout << "Erro: opção inválida. Insira novamente uma opção!" << endl;
		cin >> codigo;
		}

		cin >> num1 >> num2;
	
		switch (codigo){
				case 1:
					soma = num1 + num2;
					cout << soma << endl;
					cout << "1) Soma;" << endl;
					cout << "2) Subtração;" << endl;
					cout << "3) Divisão;" << endl;
					cout << "4) Multiplicação;" << endl;
					cout << "5) Potenciação;" << endl;
					cout << "6) Raiz n-ésima." << endl;		
	
				break;		
				case 2:
					subtracao = num1 - num2;	
					cout << subtracao << endl;
					cout << "1) Soma;" << endl;
					cout << "2) Subtração;" << endl;
					cout << "3) Divisão;" << endl;
					cout << "4) Multiplicação;" << endl;
					cout << "5) Potenciação;" << endl;
					cout << "6) Raiz n-ésima." << endl;		
	
				break;
				case 3:
					divisao = num1 / num2;
					cout << divisao << endl;
					cout << "1) Soma;" << endl;
					cout << "2) Subtração;" << endl;
					cout << "3) Divisão;" << endl;
					cout << "4) Multiplicação;" << endl;
					cout << "5) Potenciação;" << endl;
					cout << "6) Raiz n-ésima." << endl;		
	
				break;
				case 4:
					multiplicacao = num1 * num2;
					cout << multiplicacao << endl;	
					cout << "1) Soma;" << endl;
					cout << "2) Subtração;" << endl;
					cout << "3) Divisão;" << endl;
					cout << "4) Multiplicação;" << endl;
					cout << "5) Potenciação;" << endl;
					cout << "6) Raiz n-ésima." << endl;		
	
				break;
				case 5:
					potencia = pow(num1, num2);
					cout << potencia << endl;
					cout << "1) Soma;" << endl;
					cout << "2) Subtração;" << endl;
					cout << "3) Divisão;" << endl;
					cout << "4) Multiplicação;" << endl;
					cout << "5) Potenciação;" << endl;
					cout << "6) Raiz n-ésima." << endl;		
	
				break;
				case 6:
					raiz = pow(num1,1/num2);
					cout << raiz << endl;
					cout << "1) Soma;" << endl;
					cout << "2) Subtração;" << endl;
					cout << "3) Divisão;" << endl;
					cout << "4) Multiplicação;" << endl;
					cout << "5) Potenciação;" << endl;
					cout << "6) Raiz n-ésima." << endl;		
				
				break;
				case -1:
					return 0;
				break;
		}
				
					
	}
			
	
	return 0;
}		
