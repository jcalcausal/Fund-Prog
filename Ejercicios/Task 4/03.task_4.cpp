//03.task_4.cpp
//jcalcausal 2021-10-22
#include <iostream>
using namespace std;

int main ()
{
    int number=1505;
    while (number>1500 && number<2700){
        if (number%35==0){
        cout<<number<<endl;
        }
        number++;
    }
    return 0;
}
