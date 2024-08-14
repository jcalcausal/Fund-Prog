//1.pascal.cpp
//Juan Carlos Alcausa Luque 2022-02-11
#include <iostream>
#include <array>
using namespace std;

const int N=7;
typedef array<array<int,N>,N> TSqMat;
void initialise(TSqMat &a);
void firstline(TSqMat &a);
void complete(TSqMat &a);
void print(TSqMat &a);

int main()
{
    TSqMat a;
    initialise(a);
    firstline(a);
    complete (a);
    print(a);
    return 0;
}

void initialise(TSqMat &a)
{
    for(int i=0; i<N; ++i){
        for (int j=0; j<N; ++j){
            a[i][j]=0;
        }
    }
}

void firstline(TSqMat &a)
{
    for(int i=0; i<N; ++i){
        a[i][0]=1;
    }
     for(int j=0; j<N; ++j){
        a[0][j]=1;
    }
}

void complete(TSqMat &a)
{
    for (int i=1; i<N; ++i){
        for(int j=1; j<N-i; ++j){
            a[i][j]=(a[i-1][j])+(a[i][j-1]);
        }
    }
}

void print(TSqMat &a)
{
    for (int i=0; i<N; ++i){
        for(int j=0; j<N-i; ++j){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
