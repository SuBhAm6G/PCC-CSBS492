// 4.	Write a program to implement matrix transpose.
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int rows,cols;
    cout << "Enter no. of rows and cols: ";
    cin >> rows >> cols;
    if (rows <= 0 || cols <= 0) {
        cout << "Invalid dimensions!" << endl;
        return 1;
    }
    
    vector<vector<int>> matrix(rows, vector<int>(cols,0));
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << "Enter element for position " << i << ", " << j << ": ";
            cin >> matrix[i][j];
        }
    }
    cout << "Original matrix: " << endl;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }

    vector<vector<int>> transpose(cols, vector<int>(rows,0));

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            transpose[j][i]=matrix[i][j];
        }
    }
    cout << "Transposed matrix: " << "\n";
    for(int i = 0; i < cols; i++){
        for(int j = 0; j < rows; j++){
            cout << transpose[i][j] << " ";
        }
        cout << "\n";
    }
    

    return 0;
}