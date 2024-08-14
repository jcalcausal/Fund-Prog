//game_of_life.cpp
//Juan Carlos Alcausa Luque 15/01/2022

#include <iostream>
#include <array>
#include <ctime>
#include <cstdlib>
#include <unistd.h>

using namespace std;

const int COL=100;
const int LIN=40;

typedef array<array<int,COL>,LIN> TMat;

void initialise(TMat &a);
void printMat (const TMat a);
void conditions (TMat &a);
void execute (TMat &a);


int main ()
{
    TMat a,b;
    initialise (a);
    execute (a);
    return 0;
}

void initialise (TMat &a)
{
    srand(time(0));
    for (int i=0; i<LIN; ++i){
        for (int j=0; j<COL; ++j){
            a[i][j]= rand()%2;
        }
    }
}

void printMat (const TMat a)
{
    for (int i=0; i<LIN; ++i){
        for (int j=0; j<COL; ++j){
            if(a[i][j]==0){
                cout<<" ";
            }else{
                cout<<"+";
            }
        }
        cout<<endl;
    }
}

void conditions (TMat &a)
{
    int s=0;
    TMat b=a;
    for (int i=0; i<LIN; ++i){
        for (int j=0; j<COL; ++j){
            s=a[i-1][j-1]+a[i-1][j]+a[i-1][j+1]+a[i][j-1]+a[i][j+1]+a[i+1][j-1]+a[i+1][j]+a[i+1][j+1];
            if(a[i][j]==1 and s<2){
                b[i][j]=0;
            }else if(a[i][j]==1 and (s==2 or s==3)){
                b[i][j]=1;
            }else if(a[i][j]==0 and s==3){
                b[i][j]=1;
            }else if(a[i][j]==1 and s>3){
                b[i][j]=0;
            }
            s=0;
        }
    }
    a=b;
}

void execute (TMat &a)
{
    printMat(a);
    for (;;){
        usleep(100000);
        system("cls");
        conditions(a);
        printMat(a);
    }
}
