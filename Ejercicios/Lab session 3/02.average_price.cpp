//02.avergae_price.cpp
//jcalcausal 2021-11-08
#include <iostream>
using namespace std;

int main()
{
    int N,S=0;
    cout<<"Please enter the number of models to read: "<<endl;
    cin>>N;
    int price,i=1;;
    while (i<=N){
        cout<<"Price in euros of model "<<i<<endl;
        cin>>price;
        S=S+price;
        i++;
    }
    cout<<"The average price is: "<<S/N<<" euros"<<endl;
    return 0;
}
