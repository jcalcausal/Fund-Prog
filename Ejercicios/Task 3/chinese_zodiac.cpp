//chinese_zodiac.cpp
//jcalcausal 2021-10-15
#include <iostream>
using namespace std;

int main ()
{
    int year;
    unsigned int k;
    string sign;
    cout<<"Please enter your birth year: "<<endl;
    cin>>year;
    if (year%12==0)
        sign="Monkey";
    else if (year%12==1)
        sign="Rooster";
    else if (year%12==2)
        sign="Dog";
    else if (year%12==3)
        sign="Pig";
    else if (year%12==4)
        sign="Rat";
    else if (year%12==5)
        sign="Ox";
    else if (year%12==6)
        sign="Tiger";
    else if (year%12==7)
        sign="Rabbit";
    else if (year%12==8)
        sign="Dragon";
    else if (year%12==9)
        sign="Snake";
    else if (year%12==10)
        sign="Horse";
    else if (year%12==11)
        sign="Goat";
    cout<<"Your sign is: "<<sign<<endl;
    return 0;
}
