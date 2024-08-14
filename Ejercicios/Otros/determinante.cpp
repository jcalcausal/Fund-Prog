//determinante.cpp
//Juan Carlos Alcausa Luque 19/01/2022

#include <iostream>
#include <array>
using namespace std;

const int N=3;
typedef array<array<int,N>,N> TMat;

int determinante(const TMat a);
int main()
{
    TMat a={{
        {{1,1,0}},
        {{2,1,1}},
        {{1,0,3}}
    }};
    cout<<"El determinante de a es: "<<determinante(a)<<endl;
}

int determinante(const TMat a)
{
    int d=(((a[0][0]*a[1][1]*a[2][2])+(a[1][0]*a[2][1]*a[0][2])+(a[0][1]*a[1][2]*a[2][0]))-((a[0][2]*a[1][1]*a[2][0])+(a[1][0]*a[0][1]*a[2][2])+(a[0][0]*a[1][2]*a[2][1])));
    return d;
}
