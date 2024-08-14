//marks.cpp
//jcalcausal 2021-10-14
#include <iostream>
using namespace std;

int main ()
{
    float a;
    cout << "Enter a mark: "<<endl;
    cin>> a;
    if (a<5){
            cout<<"Suspenso"<<endl;}
    else if (a<6){
        cout<<"Suficiente"<<endl;}
    else if (a<7){
        cout<<"Bien"<<endl;}
    else if (a<9){
        cout<<"Notable"<<endl;}
    else if (a<10){
        cout<<"Sobresaliente"<<endl;}
    else if (a==10){cout<<"Matrícula de honor"<<endl;}
    return 0;
}
