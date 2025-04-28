#include<iostream>
using namespace std;
// Program to calculate the factorial of a given number

int main() {
    int n;
    long long factorial = 1;
    cout << "Enter a number: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        factorial *= i; 
    }
    cout << "Factorial of " << n << " is: " << factorial << endl; 

    return 0;
}