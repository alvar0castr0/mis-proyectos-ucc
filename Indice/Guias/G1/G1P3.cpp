// Calcular el puntaje final de postulantes según respuestas correctas (+4),
// incorrectas (-1) y en blanco (0).

#include <iostream>
using namespace std;

int main() {
    int correctas, incorrectas, blanco;
    int puntaje;

    cout << "Respuestas correctas: ";
    cin >> correctas;
    cout << "Respuestas incorrectas: ";
    cin >> incorrectas;
    cout << "Respuestas en blanco: ";
    cin >> blanco;

    puntaje = (correctas * 4) + (incorrectas * -1) + (blanco * 0);

    cout << "Puntaje final: " << puntaje << endl;

    return 0;
}
