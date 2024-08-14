//matrices_espejo.cpp
//Juan Carlos Alcausa Luque 2022-01-30

#include <iostream>
#include <array>
using namespace std;

const int ROW=4;
const int COL=5;

typedef array<array<int,COL>,ROW> TMat;
bool ismirror(TMat &a, TMat &b);
void print(const TMat &a);

int main()
{
    TMat a={{
        {{1,2,3,4,5}},
        {{6,7,8,9,10}},
        {{11,12,13,14,15}},
        {{16,17,18,19,20}}
    }};
    TMat b={{
        {{5,4,3,2,1}},
        {{10,9,8,7,6}},
        {{15,14,13,12,11}},
        {{20,19,18,17,16}}
    }};
    if(ismirror(a,b)){
        print (a);
        cout<<" and "<<endl;
        print (b);
        cout<<"are mirror."<<endl;
    }else
        cout<<"They are not mirror."<<endl;
    return 0;
}

bool ismirror(TMat &a, TMat &b)
{
    int i=0;
    int j=COL-1;
    int k=0;

    bool ok=true;
    while(k<ROW){
        while (ok and i<COL){
            if(a[k][i]!=b[k][j])
                ok=false;
            ++i;
            --j;
        }
        i=0;
        j=COL-1;
        ++k;
    }
    return ok;
}

void print(const TMat &a)
{
    for (int i=0; i<ROW; ++i){
        for (int j=0; j<COL; ++j){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

