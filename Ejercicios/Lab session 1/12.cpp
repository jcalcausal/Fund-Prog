//12.cpp
//jcalcausal 2021-10-18
#include <iostream>
using namespace std;
int main ()
{
    double p,v,t,m;
    cout<<"Please enter the pressure, volume and temperature of the air: "<<endl;
    cin>>p>>v>>t;
    m=(p*v)/(0.37*(t+460));
    cout<<"The mass of air is: "<<m<<endl;
    return 0;
}
