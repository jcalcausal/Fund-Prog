#include <iostream>
#include <array>
using namespace std;
const int N=4;
typedef array<int,N> Trows;
typedef array<Trows, M> Tmatrix;
Tmatrix mult (Tmatrix a, Tmatrix b);
void printMatrix (Tmatrix a);

int main ()
{
    Tmatrix a={{
        {{1,2,3}},
        {{3,7,8}},
        {{2,1,1}}
    }};
    Tmatrix b={{
        {{0,2,1}},
        {{3,0,1}},
        {{0,1,1}}
    }};
    print (a);
    return 0;
}

Tmatrix mult(Tmatrix a, tmatrix b)
{
    Tmatrix r;
    for (int i=0; i<N; ++i){
        for (int j=0; j<N; ++j){
            r[i][j]=0;
            for (int k=0; j<N; ++k){
                    r[i][j]+=a[i][k]*b[k][j];

        }
    }
    return r;
}

void printMatrix (Tmatrix a)
{
    for (int i=0; i<N; ++i){
        for (int j=0; j<N; ++j)
            cout<<a[i][j]<<" ";
    cout<<endl;
    }


}
