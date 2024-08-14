//06.task_4.cpp
//jcalcausal 2021-10-23
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
int x,y;
cout<<"Please enter two numbers: "<<endl;
cin>>x>>y;
int z=x-y;
int factx=1, facty=1, factz=1;
int i=1,j=1,k=1;
if (x-y<0){
    cout<<"No solution, (x-y negative). "<<endl;
}else {
    while (i<=x){
        factx=factx*i;
        i++;
    }while(j<=y){
        facty=facty*j;
        j++;
    }while(k<=z){
        factz=factz*k;
        k++;
    }
    cout<<"The combinatorial number is: "<<factx/(facty*factz)<<endl;
}
return 0;
}
