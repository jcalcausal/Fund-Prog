//ln2_series.cpp
//Juan Carlos Alcausa Luque 2021-11-21
#include <iostream>
#include <cmath>
using namespace std;

double alternate (int n);
double power (double base, double exp);
int main()
{
    int n;
    cout<<"Enter the number of terms of the series (-1)^n+1*1/n :"<<endl;
    cin>>n;
    cout<<"The sum of "<<n<<" terms is: "<<alternate(n)<<endl;
    return 0;
}

double alternate (int n)
{
    double sum=0;
    for (int i=1;i<=n;i++){
        sum=sum+(pow((-1),i+1)*1.0/i);
    }
    return sum;
}
