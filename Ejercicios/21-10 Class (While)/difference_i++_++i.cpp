//difference_i++_++i.cpp
#include <iostream>
using namespace std;
 int main ()
{
    int i=3;
    cout<<++i*2<<endl;//before using i, it increments it.
    i=3;
    cout<<i++*2<<endl;//Despu�s de usar el valor anterior de i(3) y de imprimirlo en la pantalla, lo modifica. La operaci�n la hec con i=3, pero despu�s de hacerla se guarda como 4.
    cout<<i<<endl;
    return 0;
}
