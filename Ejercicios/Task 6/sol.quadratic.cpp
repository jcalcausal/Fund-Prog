#include <iostream>
#include <cmath>
using namespace std;

// you could use enum, but not seen this course, unnecessary
// enum TYPEEC {ANYX, ABSURD, LINEAR, DOUBLE, IMAG, TWODIFSOLS};
const int ANYX = 0;
const int ABSURD = 1;
const int LINEAR = 2;
const int DOUBLE = 3;
const int IMAG = 4;
const int TWODIFSOLS = 5;

void seconddegeq(const float a, const float b, const float c,
               float& x1, float& x2, int& type);

int main()
{
    cout << "Second degree equations solver ax2 + bx + c = 0" << endl;
    cout << "Enter a b c: ";
    float a, b, c, x1, x2;
    cin >> a >> b >> c;

    int type = seconddegeq(a, b, c, x1, x2);
    if (type == ANYX)
        cout << "Valid for any x" << endl;
    else if (type == ABSURD)
        cout << "Impossible for any x" << endl;
    else if (type == LINEAR)
        cout << "Only one solution: " << x1 << endl;
    else if (type == DOUBLE)
        cout << "Double solution at x1=x2= " << x1 << endl;
    else if (type == IMAG)
        cout << "Imaginary conjugated complex: "
             << x1 << " +- i " << x2 << endl;
    else if (type == TWODIFSOLS) {
        cout << "Two different solutions:" << endl;
        cout << "x1: " << x1 << endl;
        cout << "x2: " << x2 << endl;
    }

    return 0;
}




void seconddegeq(const float a, const float b, const float c,
               float& x1, float& x2, int& type)
{
    if (a == 0.0 and b == 0.0 and c == 0.0) {
        type = ANYX;
    } else {
        if (a == 0.0) {         // is not second deg
            if (b == 0.0) {     // a=0, b=0 y c != 0
                type = ABSURD;
            } else {
                type = LINEAR;
                x1 =  -c/b;
            }
        } else {
            float discr  = b * b - 4.0 * a * c;
            if (discr == 0.0) {
                type = DOUBLE;
                x2 = x1 = -b/(a*2);
            } else {
                if (discr < 0.0) {
                    type = IMAG;
                    x1 = -b/(2*a);
                    x2 = sqrt(-discr)/(2*a);
                } else {
                    type = TWODIFSOLS;
                    float d = sqrt(discr);
                    x1 = (-b+d)/(2*a);
                    x2 = (-b-d)/(2*a);
                }
            }
        }
    }
}
