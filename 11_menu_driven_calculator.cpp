#include<iostream>
using namespace std;
// Program to implement simple menu-driven calculator

int main() {
    int choice, a, b;
    
    cout << "Menu Driven Calculator" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Modulus" << endl;
    cout << "6. Exit" << endl;
    
    do {
        cout << "Enter your choice (1-6): ";
        cin >> choice; 
        
        if (choice >= 1 && choice <= 5) {
            cout << "Enter two numbers: ";
            cin >> a >> b; 
        }
        else {
            cout << "Invalid choice! Please try again." << endl;  
        }
        switch (choice) {
            case 1:
                cout << "Addition Result: " << a + b << endl; 
                break;
            case 2:
                cout << "Substraction Result: " << a - b << endl; 
                break;
            case 3:
                cout << "multiple Result: " << a * b << endl; 
                break;
            case 4:
                if (b != 0) {
                    cout << "division Result: " << a / b << endl; 
                } else {
                    cout << "Error: Division by zero!" << endl; 
                }
                break;
            case 5:
                cout << "modulus Result: " << a % b << endl; 
                break;
            case 6:
                cout << "Exiting..." << endl; 
                break; 
        }
        
    } while (choice != 6);
    
    return 0; 
}