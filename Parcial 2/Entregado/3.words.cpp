//3.words.cpp
//PC 407
//Alcausa Luque, Juan Carlos 2022-01-24

#include <iostream>
#include <array>
using namespace std;

const int N=20;
struct TPair{
    string word;
    int freq;
};
typedef array<TPair,N> TBag;

void initi(TBag &b);
void print(const TBag &b);
bool same (string a, string b);
bool isIn(TBag &b, int n);
void add(TBag &b, string s);

int main()
{
    TBag b;
    initi(b);
    print(b);
    string s;
    while(cin>>s and s!="end")
        add(b,s);
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
        cout<<"("<<b[i].word<<" , "<<b[i].freq<<") ";
    cout<<endl;
}

bool same(string a, string b)
{
    bool same;
    int i=0;
    int maxi;
    if(a.size()==b.size())
        maxi=a.size();
    else if (a.size()<b.size())
        maxi=b.size();
    else
        maxi=a.size();
    while (i<maxi and same){
        if(a[i]!=b[i])
            same=false;
    }
    return same;
}

bool isIn(TBag &b,int n)
{
    int i=0;
    bool isIn=false;
    while(i<N and not isIn){
        if(same())
            isIn=true;
        ++i;
    }
    return isIn;
}

void add(TBag &b, word s)
{
    if(isIn(b,n)){
        int i=0;
        while(i<N and not same(b[i].word,n)){
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

