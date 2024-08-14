//example_2.cpp
#include <iostream>
using namespace std;

int main ()
{
    char letter;
    cout << "Enter a letter: " << endl;
    cin >>letter;
    if (letter>='a' and letter<='z'){
            letter = letter+'A'-'a';
            cout<<"This is the letter in uppercase: "<<letter<<endl;

    //c = c + 'A' -'a';

}
}
