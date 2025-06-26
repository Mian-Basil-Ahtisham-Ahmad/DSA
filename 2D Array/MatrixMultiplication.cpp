#include<iostream>
using namespace std; 

int main(){
    const int r1 = 2;
    const int c1 = 2;
    int A[r1][c1]; 
    cout << "Enter elements of matrix A:" << endl;
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c1; j++) {
            cin >> A[i][j];
        }
    }

    const int r2 = 2;
    const int c2 = 2;
    int B[r2][c2]; 
    cout << "Enter elements of matrix B:" << endl;
    for(int i = 0; i < r2; i++) {
        for(int j = 0; j < c2; j++) {
            cin >> B[i][j];
        }
    }

    if(c1 != r2) {
        cout << "Not possible" << endl;
        return 0; // Early return as matrix multiplication is not possible
    }

    int C[r1][c2] = {0}; // Initialize the resulting matrix with zeros
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            int value = 0; // Initialize the value to 0 for each element in the resulting matrix
            for(int k = 0; k < c1; k++) {
                value += A[i][k] * B[k][j];
            }
            C[i][j] = value;
        }
    }

    cout << "Resulting matrix C:" << endl;
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
