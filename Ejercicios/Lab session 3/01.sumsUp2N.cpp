//01.sumsUp.cpp
//jcalcausal 2021-11-08
#include <iostream>
using namespace std;

int main()
{
    int N,S1=0,S2=0,S3=0;
    cout<<"Please enter the limit N: "<<endl;
    cin>>N;
    int i=0;
    while (i<=N){
        S1=S1+i;
        i++;
    }
    cout<<"The sum (with for while) is: "<<S1<<endl;
    i=0;
    do{
        S2=S2+i;
        i++;
    }while(i<=N);
    cout<<"The sum with the do while is: "<<S2<<endl;
    for (i=1;i<=N;i++){
        S3 =S3+i;
    }
    cout<<"The sum (with for loop) is: "<<S3<<endl;
}
