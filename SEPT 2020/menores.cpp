//menores.cpp

#include <iostream>
#include <array>
using namespace std;
const int N1=4;
const int N2=3;

typedef array<array<int,N1>,N1> TMat1;
typedef array<array<int,N2>,N2> TMat2;

void complete(TMat2 &Mat2, const TMat1 &Mat1, int row, int col);
void print(const TMat2 &Mat2);

int main()
{
    TMat1 Mat1={{
    {{1,2,3,4}},
    {{5,6,7,8}},
    {{9,10,11,12}},
    {{13,14,15,16}}
    }};
    TMat2 Mat2={{
    {{0,0,0}},
    {{0,0,0}},
    {{0,0,0}},
    }};;
    int row;
    int col;
    cout<<"Enter the row and column you'd like to erase: "<<endl;
    cin>>row>>col;
    complete(Mat2,Mat1,row,col);
    print(Mat2);
    return 0;
}

void complete(TMat2 &Mat2, const TMat1 &Mat1, int row, int col)
{
    int c1=0;
    int c2=0;
    for(int i=0; c1<N2; ++i){
        if(i!=row){
            for (int j=0; c2<N2; ++j){
                if(j!=col){
                    Mat2[i][j]=Mat1[i][j];
                }
                ++c2;
            }
            ++c1;
        }
    }
}

void print(const TMat2 &Mat2)
{
    for (int i=0; i<N2; ++i){
        for(int j=0; j<N2; ++j){
            cout<<Mat2[i][j]<<" ";
        }
        cout<<endl;
    }
}
