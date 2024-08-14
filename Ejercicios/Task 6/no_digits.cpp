//no_digits.cpp
//Juan Carlos Alcausa Luque
#include <iostream>
using namespace std;

int numdigits (int n, int base)
{
    int number;
    int i=0;
    do {
        n=n/base;
        i++;
    }while(n>0);
    number=i;
    return number;

}
int main()
{
    int n,base;
    cout<<"Enter a number and the base: "<<endl;
    cin>>n>>base;
    cout<<"The number of digits of "<<n<<" in base "<<base<<" is : "<<numdigits(n,base)<<endl;
    return 0;
}
