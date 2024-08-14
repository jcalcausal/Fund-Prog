//fechas.cpp
//Juan Carlos Alcausa Luque 2021-12-22

#include <iostream>
using namespace std;

struct Tfecha{
    int dia;
    int mes;
    int anyo;
};
void leer(Tfecha& cumple);
void imprimir(Tfecha& cumple);
int main()
{
    cout<<"Introduzca la fecha de su cumple."<<endl;
    Tfecha cumple;
    leer(cumple);
    imprimir(cumple);
}

void leer(Tfecha& cumple)
{
    cin>>cumple.dia>>cumple.mes>>cumple.anyo;
}

void imprimir(Tfecha& cumple)
{
    cout<<cumple.dia<<"/"<<cumple.mes<<"/"<<cumple.anyo<<". "<<endl;
}
