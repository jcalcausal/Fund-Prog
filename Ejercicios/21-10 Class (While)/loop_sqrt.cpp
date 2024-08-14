//loop_sqrt.cpp
#include <iostream>
#include <cmath>
using namespace std;
 int main ()
 {
     float x;
     cout<<"Enter a number (0 ends): ";
     cin>>x;
     while (x>0){
        cout<<sqrt(x)<<endl;
        cin>>x;
     }
     return 0;
 }
