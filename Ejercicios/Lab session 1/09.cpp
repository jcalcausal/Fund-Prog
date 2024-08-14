//09.cpp
//jcalcausal 2021-10-18
#include <iostream>
using namespace std;
int main ()
{
    float c1,c2,f,F;
    cout<<"Please enter the marks in controls 1, 2 and in the final exam: "<<endl;
    cin>>c1>>c2>>f;
    f=f*((10-(c1*0.1+c2*0.2))/10);
    F=f+c1*0.1+c2*0.2;
    cout<<"The final mark is: "<<F<<endl;
    return 0;
}
