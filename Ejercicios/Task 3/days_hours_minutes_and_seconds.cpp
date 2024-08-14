//days_hours_minutes_and_seconds.cpp
//jcalcausal 2021-10-15
#include <cmath>
#include <math.h>
#include <iostream>
using namespace std;
int main()
{
    float total;
    int seconds, minutes, hours, days;
    cout<<"Please enter a time in seconds: ";
    cin>>total;
    days=total/86400;
    hours=(fmod(total,86400)/3600);
    minutes=(fmod(total,3600)/60);
    seconds=total-days*86400-hours*3600-minutes*60;
    cout<<days<<" days,"<<hours<<" hours,"<<minutes<<" minutes and "<<seconds<<" seconds. "<<endl;
    return 0;
}
