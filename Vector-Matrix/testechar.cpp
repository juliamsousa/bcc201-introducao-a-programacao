#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main ()
{
	char vet [30];
	char vet2 [30];
	cout<<"Digitae :"<<endl;
	cin>>vet>>vet2;
	cout<<"Tamanho do vetor: "<<strlen(vet)<<endl;
	cout<<"Comparacao: "<<strcmp(vet, vet2)<<endl;
	cout<<"Juncao: "<<strcat(vet, vet2)<<endl;
	cout<<"Copia: "<<strcpy(vet, vet2)<<endl;
	
	return 0;
}
