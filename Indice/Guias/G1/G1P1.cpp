// Calcular la distancia recorrida (m) por un móvil con velocidad constante (m/s)
// durante un tiempo T (s), considerando MRU: D = V * T

#include <iostream>
using namespace std;

int main() {
    double velocidad, tiempo, distancia;

    cout << "Velocidad (m/s): ";
    cin >> velocidad;
    cout << "Tiempo (s): ";
    cin >> tiempo;

    distancia = velocidad * tiempo;

    cout << "Distancia recorrida: " << distancia << " m" << endl;

    return 0;
}
