//position_twelve.cpp

#include <iostream>
using namespace std;

int main()
{
    int x;
    int cnt=0;
    int posLast=0;
    int posFirst=0;
    bool alreadyEntered= false;
    while(cin>>x and x!=0){
        ++cnt;
        if(x==12){
        posLast=cnt;
        if(not alreadyEntered){
            posFirst=cnt;
            alreadyEntered=true;
        }
        }
    }
    if(pos==0){
        cout<<"12 never entered."<<endl;
    }else{
        cout<<"Last time 12 was seen: "<<pos<<endl;
    }
    return 0;
}
