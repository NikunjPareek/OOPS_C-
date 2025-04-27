#include<iostream>
#include<cmath>
using namespace std;
// Program to find the sum of the harmonic series: 1 + 1/2 + 1/3 + ... + 1/N

int main(){
    int n;
    double sum = 0.0; // Initialize sum to 0.0 for floating-point precision
    cout << "Enter the number of terms (N): ";
    cin >> n; // Input the number of terms in the harmonic series

    for(int i = 1; i <= n; i++){
        sum += 1.0 / i; // Add each term of the harmonic series to sum
    }

    cout << "The sum of the first " << n << " terms of the harmonic series is: " << sum << endl; // Output the result

    return 0; // End of program
}

