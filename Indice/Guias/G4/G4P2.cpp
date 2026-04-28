// Ejercicio 2: El Radar de Velocidad y Promedios Moviles
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int velocidad, anterior = -1, total = 0, infractores = 0;
    int velMax = -1, velMin = -1;
    int maxAceleracion = 0;

    cout << "Ingrese velocidades de vehiculos (0 para terminar):" << endl;

    while (true)
    {
        cout << "Velocidad: ";
        cin >> velocidad;

        if (velocidad == 0)
            break;

        total++;

        if (velMax == -1 || velocidad > velMax)
            velMax = velocidad;
        if (velMin == -1 || velocidad < velMin)
            velMin = velocidad;

        if (velocidad > 60)
            infractores++;

        if (anterior != -1)
        {
            int aceleracion = abs(velocidad - anterior);
            if (aceleracion > maxAceleracion)
                maxAceleracion = aceleracion;
        }

        anterior = velocidad;
    }

    if (total == 0)
    {
        cout << "No se ingresaron vehiculos." << endl;
        return 0;
    }

    cout << "\n--- Resultados ---" << endl;
    cout << "Total de vehiculos: " << total << endl;
    cout << "Vehiculos que superaron 60 km/h: " << infractores << endl;
    cout << "Velocidad maxima: " << velMax << " km/h" << endl;
    cout << "Velocidad minima: " << velMin << " km/h" << endl;
    cout << "Mayor aceleracion entre consecutivos: " << maxAceleracion << " km/h" << endl;
    cout << "Porcentaje de infractores: " << (infractores * 100.0 / total) << "%" << endl;

    return 0;
}
