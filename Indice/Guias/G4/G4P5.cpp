// Ejercicio 5: Sistema de Ventas con Metas y Comisiones
#include <iostream>
using namespace std;

int main()
{
    double venta, totalVentas = 0, totalComisiones = 0;
    double ventaMaxima = -1;
    int posicion = 0, posMaxima = 0, ventasSobre1000 = 0;

    cout << "Ingrese ventas diarias (-1 para terminar):" << endl;

    while (true)
    {
        cout << "Venta: $";
        cin >> venta;

        if (venta == -1)
            break;

        posicion++;
        totalVentas += venta;

        double comision = 0;
        if (venta >= 500 && venta <= 1500)
            comision = venta * 0.05;
        else if (venta > 1500)
            comision = venta * 0.10;

        totalComisiones += comision;

        if (venta > ventaMaxima)
        {
            ventaMaxima = venta;
            posMaxima = posicion;
        }

        if (venta > 1000)
            ventasSobre1000++;
    }

    if (posicion == 0)
    {
        cout << "No se ingresaron ventas." << endl;
        return 0;
    }

    cout << "\n--- Resultados ---" << endl;
    cout << "Total recaudado en ventas: $" << totalVentas << endl;
    cout << "Total en comisiones: $" << totalComisiones << endl;
    cout << "Venta mas alta: $" << ventaMaxima << " (venta N° " << posMaxima << ")" << endl;

    if (ventasSobre1000 > 5)
        cout << "El vendedor ES Vendedor Estrella (" << ventasSobre1000 << " ventas > $1000)." << endl;
    else
        cout << "El vendedor NO es Vendedor Estrella (" << ventasSobre1000 << " ventas > $1000, necesita mas de 5)." << endl;

    return 0;
}
