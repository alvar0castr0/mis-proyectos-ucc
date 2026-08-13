// 10) Determinar el mayor y el menor entre diez números enteros ingresados por teclado.

#include <iostream>
using namespace std;

int main()
{
    int numero, mayor, menor;

    cout << "Ingrese un numero: ";
    cin >> numero;
    mayor = numero;
    menor = numero;

    for (int i = 1; i < 10; i++)
    {
        cout << "Ingrese un numero: ";
        cin >> numero;
        if (numero > mayor)
        {
            mayor = numero;
        }
        else if (numero < menor)
        {
            menor = numero;
        }
    }
    cout << "El mayor: " << mayor << " El menor es: " << menor << endl;
}
