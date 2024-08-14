//suma_elementos_array.cpp
//Juan Carlos Alcausa Luque
#include <iostream>
using namespace std;
#include <array>

const int N=3;
typedef array<int,N> Arr;
int sum (Arr);

int main()
{
    Arr a;
    for (int i=0; i<N; ++i){
        cin>>a[i];
    }
    cout<<sum(a);
    return 0;
}

int sum (Arr a)
{
    int s=0;
    for (int i=0; i<N; ++i){
        s+=a[i];
    }
    return s;
}
