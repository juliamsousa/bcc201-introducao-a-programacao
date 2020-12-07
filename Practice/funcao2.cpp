#include <iostream>
using namespace std;

// prototipos das funcoes
bool par_impar (int x);
int idade (int a, int m, int d);
char conceito (double m);
void tabuada (int n);

int main ()
{
    int op, npar, anos, meses, dias, ntabuada;
    double media;

    // le a operacao a ser realizada
    cin>>op;

    while (op!=0)
    {   
        switch (op)
        { 
            case 1:
            { 
                // le o numero a ser verificado
                cin>>npar;

                // chama a funcao de verificar a paridade do numero
                par_impar(npar);

                // imprime se o numero e ou nao par
                if (par_impar(npar)==1)
                    cout<<"O numero "<<npar<<" eh par"<<endl;
                else
                    cout<<"O numero "<<npar<<" eh impar"<<endl;
                
                // le uma nova operacao a ser realizada
                cin>>op;
            }
            break;

            case 2:
            { 
                // le a data de nascimento desejada
                cin>>anos>>meses>>dias;

                // chama a funcao de calcular a idade da pessoa em dias e imprime o valor calculado
                cout<<idade(anos,meses,dias)<<" dias"<<endl;

                // le uma nov operacao a ser realizada
                cin>>op;  
            }
            break;

            case 3:
            { 
                // le a media do aluno
                cin>>media;

                // chama a funcao de calcular o conceito do aluno e imprime o valor calculado
                cout<<conceito(media)<<endl;

                // le uma nova operacao a ser realizada
                cin>>op;  
            }
            break;

            case 4:
            { 
                // le o numero que se deseja calcular a tabuada
                cin>>ntabuada;

                // chamada da funcao de calcular a tabuada
                tabuada(ntabuada);

                // le uma nova operacao a ser realizada
                cin>>op;  
            } 
            break;   
        }
    } 

    return 0;
}

// funcao que verifica se um numero e par e retorna um booleano
bool par_impar (int x)
{
    if (x%2==0)
        returnn true;
    else
        return false;   
}

// funcao que calcula a idade de uma pessoa em dias
int idade (int a, int m, int d)
{
    // considera ano = 365 dias e o mes = 30 dias
    return (a*365)+(m*30)+d;
}

// retorna o conceito do aluno de acordo com a media de suas notas
char conceito (double m)
{
    char c;

    if (m>=0 && m<5)
        c='D';
    else if (m>=5 && m<7)
        c='C';
    else if (m>=7 && m<9)
        c='B';
    else if (m>=9 && m<=10)
        c='A';

    return c;
}

// funcao que calcula a tabuada do numero fornecido
void tabuada (int n)
{
    int r;

    for (int i=1; i<=n; i++)
    {   
        // calculo da tabuada
        r = i*n;
        // imprime os valores calculados
        cout<<i<<" x "<<n<<" = "<<r<<endl;
    }
}

