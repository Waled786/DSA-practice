//Write a function that removes duplicates from a sorted array without extra space and returns the new length.


#include <iostream>
#include <vector>
using namespace std;

int duplicateRemove(vector<int>& arr){

    if(arr.size() == 0){
        return 0;
    }

    int i = 0;
    for(int j = 1; j < arr.size(); j++){
        if(arr[i] != arr[j]){
            i++;
            arr[i] = arr[j];
        }

    }

    return i + 1;
}


int main(){
    vector<int> arr =  {1,1,2,3,4,5,5,6,7};

    int length = duplicateRemove(arr);

    for(int k = 0; k < length; k++){
        cout << arr[k] << " ";
    }
    
    return 0;
}