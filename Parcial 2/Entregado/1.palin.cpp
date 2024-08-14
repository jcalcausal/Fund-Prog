//1.palin.cpp
//PC407
//Alcausa Luque, Juan Carlos 2022-01-24

#include <iostream>
using namespace std;

bool isPal(string s);

int main()
{
    if(isPal("abba"))
      cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}

bool isPal(string s)
{
    const int l=s.size();
    int i=0;
    int j=l-1;
    bool same=true;
    while (i!=j and i!=l and  i<j and same){
        if (s[i]!=s[j])
            same=false;
        --j;
        ++i;
    }
    return same;
}
