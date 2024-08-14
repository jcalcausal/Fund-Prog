//04.diagonal.cpp

#include <iostream>
#include <array>
using namespace std;

const int N=3;
typedef array<array<int,N>,N> TMat;

bool isdiag (TMat a);
int main()
{
    TMat a={{
    {{1,0,0}},
    {{0,1,0}},
    {{0,0,1}}
    }};

    if (isdiag(a)){
        cout<<"The matrix is diagonal."<<endl;
    }else
        cout<<"The matrix is not diagonal."<<endl;

}

bool isdiag(TMat a)
{
    bool diag=true;
    int i=0, j=0;
    while (diag and i<N){
        while (diag and j<N){
            if ((i!=j and a[i][j]!=0) or (i==j and a[i][j]==0))
                diag=false;
            ++j;
        }
        j=0;
        ++i;
    }
    if (diag)
        return true;
    else
        return false;
}
