#include <iostream>
using namespace std;

//prototipo das funcoes
double salBruto (double sa, double r);
double salLiquido (double sn, double g, double d);

int main ()
{
	double salAtual, reajuste, salNovo, gratificacao, desconto;
	
	// calculo do salario bruto
	cout<<"Digite o salario atual do funcionario:"<<endl;
	cin>>salAtual;
	cout<<"Digite o valor do reajuste(%):"<<endl;
	cin>>reajuste;
	
	salNovo = salBruto (salAtual, reajuste);
	
	// calculo do salario liquido
	cout<<"Digite a gratificacao recebida(%):"<<endl;
	cin>>gratificacao;
	cout<<"Digite o valor do desconto(%):"<<endl;
	cin>>desconto;
	
	cout<<"O novo total do funcionario eh: R$"<<salLiquido(salNovo, gratificacao, desconto)<<endl;
	
	return 0;
}

// Calcular e imprimir o salario bruto
// parametros: salario atual e reajuste
double salBruto (double sa, double r)
{
	return sa*(1+r);
}

// Calcular e imprimir o salario liquido
// parametros: salario, gratificacao e desconto
double salLiquido (double sn, double g, double d)
{
	return (sn*(1+g))*(1-d);
}
