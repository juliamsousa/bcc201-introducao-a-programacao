#include <iostream>
using namespace std;

/**
 * Funcao que imprime as opcoes do menu de um supermercado 
 * Operacoes:
 * 
 *  1-Computar a venda de um produto
 *  2-Consultar o preço de um produto
 *  3-Pesar carnes
 *  4-Pesar verduras e  legumes
 *  5-Consultar os lucros do caixa
 *  6-Finalizar compra
 *
 */ 

int main ()
{
    int op;
        
    do 
    {
        // le uma opcao digitada pelo usuario
        cout<<"Supermercado CompreAqui"<<endl<<
        "1-Computar a venda de um produto"<<endl<<
        "2-Consultar o preço de um produto"<<endl<<
        "3-Pesar carnes"<<endl<<
        "4-Pesar verduras e  legumes"<<endl<<
        "5-Consultar os lucros do caixa"<<endl<<
        "6-Finalizar compra\n"<<endl;
        cin>>op;

        // imprime as opcoes digitadas pelo usuario
        switch (op)
        {
            case 1:
                cout<<"Computar a venda de um produto\n"<<endl;
            break;

            case 2:
                cout<<"Consultar o preço de um produto\n"<<endl;
            break;

            case 3:
                cout<<"Pesar carnes\n"<<endl;
            break;

            case 4:
                cout<<"Pesar verduras e legumes\n"<<endl;
            break;

            case 5:
                cout<<"Consultar os lucros do caixa\n"<<endl;
            break;

            case 6:
                cout<<"Obrigado por comprar no CompreAqui!\n"<<endl;
            break;

            default:
                cout<<"Código inválido\n"<<endl;
            break;
        }
    }
    while (op!=6);

    return 0;            
}
