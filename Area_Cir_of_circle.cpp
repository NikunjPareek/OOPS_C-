#include <iostream>
using namespace std;        

int main()
{
    int r, area, cir;
    
    cout << "Enter the radius of the circle: ";
    cin >> r;

    area = 3.14 * r * r; 
    cir = 2 * 3.14 * r;

    cout << "The area of the circle is: " << area << endl;

    cout << "The circumference of the circle is: " << cir << endl;
}