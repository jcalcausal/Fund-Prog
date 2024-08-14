//12.task_4.cpp
//jcalcausal 2021-10-25
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Please enter a number: "<<endl;
    cin>>n;
    int i=2;
    while (n%i!=0)
        i++;
    if(n==i)
        cout<<"The number is prime."<<endl;
    else
        cout<<"The number is not prime."<<endl;
    return 0;
}
