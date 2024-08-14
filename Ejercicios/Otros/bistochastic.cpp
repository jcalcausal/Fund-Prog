//bistochastic.cpp
//Juan Carlos Alcausa Luque 22/01/2022
#include <iostream>
#include <array>
using namespace std;

const int N=3;
typedef array<array<int,N>,N> TSqMat;

bool cond1(TSqMat a);//Checks is there is a negative number.
bool cond2(TSqMat a);//Sums the rows and checks
bool cond3(TSqMat a);//Sums the columns and checks
void printMat(TSqMat a);

int main()
{
    TSqMat a={{
        {{20,30,50}},
        {{50,0,50}},
        {{30,70,0}}
        }};

    if (cond1(a)==false){
        cout<<"The matriz is not bistochastic."<<endl;
        printMat(a);
    }else if (cond2(a)==false){
        cout<<"The matriz is not bistochastic."<<endl;
        printMat(a);
    }else if (cond3(a)==false){
        cout<<"The matriz is not bistochastic."<<endl;
        printMat(a);
    }else{
        cout<<"The matriz is bistochastic."<<endl;
        printMat(a);
    }
    return 0;
}

bool cond1(TSqMat a)
{
    int i=0;
    int j=0;
    bool positive=true;
    while (positive and i<N){
        while(positive and j<N){
            if((a[i][j])<0){
                positive=false;
            };
            ++j;
        }
    j=0;
    ++i;
    }
    return positive;
}

bool cond2(TSqMat a)
{
    int i=0;
    int j=0;
    int sum=0;
    bool bistochastic=true;
    while (bistochastic and i<N){
        j=0;
        while(j<N){
            sum=sum+a[i][j];
            ++j;
        }
        if(sum!=100){
            bistochastic=false;
        }
        sum=0;
        ++i;
    }
    return bistochastic;
}

bool cond3(TSqMat a)
{
    int i=0;
    int j=0;
    int sum=0;
    bool bistochastic=true;
    while (bistochastic and j<N){
        i=0;
        while(i<N){
            sum=sum+a[i][j];
            ++i;
        }
        if(sum!=100){
            bistochastic=false;
        }
        sum=0;
        ++j;
    }
    return bistochastic;
}

void printMat(TSqMat a)
{
    for(int i=0; i<N; ++i){
        for (int j=0; j<N; ++j){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

