//estrellitas.cpp
//Juan Carlos Alcausa Luque 2021-12-02
#include <iostream>
using namespace std;

int main ()
{
    int N=3;
    for (int i=1; i<=N; ++i){
        for (int s=1; s<=N-i; ++s){
            cout<<" ";
        }
        for (int s=1; s<=i; ++s){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
