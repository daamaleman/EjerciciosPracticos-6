/*Realice un programa que permita calcular y dar como salida el
promedio general de una sección, tomando en cuenta que está
compuesta por 10 estudiantes y que se tiene la nota de cada uno de
ellos.*/

#include <iostream>

using namespace std;

int main()
{
    int nEstudiantes = 10;
    float nota, sumNotas = 0, promed;

    for (int i = 1; i <= nEstudiantes; i++)
    {
        cout << "Ingrese la nota del estudiante " << i << ": ";
        cin >> nota;
        sumNotas += nota;
    }

    promed = sumNotas / nEstudiantes;
    cout << "El promedio general de la sección es: " << promed << endl;

    return 0;
}