// 2.stochastic.cpp
// juanfc 2020-01-30
//

#include <iostream>
#include <array>
using namespace std;

const int N = 3;
typedef array< array<int, N>,N> TSqMat;

void check(TSqMat m);

int main()
{
    TSqMat a = {{
        {{20, 30, 50}},
        {{50,  0, 50}},
        {{30, 70,  0}}
    }};
    TSqMat b = {{
        {{20, 30, 50}},
        {{55, -5, 50}},
        {{25, 75,  0}}
    }};

    check(a);
    cout << endl;
    check(b);

    return 0;
}


int sumRow(TSqMat m, int row);
int sumCol(TSqMat m, int col);
bool isPosRow(TSqMat m, int row);
bool isPosCol(TSqMat m, int col);

bool isBistochastic(TSqMat m)
{
    bool stillIs = true;
    int i = 0;
    while (i < N  and stillIs ) {
        int j = 0;
        while (stillIs and j < N)
            stillIs = m[i][j++] >= 0;
        ++i;
    }

    i = 0;
    while ( stillIs and i < N )
         stillIs = sumRow(m, i++) == 100;
    i = 0;
    while ( stillIs and i < N )
        stillIs =  sumCol(m, i++) == 100;

    return stillIs;
}

int sumRow(TSqMat m, int row)
{
    int s = 0;
    for (int i = 0; i < N; ++i)
        s += m[row][i];
    return s;
}
int sumCol(TSqMat m, int col)
{
    int s = 0;
    for (int i = 0; i < N; ++i)
        s += m[i][col];
    return s;
}
bool isPosRow(TSqMat m, int row)
{
    int i = 0;
    while (i < N and m[row][i] >= 0)
        ++i;
    return i == N;
}
bool isPosCol(TSqMat m, int col)
{
    int i = 0;
    while (i < N and m[i][col] >= 0)
        ++i;
    return i == N;
}

void printSqMat(TSqMat m);
void check(TSqMat m)
{
    cout << "The matrix" << endl;
    printSqMat(m);
    if (isBistochastic(m))
        cout << "IS normalised doubly stochastic" << endl;
    else
        cout << "is NOT normalised doubly stochastic" << endl;
}

void printSqMat(TSqMat m)
{
    for (int i = 0; i < N; ++i) {
        cout << "   ";
        for (int j = 0; j < N; ++j)
            cout << m[i][j] << " ";
        cout << "   " << endl;
    }
}
