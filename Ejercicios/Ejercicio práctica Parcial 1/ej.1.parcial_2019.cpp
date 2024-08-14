//ej.1.parcial_2019.cpp
//Juan Carlos Alcausa Luque
#include <iostream>
using namespace std;

int main()
{
    int n;
    bool first=true, positive, negative, zigzag=true;
    cout<<"Please enter the succession: "<<endl;
    cin>>n;
    while (n!=0){
        if(first){
            first=false;
            if (n>0){
                positive=true;
                negative=false;
            }else{
                negative=true;
                positive=false;
            }
        }else{
            if (n>0 and negative){
                positive=true;
                negative=false;
            }else if (n<0 and positive){
                positive=false;
                negative=true;
            }else{
                zigzag=false;
            }
        }
    cin>>n;
    }
    if (zigzag){
        cout<<"It is a zigzag"<<endl;
    }else{
        cout<<"It is not a zig zag"<<endl;
    }
    return 0;
}

