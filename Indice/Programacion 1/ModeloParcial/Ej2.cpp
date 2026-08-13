// Ejercicio 2:
// Crear una funcion "condicion(double nota1, double nota2, double asistencia)"
// que devuelva la condicion del alumno (como en Tp1P7):
//   - "Promocionado" si ambas notas >= 7 y asistencia >= 80
//   - "Regular"      si ambas notas >= 5 y asistencia >= 60
//   - "Libre"        en cualquier otro caso
//
// En el main, ingresar los datos de N alumnos.
// Usar do-while para validar que las notas esten entre 0 y 10 y la asistencia entre 0 y 100.
// Al finalizar mostrar: cantidad de Promocionados, Regulares y Libres, y el promedio general.

#include <iostream>
using namespace std;

string condicion(double nota1, double nota2, double asistencia);

int main()
{
    int cantidad;
    double nota1, nota2, asistencia;
    int promo = 0, regular = 0, libre = 0;
    double sumaNotas = 0;

    cout << "Ingrese la cantidad de alumnos: ";
    cin >> cantidad;

    for (int i = 1; i <= cantidad; i++)
    {
        cout << "\n--- Alumno " << i << " ---" << endl;

        do {
            cout << "Nota 1 (0-10): ";
            cin >> nota1;
        } while (nota1 < 0 || nota1 > 10);

        do {
            cout << "Nota 2 (0-10): ";
            cin >> nota2;
        } while (nota2 < 0 || nota2 > 10);

        do {
            cout << "Asistencia % (0-100): ";
            cin >> asistencia;
        } while (asistencia < 0 || asistencia > 100);

        string cond = condicion(nota1, nota2, asistencia);
        cout << "Condicion: " << cond << endl;

        sumaNotas += nota1 + nota2;
        if (cond == "Promocionado") promo++;
        else if (cond == "Regular") regular++;
        else libre++;
    }

    cout << "\n--- Resultados finales ---" << endl;
    cout << "Promocionados: " << promo << endl;
    cout << "Regulares    : " << regular << endl;
    cout << "Libres       : " << libre << endl;
    cout << "Promedio general: " << sumaNotas / (cantidad * 2) << endl;

    return 0;
}

string condicion(double nota1, double nota2, double asistencia)
{
    if (nota1 >= 7 && nota2 >= 7 && asistencia >= 80)
        return "Promocionado";
    if (nota1 >= 5 && nota2 >= 5 && asistencia >= 60)
        return "Regular";
    return "Libre";
}
