//p-sim.cpp
//Juan Carlos Alcausa Luque
#include <iostream>
using namespace std;

int digit(int n, int p, int base)
{
    int m = n;
    for (int i = 0; i < p; ++i){
        m= m/base;
    }return m % base;
}

int main()
{
    int n,p,base;
    cout<<"Please enter the number, the digit and the base: "<<endl;
    cin>>n>>p>>base;
    cout<<"The digit is: "<<digit(n,p,base)<<endl;
    return 0;
}
