//02.task_4.cpp
//jcalcausal 2021-10-22
#include <iostream>
using namespace std;

int main()
{
    int number;
    double factorial=1;
    cout<<"Please enter a number: "<<endl;
    cin>>number;
    if (number==0){
        factorial=1;
    }else{
        int i=1;
        while (i<=number){
            factorial= factorial*i;
            i++;
        }
    }
    cout<<"The factorial of "<<number<<" is: "<<factorial<<endl;
    return 0;
}
