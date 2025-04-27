#include<iostream>
using namespace std;    
// Program to find the cube of a number

int main() {
    int num, cube;    
    
    cout << "Enter a number: ";
    cin >> num; 
    
    cube = num * num * num; 
    
    cout << "Cube of " << num << " is: " << cube << endl;
    
    return 0; 
}