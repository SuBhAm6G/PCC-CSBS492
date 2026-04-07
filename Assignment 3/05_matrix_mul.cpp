// Write a program to implement matrix multiplication
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int r1, c1, r2, c2;

    // Input dimensions
    cout << "Enter rows and cols of Matrix A: ";
    cin >> r1 >> c1;

    cout << "Enter rows and cols of Matrix B: ";
    cin >> r2 >> c2;

    // Check multiplication condition
    if(c1 != r2){
        cout << "Matrix multiplication not possible!\n";
        return 0;
    }

    vector<vector<int>> A(r1, vector<int>(c1,0));
    vector<vector<int>> B(r2, vector<int>(c2,0));
    vector<vector<int>> C(r1, vector<int>(c2,0));

    // Input Matrix A
    cout << "Enter Matrix A:\n";
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c1; j++){
            cin >> A[i][j];
        }
    }

    // Input Matrix B
    cout << "Enter Matrix B:\n";
    for(int i = 0; i < r2; i++){
        for(int j = 0; j < c2; j++){
            cin >> B[i][j];
        }
    }

    //Multiplication
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c2; j++){
            for(int k = 0; k < c1; k++){
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }

    // Output result
    cout << "Resultant Matrix:\n";
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c2; j++){
            cout << C[i][j] << " ";
        }
        cout << "\n";
    }


    return 0;
}