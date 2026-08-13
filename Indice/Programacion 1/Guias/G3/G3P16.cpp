// 16) Permite al usuario ingresar un número. Verifica si el número es o no primo.
// Imprime por pantalla el texto "Es primo" o "No es Primo".
// c) Solución 2: Emplea una bandera que cambia de estado si el número NO es primo.

#include <iostream>
using namespace std;

int main ()
{
    int numero;
    cout << "Ingrese un numero" << endl;
    cin >> numero;
    bool esPrimo = true;

    for (int i = 2; i < numero - 1; i++)
    {
        if (numero % i == 0) 
        {
            esPrimo = false;
            break;
        }
    }

    if (esPrimo && numero > 1)
    {
        cout << numero << " es primo" << endl;
    }
    else 
    {
        cout << numero << " no es primo" << endl;

    }
    return 0;
}