//array_multidimensional.cpp
//Juan Carlos Alcausa Luque

#include <iostream>
#include <array>
using namespace std;
const int FIL=2;
const int COL=2;

typedef array<array<int,COL>, FIL> TMax;
typedef array<int, FIL> TFilSum;
typedef array<int, COL> TColSum;
void read(TMax &a);
void sum(TMax &a, TColSum &ColSum, TFilSum &FilSum);
//void print (TMax a, TColSum ColSum, TFilSum FilSum);
void print (TColSum a);

int main ()
{
    TMax a;
    TColSum ColSum;
    TFilSum FilSum;
    read(a);
    sum (a,ColSum, FilSum);
    print(ColSum);
    //print (a,ColSum,FilSum);
    return 0;
}

void read(TMax &a)
{
    for (int i=0; i<FIL; ++i){
        for (int j=0; j<COL; ++j){
            cin>>a[i][j];
        }
    }
}

void sum(TMax &a, TColSum &ColSum, TFilSum &FilSum)
{
    for (int i=0; i<FIL; ++i){
        for  (int j=0; j<COL; ++j){
        ColSum[i]=(a[i][j-1])+(a[i][j-1]);
        }
    }
}

void print (TColSum a)
{
    for (int i=0; i<COL; ++i)
        cout<<a[i]<<" ";
}
