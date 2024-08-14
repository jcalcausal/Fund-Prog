//western_zodiac.cpp
//jcalcausal 2021-10-15
#include <iostream>
using namespace std;

int main ()
{
    int birth;
    int birth_month;
    string sign;
    cout<<"Please enter the day of your birthday: ";
    cin>>birth;
    cout<<"Please enter your birthday month: ";
    cin>>birth_month;
    if ((birth>=21 and birth_month==3)or(birth<=19 and birth_month==4))
        sign="Aries";
    else if((birth>=20 and birth_month==4)or(birth<=20 and birth_month==5))
        sign="Taurus";
    else if((birth>=21 and birth_month==5)or(birth<=21 and birth_month==6))
        sign="Gemini";
    else if((birth>=22 and birth_month==6)or(birth<=22 and birth_month==7))
        sign="Cancer";
    else if((birth>=23 and birth_month==7)or(birth<=22 and birth_month==8))
        sign="Leo";
    else if((birth>=23 and birth_month==8)or(birth<=22 and birth_month==9))
        sign="Virgo";
    else if((birth>=23 and birth_month==9)or(birth<=22 and birth_month==10))
        sign="Libra";
    else if((birth>=23 and birth_month==10)or(birth<=22 and birth_month==11))
        sign="Scorpio";
    else if((birth>=23 and birth_month==11)or(birth<=21 and birth_month==12))
        sign="Sagitarius";
    else if((birth>=22 and birth_month==12)or(birth<=19 and birth_month==1))
        sign="Capricorn";
    else if((birth>=20 and birth_month==1)or(birth<=18 and birth_month==2))
        sign="Aquarius";
    else if ((birth>=19 and birth_month==2)or(birth<=20 and birth_month==3))
        sign="Pisces";

    cout<<"Your sign is: "<<sign<<endl;
    return 0;
}
