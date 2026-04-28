// Determinar la cantidad de decenas y unidades que componen
// un número entero de 2 cifras.

#include <iostream>
using namespace std;

int main() {
    int numero, decenas, unidades;

    cout << "Ingrese un número de 2 cifras: ";
    cin >> numero;

    decenas = numero / 10;
    unidades = numero % 10;

    cout << "Decenas: " << decenas << endl;
    cout << "Unidades: " << unidades << endl;

    return 0;
}
