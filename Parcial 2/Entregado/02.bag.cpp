//02.bag.cpp
//PC 407
//Alcausa Luque, Juan Carlos 2022-01-24

#include <iostream>
#include <array>
using namespace std;
const int N=3;
struct TPair{
    int number;
    int freq;
};
typedef array<TPair,N> TBag;

void initi(TBag &b);
void print(const TBag &b);
bool isIn(TBag &b, int n);
void add(TBag &b, int n);

int main()
{
    TBag b;
    initi(b);
    print(b);
    add(b,33);
    add(b,33);
    add(b,0);
    add(b,10);
    add(b,10);
    print(b);
    return 0;
}

void initi(TBag &b)
{
    for (int i=0; i<N; ++i){
        b[i].freq=0;
    }
}

void print(const TBag &b)
{
    for (int i=0; i<N; ++i)
        cout<<"("<<b[i].number<<" , "<<b[i].freq<<") ";
    cout<<endl;
}

bool isIn(TBag &b,int n)
{
    int i=0;
    bool isIn=false;
    while(i<N and not isIn){
        if(b[i].number==n)
            isIn=true;
        ++i;
    }
    return isIn;
}

void add(TBag &b, int n)
{
    if(isIn(b,n)){
        int i=0;
        while(i<N and b[i].number!=n){
            ++i;
        }
        b[i].freq=b[i].freq+1;
    }else{
        int k=0;
        while(k<N and b[k].freq!=0){
            ++k;
        }
        b[k].number=n;
        b[k].freq=b[k].freq+1;
    }
}

