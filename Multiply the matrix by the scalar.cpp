#include <bits/stdc++.h>
#define ll long long
using namespace std;

void read_matrix(ll row, ll column, int** matrix)           // Get the matrix from the user.
{
    cout << "Enter The Elements of The Matrix: ";
    for (int i = 0; i < row ;i++){
        for (int j = 0; j < column ;j++){
            cin >> matrix[i][j];
        }
    }
}

void write_matrix(ll row, ll column, int** matrix)          // Print the matrix.
{
    cout << "Your Matrix is:";
    cout << endl;
    for (int i = 0; i < row ;i++){
        for (int j = 0; j < column ;j++){
            cout << matrix[i][j] << " \t ";
        }
        cout << endl;
    }
}

void multiply_by_scalar(ll row, ll column, int** matrix, ll scalar)         // Multiply the matrix by the scalar.
{
    for (int i = 0; i < row ;i++){
        for (int j = 0; j < column ;j++){
            matrix[i][j] *= scalar;
        }
    }
}

int main ()
{
    cout << "Ahlan Ya User Ya Habibi ......" << endl;
    ll row, column, scalar;
    cout << "Enter the rows:";
    cin >> row;
    cout << "Enter the columns:";
    cin >> column;
    cout << endl;

    // Allocate memory for the matrix.
    int** matrix = new int*[row];
    for (int i = 0; i < row; i++) {
        matrix[i] = new int[column];
    }

    read_matrix(row, column, matrix);
    cout << endl;
    write_matrix(row, column, matrix);

    cout << endl << "Enter the scalar: ";
    cin >> scalar;
    cout << endl;

    multiply_by_scalar(row, column, matrix, scalar);
    write_matrix(row, column, matrix);

    // Free dynamically allocated memory
    for (int i = 0; i < row ;i++){
        delete[] matrix[i];
    }
    delete[] matrix;

    cout << endl << "# ===== Thanks For Using Our Programme ===== #" << endl;
    return 0;
}
