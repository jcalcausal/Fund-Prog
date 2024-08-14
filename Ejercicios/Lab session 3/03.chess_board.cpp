//03.chess_board.cpp
//jcalcausal 2021-11-08
#include <iostream>
using namespace std;

int main()
{
    const int BOARDSIZE=8;
    for (int rows=1;rows<=8;rows++){
        if(rows%2!=0){
            for(int column=1;column<=BOARDSIZE;column++){
                if (column%2!=0){
                    cout<<"W";
                }else{
                    cout<<"B";
                }
            }
        }else{
            for(int column=1;column<=BOARDSIZE;column++){
                if (column%2!=0){
                    cout<<"B";
                }else{
                    cout<<"W";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
