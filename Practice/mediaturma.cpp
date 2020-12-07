#include <iostream>
using namespace std;
int main ()
{

    int t, i, ttalunos=40, turma=5;
    double nota, somanota=0, media=0;

    for (t=1;t<=turma;t++)
    {
        for (i=1;i<=ttalunos;i++)
        {
            cout<<"Digite a nota do aluno: "<<endl;
            cin>>nota;
            somanota+=nota;
        }
    
    media=somanota/ttalunos;
    cout<<"A media da turma "<<t<<" :"<<media<<endl;

    somanota=0;
    media=0;
    }
    return 0;
}
