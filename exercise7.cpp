/*5 - A: Write a program to calculate mean and standard deviation of a one 
dimensional data set (assume data has n entries).*/

/*5 - B: Write a program to take transpose of a matrix and store the 
result in a new matrix. The function prototype will be:

    void transpose(int mat[][MaxDim], int mat_rows, int mat_cols, int transpose[][MaxDim])

You can also assume that MaxDim > mat_rows && MaxDim > mat_cols 
*/

/*5 - C: Write a C++ program to sort the data set in one dimensional 
array in ascending order.*/

#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

void stats(double *arr, int n){
    double mean = 0;
    for(int i = 0; i < n; i++) mean += arr[i];

    cout << "Mean: " << (mean /= n) << '\n';

    double std = 0;
    for(int i = 0; i < n; i++) std += pow( (arr[i] - mean), 2 );
    
    std /= n;
    std = sqrt(std);

    cout << "Standard Deviation: " << std << '\n';
}

#define MaxDim 3

void transpose(int mat[][MaxDim], int mat_rows, int mat_cols, int transpose[][MaxDim]){
    for(int i = 0; i < mat_rows; i++){
        for(int x = 0; x < mat_cols; x++){
            transpose[i][x] = mat[x][i];
        }
    }
}

void sort(double *arr, int n){
    for(int i = 0; i < n; i++){
        int min = arr[i], index = i;
        for(int x = i + 1; x < n; x++){
            if(arr[x] < min){
                min = arr[x];
                index = x;
            }
        }

        if(index != i){
            int temp = arr[i];
            arr[i] = arr[index];
            arr[index] = temp;
        }
    }
}

int main(int argc, char *argv[]){
    double A[5] = {5, 4, 3, 2, 1};
    sort(A, 5);

    for(int i = 0; i < 5; i++) cout << A[i] << ' ';
    cout << '\n';
    stats(A, 5);

    int B[3][3], C[3][3];

    for(int i = 0; i < 3; i++){
        for(int x = 0; x < 3; x++){
            B[i][x] = rand() % 10;
        }
    }

    cout << "Initial matrix:\n";
    for(int i = 0; i < 3; i++){
        for(int x = 0; x < 3; x++){
            cout << B[i][x] << ' ';
        }

        cout << '\n';
    }

    transpose(B, 3, 3, C);

    cout << "transposed matrix:\n";
    for(int i = 0; i < 3; i++){
        for(int x = 0; x < 3; x++){
            cout << C[i][x] << ' ';
        }

        cout << '\n';
    }

    return 0;
}