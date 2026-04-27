//Write a function that takes an array and returns the maximum sum of any contiguous subarray.

#include <iostream>
#include <vector>
using namespace std;


int maxSubarray(vector<int> arr){
    int CurrentSum = arr[0];
    int MaxSum = arr[0];

    for(int i=1; i < arr.size(); i++){
        CurrentSum = max(arr[i], CurrentSum + arr[i]);
        MaxSum = max(CurrentSum, MaxSum);
    }

    return MaxSum;

}

int main(){
    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};

    cout << "Max Subarray sub is: " << maxSubarray[arr[i]];
    return 0;
}