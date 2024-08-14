//13.task_4.cpp
//jcalcausal 2021-10-25
#include <iostream>
#include <iostream>
#include <iostream>
using namespace std;

int main()
{
    int N, n=2, i=0;
    cout << "Enter a number of prime numbers: ";
    cin >> N;
    cout << "The first " << N << " prime numbers are:" << endl;
    while (i < N) {
        int d = 2;
        while (n % d != 0)
            ++d;
        if (d == n) {
            cout << n << ", ";
            ++i;
        }
        ++n;
    }
    return 0;
}
