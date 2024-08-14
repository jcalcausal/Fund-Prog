//isbn.cpp
//Juan Carlos Alcausa Luque

#include <iostream>
using namespace std;
bool  number(string s);
char calculate(const string &temporal);
int toint (char a);
char tochar(int k);

int main()
{
    string group, editor, book, control;
    cout<<"Please enter the group code: "<<endl;
    cin>>group;
    while(int(group.size())>1 or not number(group)){
        cout<<"ISBN only contains number:"<<endl;
        cout<<"Please enter the group code:"<<endl;
        cin>>group;
    }
    cout<<"Please enter the editor code: "<<endl;
    cin>>editor;
    while(int(editor.size())>4 or not number(editor)){
        cout<<"ISBN only contains number:"<<endl;
        cout<<"Please enter the editor code:"<<endl;
        cin>>editor;
    }

    cout<<"Please enter the editor code: "<<endl;
    cin>>book;
    while(int(book.size())>4 or not number(book)){
        cout<<"ISBN only contains number:"<<endl;
        cout<<"Please enter the book code:"<<endl;
        cin>>book;
    }
    string temporal=group+editor+book;
    string isbn=temporal+calculate(temporal);
    cout<<"ISBN "<<isbn<<endl;
    return 0;
}

bool number(string s)
{
    bool number=true;
    for (int i=0; i<int(s.size()) and number; ++i){
        if(not ('0'<='s[i]'<='9'))
           number=false;
    }
    return number;
}

char calculate(const string &temporal)
{
    int c=0;
    for (int i=0; i<int(temporal.size()); ++i){
        c=c+(toint(temporal[i])*(i+1));
    }
    char result;
    int division=c%11;
    if(division!=10)
        result=tochar(division);
    else
        result='X';
    return result;
}

int toint (char a)
{
    return int(a)-int('0');
}

char tochar (int k)
{
    return char(k+int('0'));
}
