// Calcular el sueldo de un empleado en base a la cantidad de horas trabajadas
// y el valor hora.

#include <iostream>
using namespace std;

int main() {
    double horas, valorHora, sueldo;

    cout << "Horas trabajadas: ";
    cin >> horas;
    cout << "Valor por hora: ";
    cin >> valorHora;

    sueldo = horas * valorHora;

    cout << "Sueldo: " << sueldo << endl;

    return 0;
}
