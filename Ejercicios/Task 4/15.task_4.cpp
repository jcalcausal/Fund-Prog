//15.task_4.cpp
//jcalcausal 2021-10-25
#include <iostream>
using namespace std;

int main()
{
    int n, s=0, d=1;
    cout<<"Enter an integer number: ";
    cin>>n;
    while (d < n){
        if (n % d == 0)
            s += d;
        ++d;
    }
    if (s==n) {
        cout<<n<<" is perfect."<<endl;
    }else if (s!=n) {
        cout<<n<<" is not perfect."<<endl;
    }
    return 0;
}
