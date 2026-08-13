// Ejercicio 3: Patrones Geometricos Dinamicos - El Reloj de Arena
#include <iostream>
using namespace std;

int main()
{
    int n;

    do
    {
        cout << "Ingrese un numero impar mayor a 3: ";
        cin >> n;
    } while (n % 2 == 0 || n <= 3);

    // Mitad superior (de N hasta 1, de 2 en 2)
    for (int estrellas = n; estrellas >= 1; estrellas -= 2)
    {
        int espacios = (n - estrellas) / 2;
        for (int i = 0; i < espacios; i++)
            cout << " ";
        for (int i = 0; i < estrellas; i++)
        {
            cout << "*";
            if (i < estrellas - 1)
                cout << " ";
        }
        cout << endl;
    }

    // Mitad inferior (de 3 hasta N, de 2 en 2)
    for (int estrellas = 3; estrellas <= n; estrellas += 2)
    {
        int espacios = (n - estrellas) / 2;
        for (int i = 0; i < espacios; i++)
            cout << " ";
        for (int i = 0; i < estrellas; i++)
        {
            cout << "*";
            if (i < estrellas - 1)
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
