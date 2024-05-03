/*Crea un programa que permita al usuario ingresar dos vectores de la misma
longitud y luego calcule su producto punto.
Muestra el resultado al finalizar el cálculo.*/

#include <iostream>

using namespace std;

int main()
{
    int n; // length of the vectors
    cout << "Enter the length of the vectors: ";
    cin >> n;

    int vector1[n];     // first vector
    int vector2[n];     // second vector
    int dotProduct = 0; // variable to store the dot product

    // input the elements of the first vector
    cout << "Enter the elements of the first vector: ";
    for (int i = 0; i < n; i++)
    {
        cin >> vector1[i];
    }

    // input the elements of the second vector
    cout << "Enter the elements of the second vector: ";
    for (int i = 0; i < n; i++)
    {
        cin >> vector2[i];
    }

    // calculate the dot product
    for (int i = 0; i < n; i++)
    {
        dotProduct += vector1[i] * vector2[i];
    }

    // output the dot product
    cout << "The dot product of the two vectors is: " << dotProduct << endl;

    return 0;
}