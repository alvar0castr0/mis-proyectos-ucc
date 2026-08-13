// Leer los 3 lados de un triángulo cualquiera y calcular su área usando la
// fórmula de Herón: A = sqrt(S*(S-A)*(S-B)*(S-C)), donde S es el semiperímetro.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, s, area;

    cout << "Lado A: ";
    cin >> a;
    cout << "Lado B: ";
    cin >> b;
    cout << "Lado C: ";
    cin >> c;

    s = (a + b + c) / 2.0;
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    cout << "Semiperímetro: " << s << endl;
    cout << "Área: " << area << endl;

    return 0;
}
