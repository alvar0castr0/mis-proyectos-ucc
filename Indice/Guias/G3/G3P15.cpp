// 15) Ingresar la cantidad de trabajadores de la empresa. Posteriormente, ingresar sus
// sueldos. Calcular el monto que la empresa invierte en sueldos.

#include <iostream>
using namespace std;

int main ()
{
    int trabajadores;
    double sueldo = 0;
    cout << "Ingrese la cantidad de trabajadores" << endl;
    cin >> trabajadores; 
    int s;
    s = 0;

    for (int i = 1; i <= trabajadores; i++)
    {
        cout << "Ingrese el sueldo del trabajador" << endl;
        cin >> sueldo;
        s += sueldo;
    }
    cout << "La empresa invierte $" << s << " en sueldos";
}