/*Hacer un programa que sume los números
 pares comprendidos entre 100 y 200. */

#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    for (int num = 100; num <= 200; num++)
    {
        if (num % 2 == 0)
        {
            sum += num;
        }
    }
    cout << "la suma de los numeros pares entre 100 y 200 es: " << sum << endl;
    return 0;
}
