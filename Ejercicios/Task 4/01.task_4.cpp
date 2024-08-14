//01.task_4.cpp
//jcalcausal 2021-10-22
#include <iostream>
using namespace std;
int main ()
{
    int elements, counter=0;
    float n, sum=0, biggest=0, lowest=0, average;
    cout<<"Please enter the number of elements of the series: "<<endl;
    cin>>elements;
    cout<<"Please enter the numbers: "<<endl;
    while (counter<elements){
        cin>>n;
        sum+=n;
        if (counter==0)
            biggest=lowest=n;
        else{
            if (biggest<n)
                biggest=n;
            if (n<lowest)
                lowest=n;
        }
        ++counter;
    }
    average=sum/counter;
    cout<<"The biggest number is: "<<biggest<<endl;
    cout<<"The lowest number is: "<<lowest<<endl;
    cout<<"The arithmetic mean is: "<<average<<endl;
    return 0;
}
