#include <iostream>
using namespace std;

void swap(int& a, int& b);//without the & the program changes the copied value, not the original value. It changes the copy of the
int main()
{
    int a, b;
    cout << "Enter two numbers: "<<endl;
    cin >> a >> b;
    cout<<"a: "<<a<<"; b: "<<b<<endl;
    swap(a, b);
    cout << "a: " <<a<< ", " << "; b: " << b<< endl;
    return 0;
}
void swap(int& a, int& b)//we  get the reference of the original variable and we change it
{
    int t = a;
    a = b;
    b = t;
}
