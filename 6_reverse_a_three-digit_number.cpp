#include<iostream>
using namespace std;        
// Program to reverse a three-digit number  

int main() {
    int num, reversedNum = 0, remainder;
    
    cout << "Enter a three-digit number: ";
    cin >> num;
    
    // Reverse the number
    while (num != 0) {
        remainder = num % 10; 
        reversedNum = reversedNum * 10 + remainder; 
        num /= 10; 
    }
    
    cout << "Reversed Number: " << reversedNum << endl;
    
    return 0;
}