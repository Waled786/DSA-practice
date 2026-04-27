//4.	Write a function that counts how many times each character appears in a string and returns a map/dictionary. 


#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<char, int> countChars(string str){

    unordered_map<char, int>freq;

    for(int i=0; i < str.length(); i++){
        freq[str[i]]++;
    }
    return freq;
}


int main(){
    string str = "nabana";

    unordered_map<char, int> result = countChars(str);

    for(auto pair : result){
        cout << pair.first << " = " << pair.second << endl;
    }
    return 0;
}