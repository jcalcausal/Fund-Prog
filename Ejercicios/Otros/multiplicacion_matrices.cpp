//multiplicacion_matrices.cpp
//Juan Carlos Alcausa Luque
#include <iostream>
#include <array>
using namespace std;

const int ROW1=2, ROW2=3, ROWF=2;
const int COL1=3, COL2=2, COLF=2;

typedef array<array<int,COL1>,ROW1> TArray1;
typedef array<array<int,COL2>,ROW2> TArray2;
typedef array<array<int,COLF>,ROWF> TArrayF;

void mult (TArray1 a, TArray2 b, TArrayF &f);
void printMat(const TArrayF f);
int main ()
{
    TArray1 a={{
        {{1,1,1}},
        {{1,1,1}},
    }};
    TArray2 b={{
        {{1,1}},
        {{1,1}},
        {{1,1}}
    }};
    TArrayF f={{
        {{0,0}},
        {{0,0}}
    }};
    mult(a,b,f);
    printMat(f);
    return 0;
}

void mult (TArray1 a, TArray2 b, TArrayF &f)
{
    for (int i=0; i<ROWF; ++i){
        for (int j=0; j<COLF; ++j){
            for (int k=0; k<ROW2; ++k){
                f[i][j]=f[i][j]+a[i][k]*b[k][j];
            }

        }
    }
}
void printMat(const TArrayF f)
{
    for (int i=0; i<ROWF; ++i){
        for (int j=0; j<COLF; ++j){
            cout<<f[i][j]<<" ";
        }
        cout<<endl;
    }
}
