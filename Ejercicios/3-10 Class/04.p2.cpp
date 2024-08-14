menu// 04.p2.cpp
// jcalcausal 2021-10-25
//

#include <iostream>
using namespace std;

int main()
{
    char a;
    cout<<"Enter a char: "<<endl;
    cin>>a;
    if ((a>='a' and a<='z') or (a>='A' and a<='Z'))
    	cout<<"It is a letter."<<endl;
    else if (a=='.')
    	cout<<"It is a dot"<<endl;
    else
    	cout<<"Error"<<endl;
    return 0;
}
