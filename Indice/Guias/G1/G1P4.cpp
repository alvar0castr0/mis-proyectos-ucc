// Calcular el puntaje total de un equipo de fútbol según partidos ganados (3),
// empatados (1) y perdidos (0).

#include <iostream>
using namespace std;

int main() {
    int ganados, perdidos, empatados, puntaje;

    cout << "Partidos ganados: ";
    cin >> ganados;
    cout << "Partidos empatados: ";
    cin >> empatados;
    cout << "Partidos perdidos: ";
    cin >> perdidos;

    puntaje = (ganados * 3) + (empatados * 1) + (perdidos * 0);

    cout << "Puntaje total: " << puntaje << endl;

    return 0;
}
