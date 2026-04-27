//Write a function that rotates an array to the right by k steps.

#include <iostream>
#include <vector>
using namespace std;

vector<int> rotateArray(vector<int>arr, int k){
    

    int n = arr.size();

    k = k % n; // In case k is greater than n
    
    vector<int> result(n);
    
    for(int i = 0; i < n; i++){
        int newIndex = (i + k) % n;
        result[newIndex] = arr[i];
    }
    
    return result;
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7};
    int k = 4;

    vector<int> ans = rotateArray(arr, k);

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }

    return 0;
}