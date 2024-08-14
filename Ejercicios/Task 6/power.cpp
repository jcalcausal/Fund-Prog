//power.cpp
//Juan Carlos Alcausa Luque 21-10-2021
#include <iostream>
using namespace std;

float power (float base, int exp);
float pospow (float base, int exp);
int main()
{
    float base;
    int exp;
    cout<<"Please enter  the base and the exponent: "<<endl;
    cin>>base>>exp;
    cout<<base<<" to the power of "<<exp<<" is: "<<power (base,exp)<<endl;
    return 0;
}
float power (float base, int exp)
{
    if (exp>0){
        return pospow(base, exp);
    }
    if (exp<0){
        return 1/pospow(base,-exp);
    }
    else
        return 1;
}

float pospow (float base, int exp)
{
    float r=1;
    if(base!=0){
        for (int i=1; i<=exp; i++){
            r=r*base;
        }
        return r;
    }
    else
        return 0;
}
