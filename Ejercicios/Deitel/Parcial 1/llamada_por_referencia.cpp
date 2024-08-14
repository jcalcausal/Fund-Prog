//llamada_por_referencia.cpp
// Juan Carlos Alcausa Luque 2021-12-03
#include <iostream>
using namespace std;

void cuadrado (int &n);

int main ()
{
    int n=2;
    cout<<"El cuadrado de "<<n<<" es: "<<endl;
    cuadrado(n);
    cout<<n<<endl;
    return 0;
}

void cuadrado (int &n)
{
    n*=n;
}
