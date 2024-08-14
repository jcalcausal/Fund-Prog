//07.task_4.cpp
//jcalcausal 2021-10-24
#include <iostream>
using namespace std;
int main ()
{

char c;
int vowl=0, upper=0, non=0;
cout<<"Please enter chars: "<<endl;
cin>>c;
while (c!= '.' ) {

    if((c=='a') or (c=='e') or (c=='i') or (c=='o') or (c=='u')or (c=='A') or (c=='E') or (c=='I') or (c=='O') or (c=='U')){
        ++vowl;
    }else if(c>='A' and c<='Z'){
        ++upper;
    }else if(not(c>='A' and c<='Z') and not(c>='a' and c<='z')and not(c==' ')){
        ++non;
    }
    c = cin.get();
}
cout<<"Number of vowls:  "<<vowl<<endl;
cout<<"Number of uppercase letters: "<<upper<<endl;
cout<<"Number of non letters: "<<non<<endl;
return 0;
}
