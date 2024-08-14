// 1.palin.cpp
// juanfc 2022-01-24
#include <iostream>
using namespace std;

void test(string s);

int main()
{
    test("");
    test("a");
    test("ab");
    test("aaab");
    test("A Santa dog lived as a devil God at NASA.");
    return 0;
}

bool isPalindromic(string s);

void test(string s)
{
    if (isPalindromic(s))
        cout << s + ": IS palindromic" << endl;
    else
        cout << s + ": is NOT palindromic" << endl;
}


bool isLet(char c);
char toUp(char c);

bool isPalindromic(string s)
{
    int l = s.size();
    bool ok = true;
    int i = 0;
    int j = l-i-1;
    while (ok and i < j) {
        if ( isLet(s[i]) and isLet(s[j]) ) {
            ok = toUp(s[i]) == toUp(s[j]);
            ++i; --j;
        } else if (isLet(s[i]))
            --j;
        else
            ++i;
    }
    return ok;
}

bool isLet(char c)
{
    return 'a' <= c and c <= 'z' or
           'A' <= c and c <= 'Z';
}

char toUp(char c)
{
    return ('a'<=c and c<='z')?c+('A'-'a'):c;
}
