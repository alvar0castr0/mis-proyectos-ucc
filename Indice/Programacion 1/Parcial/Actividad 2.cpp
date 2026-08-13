#include <iostream>
using namespace std;

float calcularPromedio(int suma, int cantidad);
int calcularMayor(int actual, int mayor);

int main ()
{
    int numero, mayor = 0;
    double cantidad = 0, suma = 0;

    while (true)
    {
        cout << "Ingrese un numero (entero positivo)" << endl;
        cin >> numero;
        if (numero == 0)
        {break;}
        mayor = calcularMayor(numero, mayor);
        suma += numero;
        cantidad++;
    }

    cout << cantidad << " numeros ingresados" << endl;
    cout << calcularPromedio(suma, cantidad) << " es el promedio de los numeros ingresados" << endl;
    cout << mayor << " es el numero mas grande ingresado" << endl;

    return 0;
}

int calcularMayor (int actual, int mayor)
{
    if (actual >= mayor)
    {
        return actual;
    }
    else
    {
        return mayor;
    }
}

float calcularPromedio (int suma, int cantidad)
{
   return (float)suma / cantidad;
}
