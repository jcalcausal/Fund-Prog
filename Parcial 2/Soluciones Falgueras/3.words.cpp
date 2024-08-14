// 3.words.cpp
// juanfc 2022-01-24
//
// abc abcd x x acb abc end
#include <iostream>
#include <array>
using namespace std;

const int MAX_REP=20;

struct TElement {
    int freq;
    string w;
};

typedef array<TElement,MAX_REP> TBag;

void add(TBag& b, string w);
void init(TBag& b);
void print(TBag b);


int main()
{
    TBag b;
    init(b);
    string w;
    while (cin >> w and w != "end")
        add(b, w);

    print(b);   //
    return 0;
}

void add(TBag& b, string w)
{
    int i = 0;
    while (b[i].freq != 0 and b[i].w != w)
        ++i;
    if (b[i].freq == 0) {
        b[i].freq = 1;
        b[i].w = w;
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
        cout << b[i].w << ": " << b[i].freq << endl;
}
