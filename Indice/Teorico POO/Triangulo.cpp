/*Desarollar un programa que cargue los lados de un triangulo e implemente los siguientes metodos: 
inicializar los atributos, imprimir el valor del ado mayor y otro metodo que muestre si es equilatero o no */

#include <iostream>
using namespace std;

class Triangulo {
    private:
        float lado1;
        float lado2;
        float lado3;
    public:
        Triangulo
        Triangulo () {
            lado1 = 0;
            lado2 = 0;
            lado3 = 0;
        }
        void inicializar(float l1, float l2, float l3) {
            lado1 = l1;
            lado2 = l2;
            lado3 = l3;
        }
        void imprimirLadoMayor() {
            float mayor = lado1;
            if (lado2 > mayor) {
                mayor = lado2;
            }
            if (lado3 > mayor) {
                mayor = lado3;
            }
            cout << "El lado mayor es: " << mayor << endl;
        }
        void esEquilatero() {
            if (lado1 == lado2 && lado2 == lado3) {
                cout << "El triangulo es equilatero." << endl;
            } else {
                cout << "El triangulo no es equilatero." << endl;
            }
        }
};

int main()
{
    return 0;
}