// 9.	Write a function that returns the longest substring without repeating characters. 

#include <iostream>
#include <unordered_set>
using namespace std;

int maxLength(string str){
    

    int left = 0;
    int maxLength = 0;
    unordered_set<char> seen;

    for(int right = 0; right < str.length(); right++){
        while(seen.count(str[right]) > 0){
            seen.erase(str[left]);
            left++;
        }
        seen.insert(str[right]);
        maxLength = max(maxLength, right - left + 1);
    }

    return maxLength;
}
int main(){
    string str = "abcabcbb";
    cout << "The length of the longest substring without repeating characters is: " << maxLength(str);

    return 0;
}