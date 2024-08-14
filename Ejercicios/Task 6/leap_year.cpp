//leap_year.cpp
//Juan Carlos Alcausa Luque 2021-11-21
#include <iostream>
using namespace std;

bool ly (int year);
int main()
{
    int year;
    cout<<"Please enter a year: "<<endl;
    cin>>year;
    if (ly (year)==true)
        cout<<"Year "<<year<<" is a leap year."<<endl;
    else
        cout<<"Year "<<year<<" is not leap year."<<endl;
    return 0;
}

bool ly(int year)
{
    if ((year%4==0)and not(year%100==0) or (year%400==0))
        return true;
    else
        return false;
}
