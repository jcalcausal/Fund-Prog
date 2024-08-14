//cuadratic_equation.cpp
//Juan Carlos Alcausa Luque
#include <iostream>
#include <cmath>
using namespace std;
void quadEq (float a, float b, float c, float &x1 , float &x2);
int main ()
{
    float a,b,c;
    cout<<"Please enter the coefficients (a, b and c) of the quadratic equation you'd like to solve: "<<endl;
    cin>>a>>b>>c;
    float x1,x2;
    cout<<"The solutions are: "<<endl;
    quadEq(a,b,c,x1,x2);
    return 0;
}

void quadEq ( float a, float b, float c, float &x1 , float &x2)
{
    cout<<"x1= "<< (-b+sqrt(b*b-4*a*c))/2*a<<endl;
    cout<<"x2= "<< (-b-sqrt(b*b-4*a*c))/2*a<<endl;
}
