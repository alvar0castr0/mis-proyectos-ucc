// 13) Permita ingresar 10 notas por teclado, y que determine si está aprobado (4 o más) o no.
// Contabilice la cantidad de aprobados, la cantidad de desaprobados, y el promedio.

#include <iostream>
using namespace std;

int main ()
{
    int nota, aprobado = 0, desaprobado = 0;
    double n = 0;
    for (int i = 0; i < 10; i++)
    {
        cout << "Ingrese sus notas" << endl;
        cin >> nota;
        n += nota;
        if (nota >= 4)
        {
            cout << "Aprobado" << endl;
            aprobado++;
        }
        if (nota < 4)
        {
            cout << "Desaprobado" << endl;
            desaprobado++;
        }
    }
    cout << "Desaprobados: " << desaprobado << endl;
    cout << "aprobado: " << aprobado << endl;
    cout << "Promedio: " << n / 10;
    
}