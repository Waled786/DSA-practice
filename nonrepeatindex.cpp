#include <iostream>
#include <unordered_map>
using namespace std;

// Write a function that takes a string and returns the first non-repeating character. If none exists, return null.

int returnnonrepeat(string ctr){
    unordered_map<char, int> freq;

    
    // Count frequency
    for(int i=0; i < ctr.length(); i++){
        freq[ctr[i]]++;
    }

    //This one calculates the char in the string that should not be repeating again
    for (int i = 0; i < ctr.length(); i++){
        if(freq[ctr[i]] == 1){
            return i;
        }
    }
    return -1; // Return null character if no non-repeating character is found
}

int main(){

    string ctr = "fizzy";
    int index = returnnonrepeat(ctr);

    if (index != -1){
        cout << "Index: "<< index;
        cout << " Character: " << ctr[index];

    }else{
        cout << "No non-repeating character found.";
    }
    
    return 0;
}