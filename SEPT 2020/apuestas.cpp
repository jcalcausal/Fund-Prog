//apuestas.cpp
#include <iostream>
#include <array>
using namespace std;

const int N=10;
struct TPerson{
    string name;
    unsigned int result;
    float money;
};

typedef array<TPerson,N> TList;
struct TCollection{
    TList people;
    int ne;
};

void read(TCollection &collection);
bool alreadyin(string n, TCollection &collection);
int findpos(string n, TList &people);
void print(TCollection &collection);

int main()
{
    TCollection collection;
    collection.ne=0;
    read(collection);
    int result;
    cout<<"Enter result(0,1,2): "<<endl;
    cin>>result;
    print(collection);
    return 0;
}

void read(TCollection &collection)
{
    string n="";
    while(n!="END"){
        cout<<"nombre: ";
        cin>>n;
        if(n!="END"){
            unsigned int r;
            cout<<"result: ";
            cin>>r;
            float m;
            cout<<"money: ";
            cin>>m;
            if(not alreadyin(n,collection)){
                collection.people[collection.ne].name=n;
                collection.people[collection.ne].result=r;
                collection.people[collection.ne].money=m;
            }else{
                collection.people[findpos(n,collection.people)].money+=m;
            }
        }
    }
}


bool alreadyin(string n, TCollection &collection)
{
    bool in=false;
    int i=0;
    while(not in and i<collection.ne){
        if(collection.people[i].name==n)
            in=true;
    }
    return in;
}

int findpos(string n, TList &people)
{
    int i=0;
    while(people[i].name!=n and i<N){
        ++i;
    }
    return i;
}

void print(TCollection &collection)
{
    for (int i=0; i<collection.ne; ++i){
        cout<<collection.people[i].name<<" ";
        cout<<collection.people[i].result<<" ";
        cout<<collection.people[i].money<<" ";
    }
}
