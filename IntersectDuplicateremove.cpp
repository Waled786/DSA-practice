// 8.	Write a function that finds the intersection of two arrays (common elements only, no duplicates in result). 

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> intersect(vector<int> arr1, vector<int> arr2){

    unordered_set<int> set1;
    unordered_set<int> resultSet;
    vector<int> result;

    for(int i = 0; i < arr1.size(); i++){
        set1.insert(arr1[i]);
    }   

    for(int i = 0; i < arr2.size(); i++){
        if(set1.count(arr2[i]) > 0){   // Just checking the presence of the element in set1, if it is present then we will add it to the resultSet which will automatically handle duplicates
            resultSet.insert(arr2[i]);
        }
    }
    for(int num : resultSet){
        result.push_back(num);
    }

    return result;
}


int main(){
    vector<int> arr1 = {1,2,2,3,4};
    vector<int> arr2 = {2,3,5};

    vector<int> ans = intersect(arr1, arr2);

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }                   
    return 0;
}