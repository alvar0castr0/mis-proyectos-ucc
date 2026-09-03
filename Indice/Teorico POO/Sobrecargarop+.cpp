/* Ejercicio 1- Sobregarfar el operador +
Enunciado

Crear una clase Punto que represente u punto en un plano mediante sus coordenadas x e y.

Sobrecargar el operador + para poder sumar dos puntos mediante

Punto p3 = p1 + p2;

Agregar comentarios explicando el procedimiento.

*/

#include <iostream>
using namespace std;    

class Punto {
    private:
        double x, y;
    public:
        Punto(double x = 0, double y = 0) : x(x), y(y) {}

        // Sobrecarga del operador + para sumar dos puntos
        Punto operator+(const Punto& otro) const {
            // Se crea un nuevo punto con las coordenadas sumadas
            return Punto(x + otro.x, y + otro.y);
        }

        void mostrar() const {
            cout << "Punto(" << x << ", " << y << ")" << endl;
        }
};

int main() {
    Punto p1(2.0, 3.0);
    Punto p2(4.0, 5.0);

    // Sumar dos puntos utilizando el operador +
    Punto p3 = p1 + p2;

    // Mostrar el resultado
    p3.mostrar(); // Debería mostrar: Punto(6.0, 8.0)

    return 0;
}