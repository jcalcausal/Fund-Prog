//11.task_4.cpp
//jcalcausal 2021-10-25
#include <iostream>
using namespace std;

int main()
{
cout<<"Enter a natural number: ";
    int number;
    cin>>number;
    int i=1;
    while (i < number and i*i != number){
        ++i;
    }if (i == number){
        cout<<number<<" is not a perfect square"<<endl;
    }else{
        cout<<number<<" is a perfect square."<<endl;
    }
    return 0;
}
