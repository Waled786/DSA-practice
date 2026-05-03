// Implement a program that takes two 3x3 matrices, populate the matrices by user input and display their sum. Create two functions for this task, one is to populate matrices and other is to compute sum.
// void fillMatrix(int matrix[][COLS], int rows);

// void displaySum(const int mat1[][COLS], int rows1, const int mat2[][COLS], int rows2);



#include <iostream>
using namespace std;


int main(){
    int mat1[3][3], mat2[3][3], sum[3][3];

    void fillMatrix(int matrix[][3], int rows);

    void displaySum(const int mat1[][3], int rows1, const int mat2[][3], int rows2);

    cout << "Enter the values for the first matrix: " << endl;
    fillMatrix(mat1, 3);
    cout << "Enter the values for the second matrix: " << endl;
    fillMatrix(mat2, 3);
    displaySum(mat1, 3, mat2, 3);

    return 0;
}

void fillMatrix(int matrix[][3], int rows){
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < rows; j++){
            cout << "Enter the value for row " << i + 1 << " and column " << j + 1 << ": ";
            cin >> matrix[i][j];
        }
    }
}


void displaySum(const int mat1[][3], int rows1, const int mat2[][3], int rows2){
    int sum[3][3];
    for (int i = 0; i < rows1; i++){
        for(int j = 0; j< rows1; j++){
            sum[i] [j] = mat1[i][j] + mat2[i][j];   
        }

    }
    cout << "The sum of the two matrices is: " << endl;
    for (int i = 0; i< rows1; i++){
        for(int j = 0; j < rows1; j++){
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

}    