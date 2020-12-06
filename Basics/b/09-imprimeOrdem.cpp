#include <iostream>
using namespace std;

/**
 * Leia uma quantidade indeterminada de duplas de valores inteiros X e Y. 
 * Escreva para cada dupla uma mensagem que indique de estes valores foram 
 * digitados em ordem crescente ou decrescente. 
 * A leitura deve ser encerrada ao ser fornecidos valores iguais para X e Y.
 */ 

int main ()
{
	int x, y;
	
	// executa enquanto os valores de x e y forem diferentes
	do
	{
		// le valores para x e y
		cout<<"Digite um valor para x: "<<endl;
		cin>>x;
		cout<<"Digite um valor para y: "<<endl;
		cin>>y;
		
		// verifica se foi digitado na ordem decrescente
		if(x>y)
		cout<<"ORDEM DECRESCENTE"<<endl;
			// verifica se foi digitado na ordem crescente
			else if (x<y)
		cout<<"ORDEM CRESCENTE"<<endl;
			// foram digitados valores iguais para x e y
			else
		cout<<"FIM DO PROGRAMA"<<endl;
	}
	while (x!=y);
	
	return 0;
}
