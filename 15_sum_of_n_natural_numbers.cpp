#include <iostream>
using namespace std;    

// Program to find the sum of the first N natural numbers
int main() {
    int n; // Variable to store the number of natural numbers
    cout << "Enter a positive integer: "; // Prompt user for input
    cin >> n; // Read the input number

    // Calculate the sum of the first N natural numbers using the formula n*(n+1)/2
    int sum = n * (n + 1) / 2; 

    // Output the result
    cout << "The sum of the first " << n << " natural numbers is: " << sum << endl; 

    return 0; // End of program
}