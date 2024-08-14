//producto_escalar_por_vector.cpp
//Juan Carlos Alcausa Luque

#include <iostream>
using namespace std;
#include <array>
const int N=3;
typedef array <int, N> Arr;

Arr product (Arr a, int k);

void print (Arr);

int main()
{
    Arr a={{1,1,1}};
    int k=2;
    print (product(a, k));
    return 0;
}

Arr product (Arr a, int k)
{
    Arr r;
    for (int i=0; i<N; ++i){
        r[i]=k*a[i];
    }
    return r;
}

void print (Arr a)
{
    for (int i=0; i<N; ++i)
        cout<<a[i]<<" ";
}
