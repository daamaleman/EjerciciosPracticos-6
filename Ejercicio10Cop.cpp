/*Implementa un programa que solicite al usuario ingresar una matriz
y luego calcule su transposición. La transposición de una matriz
se realiza intercambiando
filas por columnas. Imprime la matriz transpuesta como salida.*/

#include <iostream>

using namespace std;

int main()
{
    int rows, cols; // dimensions of the matrix

    // input the dimensions of the matrix
    cout << "Enter the number of rows for the matrix: ";
    cin >> rows;
    cout << "Enter the number of columns for the matrix: ";
    cin >> cols;

    // input the elements of the matrix
    int matrix[rows][cols];
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrix[i][j];
        }
    }

    // transpose the matrix
    int transposed[cols][rows];
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            transposed[i][j] = matrix[j][i];
        }
    }

    // output the transposed matrix
    cout << "The transposed matrix is:" << endl;
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout << transposed[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}