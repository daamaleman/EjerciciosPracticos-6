/*Dado un número natural n se desea calcular la suma de los números naturales
 desde 1 hasta n. Codifica el programa que resuelva este planteamiento.*/

#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Escriba un numero entero: ";
    cin >> num;

    int suma = 0;
    for (int i = 1; i <= num; i++)
    {
        suma += i;
    }

    cout << " la suma desde 1 a el numero  " << num << " es : " << suma << endl;

    return 0;
}
