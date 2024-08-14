//09.task_04.cpp
//jcalcausal 2021-10-25
#include <iostream>
using namespace std;

int main()
{
    int num,sum=0,element;
    cout<<"Please enter an integer: "<<endl;
    cin>>num;
    while(num!=0 and sum!=num){
        sum+=num;
        cin>>num;
        }
    if(num==sum)
        cout<<"There is one number that is sum of another two."<<endl;
    else if (num!=sum)
        cout<<"There is no number that is sum of another two."<<endl;
    return 0;

}
