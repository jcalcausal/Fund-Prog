//position.cpp
//Juan Carlos Alcausa Luque
#include <iostream>
using namespace std;

int number(int n, int p)
{
    int nn=n;
    for (int i=1; i<p; ++i){
        nn=n/10;
    }
    return nn%10;
}
int main ()
{
    int n,p;
    cout<<"Please enter a number and a position: "<<endl;
    cin>>n>>p;
    cout<<number(n,p)<<endl;
    return 0;
}
