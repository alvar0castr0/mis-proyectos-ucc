// 10) Crear una función que dibuje una letra X de tamaño variable.

#include <iostream>
using namespace std; 

void tam (int x);

int main () 
{
    int x;
    cout << "Ingrese el tamaño de su x" << endl;
    cin >> x;
    tam (x);
    return 0;

}

void tam (int x)
{
    int mitad = x / 2;

    // Mitad de arriba (incluyendo el centro)
    for (int i = 0; i < mitad; i++)
    {
        for (int k = 0; k < i; k++)
            cout << " ";
        cout << "*";
        for (int k = 0; k < x - 2 * i - 2; k++)
            cout << " ";
        cout << "*";
        cout << endl;
    }

    // Fila del centro
    for (int k = 0; k < mitad; k++)
        cout << " ";
    cout << "*" << endl;

    // Mitad de abajo (espejo de la de arriba)
    for (int i = mitad - 1; i >= 0; i--)
    {
        for (int k = 0; k < i; k++)
            cout << " ";
        cout << "*";
        for (int k = 0; k < x - 2 * i - 2; k++)
            cout << " ";
        cout << "*";
        cout << endl;
    }
}