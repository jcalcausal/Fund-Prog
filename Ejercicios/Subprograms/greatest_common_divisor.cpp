//greatest_common_divisor.cpp
//jcalcausal 2021-11-15

#include <iostream>
using namespace std;

int gcd (int p, int q){
    int d;
    if (p<q){
        d=p;
    }else if(q<p){
        d=q;
    }else{
        d=p;
    }
    while (p%d!=0 or q%d!=0){
        --d;
    }
    return d;
}

int main (){
    int p,q;
    cout<<"Enter two numbers: "<<endl;
    cin>>p>>q;
    cout<<"The greatest common divisor is: "<<gcd(p,q)<<endl;
    return 0;
}

