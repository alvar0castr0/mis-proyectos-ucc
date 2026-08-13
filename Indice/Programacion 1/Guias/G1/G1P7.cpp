// Mostrar un mensaje de ALARMA si la temperatura medida en un proceso
// supera los 80°C.

#include <iostream>
using namespace std;

int main() {
    double temperatura;

    cout << "Temperatura del proceso (°C): ";
    cin >> temperatura;

    if (temperatura > 80) {
        cout << "*** ALARMA: temperatura supera los 80°C ***" << endl;
    } else {
        cout << "Temperatura normal." << endl;
    }

    return 0;
}
