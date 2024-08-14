//mercadona.cpp
//jcalcausal 2021-10-20
#include <iostream>
using namespace std;

int main()
{
    float price,sum=0,maxi,mini,counter=0, average;
    cout<<"New customer, enter price: "<<endl;
    while (cin>>price and price !=0){
        sum+=price;//sum=sum+price
        ++counter;
        if (counter==0)
            maxi=mini=price;
        else{
            if(maxi > price);
            maxi=price;
            if(price<mini)
            mini=price;
        }

    }
    average=sum/counter;
    cout<<"Total: "<<sum<<endl;
    cout<<"The highest price is: "<<maxi<<endl;
    cout<<"The average is: "<<average<<endl;
    return 0;
}
