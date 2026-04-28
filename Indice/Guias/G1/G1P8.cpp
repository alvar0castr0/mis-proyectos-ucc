// Determinar si una persona puede acceder a un beneficio impositivo,
// considerando que debe tener edad menor a 18 años.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string nombre;
    int anioNacimiento, edad;
    const int ANIO_ACTUAL = 2026;

    cout << "Nombre: ";
    cin >> nombre;
    cout << "Año de nacimiento: ";
    cin >> anioNacimiento;

    edad = ANIO_ACTUAL - anioNacimiento;

    cout << "Edad: " << edad << " años" << endl;

    if (edad < 18) {
        cout << nombre << " puede acceder al beneficio impositivo." << endl;
    } else {
        cout << nombre << " no puede acceder al beneficio impositivo." << endl;
    }

    return 0;
}
