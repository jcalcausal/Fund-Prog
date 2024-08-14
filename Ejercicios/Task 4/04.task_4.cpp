//04.task_4.cpp
//jcalcausal 2021-10-22
#include <iostream>
#include <cmath>
using namespace std;

const int MAXPOW = 10;

int main(){

int i=1,fact=1;
float sum = 1;
float x;

cout << "Please enter a number: ";
cin >> x;

while (i<=MAXPOW){
    fact = fact*i;
    sum = sum +((pow(x, i))/(fact));
    i++;
}

cout <<"Your result is: " << sum;

return 0;
}
