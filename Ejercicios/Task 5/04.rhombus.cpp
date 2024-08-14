//04.rhombus.cpp
//jcalcausal 2021-10-29

#include <iostream>
using namespace std;
int main()
{
    int side=4;

    for (int row=1; row<=side; ++row ) {//Para cada fila hace lo que hay en el cuerpo. Empezamos sacando un triángulo y luego lo modificamos hasta que sea un rombo.
        for ( int i = 0; i < side-row; ++i )//Hay n líneas en la mitad del rombo. Hay n espacios menos la fila en la que estamos.
            cout <<  " ";
        for ( int i = 0; i < 2*row-1; ++i )//int i=0;i<n<;++i es igual que int i=1; i<=n; i++
            cout << "*";
        cout << endl;
    }
    for ( int row = 1; row <= side; ++row ) {
        for ( int i = 0; i < row; ++i )
            cout << " ";
        for ( int i = 0; i < 2*(side-row)-1; ++i )
            cout << "*";
        cout << endl;
    }
    return 0;
}
/*
   *
  ***
 *****
*******
 *****
  ***
   *
*/
