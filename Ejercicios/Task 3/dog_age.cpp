//dog_age.cpp
//jcalcausal 2021-10-15
#include <iostream>
using namespace std;

int main()
{
    int human_years;
    int dog_years;
    cout<<"Please enter a dog's age in human years: "<<endl;
    cin>>human_years;
    if (human_years<=2)
        dog_years=10.5*human_years;
    else
        dog_years=2*10.5+((human_years-2)*4);
    cout<<"The dog's age in dog's years is: "<<dog_years<<endl;
    return 0;
}
