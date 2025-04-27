#include <iostream>
using namespace std;
// Program to find the sum of digits of a number
int main() {
    int number, sum = 0;

    cout << "Enter the Number: ";
    cin >> number;

    while (number > 0) {
        sum += (number % 10);
        number /= 10;
    }

    cout << "Sum of digits is: " << sum << endl;
    return 0;
}