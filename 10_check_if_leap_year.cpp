#include<iostream>
using namespace std;
// Program to check if a year is a leap year or not

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year; 
    
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " is a leap year." << endl; 
    } else {
        cout << year << " is not a leap year." << endl; 
    }

    return 0;
}