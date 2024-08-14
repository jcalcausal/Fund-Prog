//largest_of_two_integers.cpp
//jcalcausal 2021-10-14
#include <iostream>
using namespace std;

int main ()
{
    int a,b;
    cout<<"Enter two numbers please: "<<endl;
    cin>>a>>b;
    if (a>b)
        cout<<"The largest number is: "<<a<<endl;
    else if (b>a)
        cout<<"The largest number is: "<<b<<endl;
    return 0;
}
