#include <iostream>
using namespace std;
int main ()
{
    double w,h,BMI;
    cout<<"Please enter your weight and height: "<<endl;
    cin>>w>>h;
    BMI=w/(h*h);
    cout<<"Your BMI is: "<<BMI<<endl;
    return 0;
}
