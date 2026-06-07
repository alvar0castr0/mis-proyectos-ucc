#include <iostream>
using namespace std;

float calcularPromedio (float suma, int cantidad);
float calcularPorcentaje (int parte, int total);

int main ()
{
    int sueldo = 0;
    float suma = 0;
    int cantidad = 0, basico = 0, medio = 0, alto = 0;

    while (true)
    {
        cout << "Ingrese el sueldo de sus empleados" << endl;
        cin >> sueldo;

        if (sueldo < 0) break;

        if (sueldo < 500000)
        {
            basico++;
        }
        else if (sueldo >= 500000 && sueldo <= 1000000)
        {
            medio++;
        }
        else if (sueldo > 1000000) {alto++;}

        cantidad++;
        suma += sueldo;
    }

    int total = cantidad;
    int parte = alto;

    cout << "El porcentaje que cobra mas de 1.000.000 es: " << calcularPorcentaje(parte, total) << "%" << endl;
    cout << "El sueldo promedio es: " << calcularPromedio(suma, cantidad) << "$" << endl;
    cout << basico << " empleados cobran menos de $500.000 " << endl;
    cout << medio << " empleados cobran entre $500.000 y $1.000.000 " << endl;
    cout << alto << " empleados cobran mas de $1.000.000 " << endl;

}

float calcularPromedio(float suma, int cantidad)
{
    double promedio = suma / cantidad;
    return promedio;
}

float calcularPorcentaje(int parte, int total)
{
    float porcentaje = ((float)parte / total) * 100;
    return porcentaje;
}