// Write a pseudo code to enter any number and calculate product of its digits.


#include <iostream>
using namespace std;

int main(){
    int num,prod = 1;
    cout << "Enter a number: ";
    cin >> num;

    while(num > 0){
        int digit = num % 10; // Get the last digit
        prod = prod * digit; // Multiply the digit to the product
        num = num / 10; // Remove the last digit
    }
    cout << "The product of the digits is: " << prod << endl;

    return 0;
}