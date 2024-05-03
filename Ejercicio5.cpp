/*Para un grupo de clase de 8 estudiantes, realice un programa que
permita calcular y dar como salida lo siguiente:
✓ Cantidad de alumnos aprobados
✓ Cantidad de alumnos reprobados
✓ Promedio general del grupo*/

#include <iostream>

using namespace std;

int main()
{
    const int nEstudiantes = 8;
    int aprob = 0, reprob = 0;
    float nota, sumNotas = 0, promed;

    for (int i = 1; i <= nEstudiantes; i++)
    {
        cout << "Ingrese la nota del estudiante " << i << ": ";
        cin >> nota;
        sumNotas += nota;

        if (nota >= 60)
        {
            aprob++;
        }
        else
        {
            reprob++;
        }
    }

    promed = sumNotas / nEstudiantes;

    cout << "Cantidad de alumnos aprobados: " << aprob << endl;
    cout << "Cantidad de alumnos reprobados: " << reprob << endl;
    cout << "Promedio general del grupo: " << promed << endl;

    return 0;
}