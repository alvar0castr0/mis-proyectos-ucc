// Ejercicio 1: El Simulador de Cajero con Optimizacion de Billetes
#include <iostream>
using namespace std;

int main ()
{
    int monto;
    int denominacion [4] = {1000, 500, 200, 100}, contador[4] = {0,    0,   0,   0  };
    cout << "Ingrese el monto (multiplo de 10) que quiere retirar de su cuenta" << endl;
    cin >> monto;

    if (monto % 10 != 0)
    {
        cout << "Monto no valido";
        return 0;
    }

    for (int i = 0; i < 4; i++)
    { 
        while (monto >= denominacion[i])
        {
            monto -= denominacion[i];
            contador[i]++;
        }
    }
    for (int i = 0; i < 4; i++)
    {
        if (contador[i] > 0)
        {cout << "Billetes de $" << denominacion[i] << ": " << contador[i] << endl;}
    }

    cout << "¿Desea realizar otro retiro?" << endl;
    
    return 0;
}