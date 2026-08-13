// Identificar el tipo de triángulo (equilátero, isósceles o escaleno)
// a partir de sus tres lados.

#include <iostream>
using namespace std;

int main() {
    double a, b, c;

    cout << "Lado A: ";
    cin >> a;
    cout << "Lado B: ";
    cin >> b;
    cout << "Lado C: ";
    cin >> c;

    if (a == b && b == c) {
        cout << "Triángulo equilátero." << endl;
    } else if (a == b || b == c || a == c) {
        cout << "Triángulo isósceles." << endl;
    } else {
        cout << "Triángulo escaleno." << endl;
    }

    return 0;
}
