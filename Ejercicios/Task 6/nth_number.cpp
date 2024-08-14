//nth_number.cpp
//Juan Carlos Alcausa Luque
#include <iostream>
using namespace std;

int nprime (int n);
int main()
{
    int n;
    cout<<"Enter the nth prime you'd like to see: "<<endl;
    cin>>n;
    cout<<"The "<<n<<" prime number is: "<<nprime(n)<<endl;
}

int nprime (int n)
{
    int nprime;
    int i=1;
    do{
        for (nprime=n%i=0;
        i++;
    }while(n>=i);
    return nprime;
}
