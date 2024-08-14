//cuadratic_ecuations.cpp
//jcalcausal 2021-10-14
#include <math.h>;
#include <iostream>
using namespace std;
int main()
{
    float a,b,c,d,e;
    cout<<"Please enter the coefficients: "<<endl;
    cin>>a>>b>>c;
    d = (-b+sqrt(b*b-4*a*c))/(2*a);
    e = (-b-sqrt(b*b-4*a*c))/(2*a);
    if (b*b-4*a*c>0)
    {
        cout<<"First solution: "<<d<<endl;
        cout<<"Second solution: "<<e<<endl;
    }else if (a==0)
    {
        cout<<"No solutions (a equals 0). "<<endl;
    }else
        cout<<"No real solutions."<<endl;
    return 0;
}
