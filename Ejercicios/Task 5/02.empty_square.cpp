//02.empty_square.cpp
//jcalcausal 2021-10-29

#include <iostream>
using namespace std;

int main()
{
    for (int rows=1; rows<=5; rows++){
        for (int columns=1; columns<=5; columns++){
            if(rows==1 or rows==5 or columns==1 or columns==5){
                cout<<"*";
            }else{
                cout<<" ";
            }
            }
        cout<<endl;
}
    return 0;
}
