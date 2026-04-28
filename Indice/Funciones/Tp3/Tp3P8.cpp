// 9) Crear una función que dibuje un reloj de arena de tamaño variable.
//     *
//    ***
//   *****
//  *******
// *********

#include <iostream>
using namespace std;

void invertido (int base);

int main () 
{
    int base;
    cout << "Ingrese la base de su grafico" << endl;
    cin >> base;
    invertido (base);
    return 0;

}

void invertido (int base)
{
    int filas = (base + 1) / 2; // calcula la cantidad de filas
    // Recorre cada fila del triangulo, de 1 hasta la base
    for (int i = 1; i <= filas; i++)
    {
        // Imprime los espacios antes de los asteriscos (disminuyen con cada fila)
        for (int k = 0; k < filas - i; k++) 
            cout << " ";
        // Imprime los asteriscos de la fila (aumentan con cada fila)
        for (int k = 0; k < 2 * i-1; k++)
            cout << "*";
        cout << endl;
    }
}