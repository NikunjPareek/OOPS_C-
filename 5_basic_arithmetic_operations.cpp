#include<iostream>
#include<cmath>
using namespace std;
// Program to perform basic arithmetic operations user input
int main(){
    int a, b;
    cout << "Enter numbers 1: ";
    cin >> a;
    cout << "Enter numbers 2: ";
    cin >> b; 

    cout << "Addition: " << a + b << endl; 
    cout << "Subtraction: " << a - b << endl; 
    cout << "Multiplication: " << a * b << endl; 
    cout << "Division: " << a / b << endl; 
    cout << "Modulus: " << a % b << endl; 

    return 0; 
}