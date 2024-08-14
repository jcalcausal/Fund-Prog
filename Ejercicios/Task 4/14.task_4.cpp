//14.task_4.cpp
//jcalcausal 2021-10-25
#include <iostream>
 using namespace std;

int main()
{
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    cout<<"Divisors of " << n << " are";
    int i=1;
    while(i<=n) {
        if((n%i==0) and (i!=n))
        cout << " " << i;
        ++i;
    }

return 0;
}
