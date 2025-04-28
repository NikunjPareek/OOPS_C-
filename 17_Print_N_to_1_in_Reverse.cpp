#include<iostream>
using namespace std;
// Program to print numbers from N to 1 in reverse order

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n; 
    
    cout << "Numbers from " << n << " to 1 in reverse order:" << endl;

    for(int i = n; i >= 1; i--) {
        cout << i << " "; 
    } 
    
    return 0; 
}