#include<iostream>
#include<cmath>
using namespace std;    
// Program to generate N Arithmetic Progression (AP) terms
int main(){
    int a, d, n;
    cout << "Enter the first term (a): ";
    cin >> a; 
    cout << "Enter the common difference (d): ";
    cin >> d; 
    cout << "Enter the number of terms (n): ";
    cin >> n; 

    cout << "The first " << n << " terms of the AP are: " << endl;
    for(int i = 0; i < n; i++){
        cout << a + i * d << " "; 
    }
    return 0; 
}
