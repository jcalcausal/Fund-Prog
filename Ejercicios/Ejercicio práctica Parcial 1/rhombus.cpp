//rhombus.cpp
//Juan Carlos Alcausa Luque
#include <iostream>
using namespace std;

void space1 (int n);
void space2 (int n);
void star1 (int n);
void star2 (int n);
int main ()
{
    int n=6;
    for (int row=1; row<=n; ++row){
        space1 (n-row);
        star1 (2*row-1);
        cout<<endl;
    }
    for (int row=1; row<=n; ++row){
        space2 (row);
        star2 (2*(n-row));
        cout<<endl;
    }
}

void space1 (int n)
{
    for (int i=1;i<=n;++i){
        cout<<" ";
    }
}

void space2 (int n)
{
    for(int i=1;i<=n;++i){
        cout<<" ";
    }
}

void star1 (int n)
{
    for (int i=1;i<=n;++i){
        cout<<"*";
    }
}

void star2 (int n)
{
    for (int i=1;i<n;++i){
        cout<<"*";
    }
}

