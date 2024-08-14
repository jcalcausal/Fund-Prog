//random_matrix.cpp
#include <iostream>
#include <array>
#include <ctime>
#include <cstdlib>
using namespace std;
const int FIL=2;
const int COL=2;

typedef array<array<int,COL>,FIL> TMat;
void initialise(TMat &a);
void print (const TMat a);

int main ()
{
    TMat a;
    initialise(a);
    print(a);
    return 0;
}

void initialise(TMat &a)
{
    srand(time(0));
    for (int i=0; i<FIL; ++i){
        for (int j=0; j<COL; ++j){
            a[i][j]= rand()%2;
        }
    }
}
void print (const TMat a)
{
    for (int i=0; i<FIL; ++i){
        for (int j=0; j<COL; ++j){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}


