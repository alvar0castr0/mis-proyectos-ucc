// Determinar si un número distinto de 0 es par o impar.

#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingrese un número distinto de 0: ";
    cin >> numero;

    if (numero % 2 == 0) {
        cout << numero << " es par." << endl;
    } else {
        cout << numero << " es impar." << endl;
    }

    return 0;
}
