#include <iostream>
using namespace std;

// Program to print all odd numbers between 1 and 50

int main() {
    cout << "Odd numbers between 1 and 50:" << endl;
    
    for (int i = 1; i <= 50; i++) {
        if (i % 2 != 0) { 
            cout << i << " "; 
        }
    }
    
    
    return 0;
}