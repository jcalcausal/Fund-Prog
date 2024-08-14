#include <iostream>
using namespace std;
const float PI = 3.141592;
int main()
{
float radio;
float volumen;
float height;
cout << "Enter the circle radio: ";
cin >> radio;
cout << "Enter the cylinder height:";
cin >> height;
volumen = PI * radio * radio * height;
cout << "The volume of a cylinder with radio " << radio
<< " is " << volumen << endl;
return 0;
}
