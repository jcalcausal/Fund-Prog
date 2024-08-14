//adivinar_número.cpp
//Juan Carlos Alcausa Luque
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N=34;
    int t=0;
    cout<<"Tengo un numero del 1 al 100,Puede adivinarlo? "<<endl;
    while (t!=N)
    {
        cin>>t;
        if (t<N) cout<<"Muy bajo."<<endl;
        else if (t>N) cout<<"Muy alto."<<endl;
    }
    if (t==N) cout<<"Lo has adivinado!"<<endl;
    return 0;
}
