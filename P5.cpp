// Input a number and find whether the number is prime or not.

#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    bool isPrime = true; // Assume the number is prime until proven otherwise

    if(num <= 1){
        cout << num << " is not a prime number." << endl; // 0 & 1 aren't prime numbers
        return 0;
    }else{
        for(int i = 2; i <= num / 2; i++){
            if(num % i == 0){
                isPrime = false; // Found a divisor, so it's not prime
                break; // No need to check further  
            }
        }
    }

    if (isPrime){
        cout << num << " is a prime number." << endl;   
    }else{
        cout << num << " is not a prime number." << endl;
    }
    
    return 0;
}