// Input two numbers ‘a’ and ‘n’ from user. And calculate an.

#include <iostream>
#include <cmath> // for pow function
using namespace std;

int main(){
    double a, n;
    cout << "Enter the base number (a): ";
    cin >> a;
    cout << "Enter the exponent (n): ";
    cin >> n;

    double result = pow(a, n); // Calculate a raised to the power of n
    cout << a << "raised to the power of " << n << " is: " << result << endl;

    return 0;
}