//algebraic_operation.cpp
//jcalcausal 2021-10-14
#include <math.h>
#include <iostream>
using namespace std;
int main()
{
    float a, b, r;
    char op;
    cout << "Enter 2 numbers: " << endl;
    cin >> a >> b;
    cout << "Enter a char for the operation: (+-*/^%): ";
    cin >> op;
    if (op == '+')
        r = a+b;
    else if (op == '-')
        r = a-b;
    else if (op == '*')
        r = a*b;
    else if (op == '/')
        r = a/b;
    else if (op == '^')
        r = pow (a,b);
    else if (op == '%')
        r = fmod(a,b);
    else {
        cout << "Error: wrong operation, only +-*/" << endl;
    r = 0;
    }
    cout << "r: " << r << endl;
    return 0;
}

