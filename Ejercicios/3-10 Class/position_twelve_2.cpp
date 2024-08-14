#include <iostream>
using namespace std;

int main()
{
    int x;
    int cnt=0;
    int posLast=0;
    int posFirst=0;
    while(cin>>x and x!=0){
        ++cnt;
        if(x==12){
        posLast=cnt;
            if(posFirst==0){
                posFirst=cnt;
        }
    }
    if(pos==0){
        cout<<"12 never entered."<<endl;
    }else{
        cout<<"First time 12 was seen: "<<pos<<endl;
        cout<<"Last time 12 was seen: "<<pos<<endl;
    }
    return 0;
}
