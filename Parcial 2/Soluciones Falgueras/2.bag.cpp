// 2.bag.cpp
// juanfc 2022-01-24
//

#include <iostream>
#include <array>
using namespace std;

const int N = 100;

struct TElement {
    int freq;
    int v;
};

typedef array<TElement,N> TBag;

void add(TBag& b, int n);
void init(TBag& b);
void print(TBag b);


int main()
{
    TBag b;
    init(b);
    print(b);   //
    add(b, 33);
    add(b, 33);
    add(b, 0);
    add(b, 10);
    add(b, 10);
    print(b);   // (33, 2) (0, 1) (10, 2)
    return 0;
}

void add(TBag& b, int n)
{
    int i = 0;
    while (b[i].freq != 0 and b[i].v != n)
        ++i;
    if (b[i].freq == 0) {
        b[i].freq = 1;
        b[i].v = n;
        b[i+1].freq = 0;
    } else
        ++b[i].freq;
}

void init(TBag& b)
{
    b[0].freq = 0;
}

void print(TBag b)
{
    for (int i = 0; b[i].freq != 0; ++i)
        cout << "(" << b[i].v << ", " << b[i].freq << ") ";
    cout << endl;
}
