//is_prime.cpp
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    //use for when you know in advance the range of values (the number of interactions there are going to happen), elsewhere use while;
    int d=2;
    while (n%d!=0){
        ++d;
    }
    if(n==d)
        cout<<"The number is prime."<<endl;
    else
        cout<<"The number is not prime."<<endl;
    return 0;
}

