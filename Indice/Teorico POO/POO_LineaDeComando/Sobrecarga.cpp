#include <iostream>
using namespace std;

class Punto {
    private:
        double x, y;
    public:
        Punto operator+(const Punto& otro) const {
            return Punto(x + otro.x, y + otro.y);
        }    
};   

//operador+ es de tipo BInario a + b


class Contador {
    private:
        int valor;
    public:
        Contador& operator++() { // Pre-incremento
            ++valor;
            return *this;
        }

        Contador operator++(int) { // Post-incremento
            Contador anterior = *this;
            ++valor;
            return anterior;
        }
};

//Operador++ es de tipo Unario a++

Class Completo {
    private:
        double re, im;
    public:
        Completo(double r=0, double i=0) : re(r), im(i) {}

        Completo operator+(const Completo& otro) const {
            return Completo(re + otro.re, im + otro.im);
        }

        Completo operator-(const Completo& otro) const {
            return Completo(re - otro.re, im - otro.im);
        }

        void mostrar() const {
            cout << "Completo(" << re << ", " << im << ")" << endl;
        }
};

//ejemplo igualdad y comparacion de objetos
Class Persona {
    private:
        int dni;
    public:
        Persona(int d) : dni(d) {}

    bool operator==(const Persona& otra) const {
        return dni == otra.dni;
    }

    bool operator!=(const Persona& otra) const {
        return !(*this == otra);
    }
};

Persona a(123), b(123);
if (a == b) {/**/}
