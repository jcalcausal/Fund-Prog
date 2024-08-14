//harmonic.cpp
//Juan Carlos Alcausa Luque 2021-11-21
#include <iostream>
using namespace std;

double sum (int n);

int main()
{
    int n;
    cout<<"Please enter the number of terms you'd like to sum of the sucession {1/n}: "<<endl;
    cin>>n;
    cout<<"The sum is: "<<sum(n)<<endl;
    return 0;
}

double sum (int n)
{
    double s=0.0;
    for (int i=1; i<=n; i++){
        s=s+(1.0/i);
    }
    return s;
}
