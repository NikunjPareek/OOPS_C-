#include <iostream>
using namespace std;    

// Program to convert Celsius to Fahrenheit
int main()
{
    int celsius, fahrenheit;
    
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 9/5) + 32; 

    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;

    return 0;
}