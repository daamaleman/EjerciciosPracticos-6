/*Desarrolla un programa que solicite al usuario ingresar dos vectores de
igual longitud y luego calcule la suma de ambos vectores.
El resultado debe mostrarse en un tercer vector.*/

#include <iostream>

using namespace std;

int main()
{
    int vector1[10];   // first vector
    int vector2[10];   // second vector
    int sumVector[10]; // vector to store the sum of the two vectors

    // input the elements of the first vector
    cout << "Enter the elements of the first vector: ";
    for (int i = 0; i < 10; i++)
    {
        cin >> vector1[i];
    }

    // input the elements of the second vector
    cout << "Enter the elements of the second vector: ";
    for (int i = 0; i < 10; i++)
    {
        cin >> vector2[i];
    }

    // calculate the sum of the two vectors
    for (int i = 0; i < 10; i++)
    {
        sumVector[i] = vector1[i] + vector2[i];
    }

    // output the sum vector
    cout << "The sum of the two vectors is: ";
    for (int i = 0; i < 10; i++)
    {
        cout << sumVector[i] << " ";
    }
    cout << endl;

    return 0;