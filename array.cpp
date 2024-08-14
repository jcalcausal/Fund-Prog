//array.cpp
#include <iostream>
using namespace std;
#include <array>
const int M=3;

typedef array<int, M> TVector;

void readArr(TVector &a);

void printArr(const TVector a);

int main()
{
	TVector a;
	readArr(a);
	printArr(a);
    cout<<endl;
    return 0;
}
void readArr(TVector &a)
{
	for (int i=0; i<M;++i){
		cin>>a[i];
    }
}
void printArr(const TVector a)
{
    for (int i=0; i<M;++i){
		cout<<a[i]<<" ";
    }
}
