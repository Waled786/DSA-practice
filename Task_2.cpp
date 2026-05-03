// Write a C++ program that takes a character from user and convert its case i.e if character is upper case convert it to lower case character and if the input character is lower case convert it to upper case character. Furthermore, perform this conversion if and only if user enters an alphabetical character. No conversion should be performed if the character isn’t an alphabet.
// You should implement following functions for this task:
// a.	char convertToUpper(char c)
// b.	char covertToLower(char c)
// c.	bool isAlphabet(char c)


#include <iostream>
using namespace std;


bool isAlphabet(char c){
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

char convertToUpper(char c){
    if(c >= 'a' && c <= 'z'){
        return c - ('a' - 'A');
    }
    return c;
}

char convertToLower(char c){
    if(c >= 'A' && c <= 'Z'){
        return c + ('a' - 'A');
    }
    return c;
}



int main(){
    char c;
    cout << "Please provide your character that you want to callout regarding the case conversion:";
    cin >> c;

    
    if (isAlphabet(c)){
        if (c >= 'A' && c <= 'Z'){
            cout << "The converted character is: " << convertToLower(c) << endl;
        } else {
            cout << "The converted character is: " << convertToUpper(c) << endl;
        }
    } else {
        cout << "The provided character is not an alphabet. No conversion performed." << endl;
    }

    return 0;
}