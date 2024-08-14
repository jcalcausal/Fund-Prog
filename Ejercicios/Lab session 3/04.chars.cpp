//04.chars.cpp
//jcalcausal 2021-10-08
#include <iostream>
using namespace std;

int main ()
{
    int cnt=0;
    char c=0;
    cout<<"Please enter a char: "<<endl;
    while (c!='.'){
        cin>>c;
        cout<<"ASCII value of "<<c<<" is: "<<int(c)<<endl;
        cnt++;
    }
    cout<<"Number of characters entered: "<<cnt-1<<endl;
    return 0;
}
