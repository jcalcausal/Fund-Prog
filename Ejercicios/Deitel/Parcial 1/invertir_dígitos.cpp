//invertir_dígitos.cpp
//Juan Carlos Alcausa Luque. 2021-12-03
#include <iostream>
using namespace std;

void invertir(int &, int &);

int main ()
{
    int n=5; int m=6;
    cout<<n<<" , "<<m<<endl;
    invertir (n,m);
    cout<<n<<" , "<<m<<endl;
    return 0;
}

void invertir (int &n, int &m)
{
    int p=m;
    m=n;
    n=p;
}
