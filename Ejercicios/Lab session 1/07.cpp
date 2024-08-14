//07.cpp
//jcalcausal 2021-10-18
#include <iostream>
using namespace std;
int main ()
{
    long long total,MB,KB,B;
    cout<<"Please enter a natural number: "<<endl;
    cin>>total;
    MB=total/1048576;
    KB=(total-MB*1048576)/1024;
    B=total-MB*1048576-KB*1024;
    cout<<MB<<"MB, "<<KB<<"KB, and "<<B<<"B."<<endl;
    return 0;
}
