//perfect_numbers.cpp
#include <iostream>
using namespace std;

bool isperfect(int n);
int main()
{
    int n;
    int gts=0;
    cout<<"Enter numbers: "<<endl;
    while(cin>>n and n!=0){
        if (isperfect(n) and n>gts)
            gts=n;
    }
    if(gts==0)
        cout<<"No perfect numbers entered."<<endl;
    else
        cout<<"The greatest perfect number entered is: "<<gts<<endl;
    return 0;
}

bool isperfect(int n)
{
    int sum=0;
    for(int i=1; i<n; ++i){
        if(n%i==0)
            sum+=i;
    }
    if(sum==n)
        return true;
    else
        return false;
}
