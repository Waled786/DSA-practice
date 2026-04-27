//2.	Write a function that checks whether two strings are anagrams of each other without using built-in sort.

#include <iostream>
#include <unordered_map>
using namespace std;


bool isanagram(string a, string b){

    if(a.length() != b.length()){
        return false;
    }

    unordered_map<char, int> freq;
    for(int i = 0; i < a.length(); i++){
        freq[a[i]]++;
        freq[b[i]]--;
    }

    for(auto pair : freq){
        if(second != 0){
            return false;
        }

    }
    return true;

}

int main(){
    string a = "abba";
    string b = "baab";
    
    if(isanagram(a,b)){
        cout << "Valid Anagram";
    }else{
        cout << "Non valid anagram";
    }

    return 0;
}