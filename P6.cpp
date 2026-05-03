// Write a program, which takes input of two integers. It then displays the greatest common divisor of the two entered integers.

#include <iostream>
using namespace std;

int main(){
    int num1, num2;
    cout << "Enter the first integer: ";
    cin >> num1;

    cout << "Enter the second integer: ";
    cin >> num2;    

    int gcd = 1; // Initialize GCD to 1 
    for(int i = 1; i <= num1 && i <= num2; i++){
        if(num1 % i == 0 && num2 % i == 0){
            gcd = i; // Update GCD if i is a common divisor
        }
    }

    cout << "The greatest common divisor of " << num1 << " and " << num2 << " is " << gcd << endl;

    return 0;
}