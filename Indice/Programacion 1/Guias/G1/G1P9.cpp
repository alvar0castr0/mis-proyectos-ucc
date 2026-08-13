// Determinar si el promedio de producción diaria de la última semana
// supera las 100, 200 o 300 unidades.

#include <iostream>
using namespace std;

int main() {
    double produccion[7], suma = 0, promedio;

    cout << "Ingrese la produccion de cada dia de la semana:" << endl;
    for (int i = 0; i < 7; i++) {
        cout << "Dia " << i + 1 << ": ";
        cin >> produccion[i];
        suma += produccion[i];
    }

    promedio = suma / 7.0;
    cout << "Promedio de produccion: " << promedio << " unidades" << endl;

    if (promedio > 300) {
        cout << "El promedio supera las 300 unidades." << endl;
    } else if (promedio > 200) {
        cout << "El promedio supera las 200 unidades." << endl;
    } else if (promedio > 100) {
        cout << "El promedio supera las 100 unidades." << endl;
    } else {
        cout << "El promedio no supera las 100 unidades." << endl;
    }

    return 0;
}
