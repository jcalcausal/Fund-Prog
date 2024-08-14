//03.double_wall.cpp
//jcalcausal 2021-10-29

#include <iostream>
using namespace std;

int main()
{
    for (int rows=1; rows<=6; rows++){
        for (int columns=1; columns<=6; columns++){
            if(rows==2 or rows==2 or rows==5 or rows==6 or columns==1 or columns==2 or columns==5 or columns==6){
                cout<<"*";
            }else{
                cout<<" ";
            }
            }
        cout<<endl;
}
    return 0;
}
