// Write a program that creates a 2-D matrix, fill the matrix with user given values and determine then following:
// 	Whether the matrix is diagonal matrix or not?
// A diagonal matrix is a matrix in which the entries outside the main diagonal are all zero. The diagonal entries themselves may or may not be zero.
// 	Whether the matrix is identity matrix or not?
// The identity matrix or unit matrix of size n is the n × n square matrix with ones on the main diagonal and zeros elsewhere.
// 	Whether the matrix is symmetry or not?
// A symmetric matrix is a square matrix that is equal to its transpose.

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of the matrix: ";
    cin >> n;
    int arr[n][n];
 
    
    for (int i = 0 ; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << "Enter the value for now " << i + 1 << " and column " << j + 1 << ": ";
            cin >> arr[i][j];
        }
    }

    bool isDiagonal = true;
    bool isIdentity = true;
    bool isSymmetric = true;

    for(int i = 0; i < n; i++){
        for(int j =0; j < n; j++){
            // Check for diagonal matrix
            if(i != j && arr[i][j] != 0){
                isDiagonal = false;
            }

            // Check for identity matrix
            if( i == j && arr[i][j] != 1){
                isIdentity = false;
            }
            if(i != j && arr[i][j] != 0){
                isIdentity = false;
            }
            

            // Check for symmetric matrix
            if(arr[i][j] != arr[j][i]){
                isSymmetric = false;
            }
        }
    }


    cout << "The matrix is " << (isDiagonal ? "a diagonal matrix." : "not a diagonal matrix.") << endl;
    cout << "The matrix is " << (isIdentity ? "an identity matrix." : "not an identity matrix.") << endl;
    cout << "The matrix is " << (isSymmetric ? "a symmetric matrix." : "not a symmetric matrix.") << endl;

    return 0;
    
}