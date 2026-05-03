// Write a C++ program that takes a fractional value as input and implement following functions on it.
// a.	int truncate(float num)
// b.	int round(float num)
// c.	int ceiling(float num)
// d.	int floor(float num)



#include <iostream>
using namespace std;

int myTruncate(float m){
    return (int)m;
}

int myRound(float m){
    return int (m + 0.5);
} 

int myCeiling(float m){
    int n = int (m);
    if (m > n){
        return n + 1;
    }else{
        return n;
    }
}

int myFloor(float m){
    return (int)m;
}

int main(){
    double m;
    cout << "Please provide your value that you want to callout regarding the truncation and thing:";
    cin >> m;
    
    cout << "The truncate value of input of: " << myTruncate(m);
    cout << "The round value of input of: " << myRound(m);
    cout << "The ceiling value of input of: " << myCeiling(m);
    cout << "The floor value of input of: " << myFloor(m);

    return 0;
}