//10.task_4.cpp
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter an integer number: "<<endl;
    cin>>n;

    while (n != 0) {
        cout << n % 10;
        n = n/10;
    }
    return 0;
}
