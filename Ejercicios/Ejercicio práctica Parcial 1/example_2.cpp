#include <iostream>
using namespace std;

int main()
{
    float x, sum, position;
    int i, n;
    const int MAXPOW= 10;
    cout << " Enter the value of x: ";
    cin >> x;
    sum = 1;
    position = 1;
    i=1;
    while (i < MAXPOW)
    {
        position = position * x / (float)i;
        cout<<position<<endl;
        sum += position;
        i++;
    }
    cout << " The sum  is : " << sum << endl;
    return 0;
}
