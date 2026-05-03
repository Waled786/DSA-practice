// 3.	Implement a program that takes a 3x3 matrix and determine its transpose. Store the transpose in another matrix of and print the transposed matrix.
// 4.	Write a program to determine whether the matrix is symmetry or not?
#include <iostream>
using namespace std;    

int main(){
    int A[3][3], T[3][3];
    cout << "Enter the elements of the 3x3 matrix: " << endl;

    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << "Enter the value for row " << i + 1 << " and column " << j + 1 << ": ";
            cin >> A[i][j];         
        }
    }

    // Transpose the matrix
    for (int j = 0; j < 3; j++){
        for(int i = 0; i < 3; i++){
            T[j][i] = A[i][j];
        }
    }

    // Print the transposed matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << T[i][j] << " ";
        }
        cout << endl;
    }

    // Check if the matrix is symmetric
    bool isSymmetric = true;
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (A[i][j] != T[i][j]){
                isSymmetric = false;
                break;
            }
        }
        if (!isSymmetric){
            break;
        }
    }

    cout << endl;
    cout << "The matrix is " << (isSymmetric ? "a symmetric matrix." : "not a symmetric matrix.") << endl;


}
