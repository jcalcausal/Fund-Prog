//licencia_estatal.cpp
//Juan Carlos Alcausa Luque 02/12/2021
#include <iostream>
using namespace std;

int main ()
{
    int cnt=1, r, p=0, f=0;
    while (cnt<=10){
        cout<<"Enter result: ";
        cin>>r;
        if(r==1) ++p;
        else ++f;
        ++ cnt;
    }
    cout<<"Número de aprobados: "<<p<<endl;
    cout<<"Número de suspensos: "<<f<<endl;
    if (p>8) cout<<"Aumente la colegiatura."<<endl;
    return 0;
}
