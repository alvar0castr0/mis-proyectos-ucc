// 7) Escribir una función que permita determinar la condición si un alumno en su materia.Debe ingresar como datos las dos notas de parciales y la asistencia de un alumno.

#include <iostream>
using namespace std;

string condicion (double nota1, double nota2, double asistencia)
{
    if (nota1 >= 7 && nota2 >= 7 && asistencia >= 80)
    {
        return "Promocionado";
    }
    else{
        if (nota1 >= 5 && nota2 >= 5 && asistencia >= 60) {
            return "Regular";
        }
        return "Libre";
    }
}

int main ()
{
    double nota1, nota2, asistencia;
    cout << "Ingrese su primera calificacion" << endl;
    cin >> nota1;
    cout << "Ingrese su segunda calificacion" << endl;
    cin >> nota2;
    cout << "Ingrese su asistencia en %" << endl;
    cin >> asistencia;

    string r = condicion(nota1, nota2, asistencia);
    cout << "Su condicion es: " << r << endl;
    return 0;
}