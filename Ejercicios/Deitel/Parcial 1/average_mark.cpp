//average_mark.cpp
//Juan Carlos Alcausa Luque 02/12/2021

#include <iostream>
using namespace std;
const int N=10;

int main ()
{
    int sum=0, cnt=1, mark;

    while (cnt<=N){
        cout<<"Introduzca una nota: ";
        cin>>mark;
        sum=sum+mark;
        ++cnt;
    }
    cout<<"The average mark is: "<<sum/N<<endl;
    return 0;
}
