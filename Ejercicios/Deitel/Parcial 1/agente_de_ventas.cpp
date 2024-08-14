//agente_de_ventas.cpp
//Juan Carlos Alcausa Luque 2021-12-02
#include <iostream>
using namespace std;

int main ()
{
    float fijo=200.00;
    float ventas;
    do{
        cout<<"Teclea ventas: ";
        cin>>ventas;
        cout<<"El salario es: $"<<fijo+0.09*ventas<<endl;
    }while (ventas!=-1.00);
    return 0;
}
