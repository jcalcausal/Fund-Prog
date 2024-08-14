#include <iostream>
using namespace std;

//without the & the program changes the copied value, not the original value. Adding the & we are telling the program where it has to go and do what we are requiring, its like a pointer but not a pointer itself.
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
