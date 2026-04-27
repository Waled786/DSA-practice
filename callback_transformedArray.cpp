//10.	Write a function that implements your own version of map() (takes an array + callback, returns transformed array).

#include <iostream>
#include <vector>
using namespace std;

vector<int> mappy(vector<int> arr, int callback(int)){
    
    vector<int> result; 

    for(int i = 0; i < arr.size(); i++){
        result.push_back(callback(arr[i]));
    }
    
    return result;
}

int doubleValue(int x){
    return x * 2; // Example transformation: doubling the value
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    
    vector<int> ans = mappy(arr, doubleValue);

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }

    return 0;
}