#include<iostream>
#include<cmath>
using namespace std;
// Program to calculate simple interest and compound interest

int main() {
    float principal, rate, time, simpleInterest, compoundInterest;
    
    // Input principal amount, rate of interest and time period
    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter rate of interest: ";
    cin >> rate;
    cout << "Enter time period (in years): ";
    cin >> time;
    
    // Calculate simple interest
    simpleInterest = (principal * rate * time) / 100;
    
    // Calculate compound interestṇ
    compoundInterest = principal * pow((1 + rate / 100), time) - principal;
    
    // Output results
    cout << "Simple Interest: " << simpleInterest << endl;
    cout << "Compound Interest: " << compoundInterest << endl;
    
    return 0;
}