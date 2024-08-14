//1.arrays.cpp
//Juan Carlos Alcausa Luque 2021-12-15
#include <iostream>
#include <array>
using namespace std;

const int N=3;
typedef array<int,N> Vector;

int main()
{
    Vector a={{1,2,3}};
    for (int i=0; i<N; ++i){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
