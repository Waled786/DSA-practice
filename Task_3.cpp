// By now you are well aware with palindromes. You have already written programs that tells whether a number is palindrome or not. Now your task is to generate a palindrome number by any given number. You can use the "reverse and add" to generate a palindrome number. “reverse and add” method is simple: choose a number, reverse its digits and add it to the original. If the sum is not a palindrome (which means, it is not the same number from left to right and right to left), repeat this procedure.
// For example:

// In this particular case the palindrome 9339 appeared after the 4th addition. This method leads to palindromes in a few steps for almost all of the integers. But there are interesting exceptions. 196 is the first number for which no palindrome has been found. It is not proven though, that there is no such a palindrome.
// Write a program that gives the resulting palindrome and the number of iterations (additions) to compute the palindrome.
// You might assume that all tests-data/inputs on this problem:
// -	will have an answer,
// -	will be computable with less than 1000 iterations (additions),
// -	will yield a palindrome that is not greater than 4,294,967,295.


// You should implement following two functions to complete this task:
// a.	bool isPalandrome(int num)
// b.	int reverse(int num)
// Call these functions repeatedly in main( ) until you produce the desired number.


#include <iostream>
using namespace std;    

bool isPalindrome(int num){

    int original = num;
    int rev = 0;

    while(num > 0){
        int digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;

    }
    return original == rev;
    
}

int reverse(int num){
 
    int rev = 0;

    while(num > 0){
        int digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;

    }
    return rev;
}

int main(){
    int num;
    cout << "Please provide your number that you want to callout regarding the palindrome generation:";
    cin >> num;
    int iterations = 0;
    while (!isPalindrome(num) && iterations < 1000){
        num += reverse(num);
        iterations++;
    }
    if (isPalindrome(num)){
        cout << "The resulting palindrome is: " << num << endl;
        cout << "Number of iterations to compute the palindrome: " << iterations << endl;
    } else {
        cout << "No palindrome found within 1000 iterations." << endl;
    }

    return 0;


}