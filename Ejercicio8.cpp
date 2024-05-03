/*Crea un programa que permita al usuario ingresar dos
vectores de la misma longitud y luego calcule su producto punto.
Muestra el resultado al finalizar el cálculo.*/

#include <iostream>

using namespace std;

int main()
{
    int tam;
    int producto = 0;
    int vect1[tam];
    int vect2[tam];
    cout << "Bienvenido al programa de suma de vectores" << endl;
    cout << "Ingrese el tamaño para el arreglo:  ";
    cin >> tam;

    for (int i = 0; i < tam; i++)
    {
        cout << "En la posicion [" << i << "] ingrese un numero: ";
        cin >> vect1[i];
    }
    cout << endl;
    cout << "Arreglo #2" << endl
         << endl;
    for (int i = 0; i < tam; i++)
    {
        cout << "En la posicion [" << i << "] ingrese un numero: ";
        cin >> vect2[i];
    }
    for (int i = 0; i < tam; i++)
    {
        producto += vect1[i] * vect2[i];
    }
    cout << "el producto de los dos vectores es: " << producto;

    return 0;
}