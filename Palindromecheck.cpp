//Write a function that checks if a number is a palindrome without converting it to a string.

#include <iostream>
using namespace std;


bool Ispalindrome(int num){
    int originalNum = num;
    int reversedNum = 0;

    while(num > 0){
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    return originalNum == reversedNum;

}

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if(Ispalindrome(num) > 0 ){
        cout << "The number is a palindrome.";
    }else{
        cout << "The number is not a palindrome.";
    }   

    return 0;
}