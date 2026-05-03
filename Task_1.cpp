// 1.	Write a program that stores marks of 3 students for 5 tests in a two dimensional array such that each row in the array represents test scores for one student. Display the average of each student’s test scores on console.
// 2.	Modify the above program such that it calculates and display average marks of each test.
#include <iostream>
using namespace std;

int main(){

    int arr[3][5];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            cout << "Enter the no of marks for student" << i + 1 << " for test " << j + 1 << ": ";
            cin >> arr[i][j]; 

        }
    }

    for (int i = 0; i < 3; i++){
            int sum = 0;
        for (int j = 0; j < 5; j++){
            sum += arr[i][j];
        }
        int average = sum / 5;
        cout << "The average score of Student: " << i + 1 << " is " << average << endl;
    }

    for(int j = 0; j < 5; j++){
        int sum = 0;
        for(int i = 0; i < 3;i++){
            sum += arr[i][j];
        }
        int average = sum / 3;
        cout << "The average score of Test: " << j + 1 << " is " << average << endl;   
    }


    return 0;
}