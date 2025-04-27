#include <iostream>
using namespace std;    
// Program to check if a character is a vowel or consonant using switch case
int main() {
    char ch;
    
    cout << "Enter an alphabet: ";
    cin >> ch;
    
    switch(ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            cout << ch << " is a vowel." << endl;
            break;
        default:
            cout << ch << " is a consonant." << endl;
    }
    
    return 0;
}
