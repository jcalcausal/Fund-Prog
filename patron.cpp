//patron.cpp
//Juan Carlos Alcausa Luque

#include <iostream>
#include <array>
using namespace std;

const int MLet=5;
const int MPal=20;

typedef array<string,MPal> TWords;
struct Tgroup{
    char letter;
    TWords words;
    int ne;
};
typedef array<Tgroup,MLet> TTotal;
struct TData{
    TTotal total;
    int ne;
};

void readpatron(string &patron);
void initialise_data(string patron, TData &data);
void write(TData &data);
void add(Tgroup &total, string s);
void print (const TData &data);

bool thisletter(char s, TData &total);
bool isletter(string s, char &a);
bool isin(string s, Tgroup &total);

int main()
{
    TData data;
    string patron;
    readpatron(patron);
    initialise_data(patron,data);
    write(data);
    print(data);
    return 0;
}

void readpatron(string &patron)
{
    do{
        cout<<"Enter a patron (no more than "<<MLet<<" letters permitted): "<<endl;
        cin>>patron;
    }while(int(patron.size())>MLet);
}

void initialise_data(string patron, TData &data)
{
    data.ne=0;
    for(int i=0; i<int(patron.size()); ++i){
        if(not thisletter(patron[i],data)){
            data.total[data.ne].letter=patron[i];
            data.total[data.ne].ne=0;
            ++data.ne;
        }
    }
}

void write(TData &data)
{
    string s;
    cout<<"Please enter the sequence: "<<endl;
    while (cin>>s and s!="FIN"){
        for(int i=0; i<data.ne; ++i){
            if(isletter(s,data.total[i].letter) and not isin(s,data.total[i])){
               add(data.total[i],s);
            }
        }
    }
}

bool thisletter(char s, TData &data)
{
    bool in=false;
    for (int i=0; not in and i<data.ne; ++i){
        if(data.total[i].letter==s){
            in=true;
        }
    }
    return in;
}


bool isletter(string s, char &a)
{
    bool in=false;
    int i=0;
    while (not in and i<int(s.size())){
        if(s[i]==a)
            in=true;
        ++i;
    }
    return in;
}

bool isin(string s, Tgroup &total)
{
    bool in=false;
    int i=0;
    while(not in and i<total.ne){
        if(s==total.words[i]){
            in=true;
        }
        ++i;
    }
    return in;
}
void add(Tgroup &total, string s)
{
    total.words[total.ne]=s;
    ++total.ne;
}

void print(const TData &data)
{
    for (int i=0; i<data.ne; ++i){
        cout<<data.total[i].letter<<" ";
        for(int j=0; j<data.total[i].ne; ++j){
            cout<<data.total[i].words[j]<<" ";
        };
        cout<<endl;
    }
}
