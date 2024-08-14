//largest_of_three_integers.cpp
//jcalcausal 2021-10-14
#include <iostream>
using namespace std;

int main ()
{
    int a,b,c;
    cout<<"Enter three numbers please: "<<endl;
    cin>>a>>b>>c;
    if (a>b and a>c)
        cout<<"The largest number is: "<<a;
    else if (b>a and b>c)
        cout<<"The largest number is: "<<b;
    else if (c>a and c>b)
        cout<<"The largest number is: "<<c;
    return 0;
}
