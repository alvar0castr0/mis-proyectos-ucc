// Obtener el promedio simple de un estudiante a partir de sus 4 notas parciales.

#include <iostream>
using namespace std;

int main() {
    double nota1, nota2, nota3, nota4, promedio;

    cout << "Nota 1: ";
    cin >> nota1;
    cout << "Nota 2: ";
    cin >> nota2;
    cout << "Nota 3: ";
    cin >> nota3;
    cout << "Nota 4: ";
    cin >> nota4;

    promedio = (nota1 + nota2 + nota3 + nota4) / 4.0;

    cout << "Promedio: " << promedio << endl;

    return 0;
}
