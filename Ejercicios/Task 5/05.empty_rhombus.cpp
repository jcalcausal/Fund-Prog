//04.empty_rhombus.cpp
//jcalcausal 2021-10-29
#include <iostream>
using namespace std;
int main()
{
    int h=4;

    for ( int i = 0; i < h-1; ++i )
        cout << ' ';
        cout << '*' << endl;
    for ( int row = 2; row <= h; ++row ) {
        for ( int i = 0; i < h-row; ++i )
            cout << ' ';
            cout << '*';
        for ( int i = 0; i < 2*row-3; ++i )
            cout << ' ';
            cout << '*' << endl;
    }

    for ( int row = h-1; row > 1; --row ) {
        for ( int i = 0; i < h-row; ++i )
            cout << ' ';
            cout << '*';
        for ( int i = 0; i < 2*row-3; ++i )
            cout << ' ';
            cout << '*' << endl;
    }
    for ( int i = 0; i < h-1; ++i )
        cout << ' ';
        cout << '*' << endl;

    return 0;
}
