//is_prime.cpp
//Juan Carlos Alcausa Luque
#include <iostream>
using namespace std;

bool isprime (int n);
int main ()
{
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    if (isprime(n))
        cout<<"The number is prime. "<<endl;
    else
        cout<<"The number is not prime."<<endl;
}

bool isprime (int n)
{
    int i=2;
    while (n%i!=0){
        ++i;
    }
    if (i==n)
        return true;
    if (i!=n)
        return false;

}
