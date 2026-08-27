/*Construya una clase llamada Rectangulo que tenga los siguientes atributos: largo y ancho, y los siguientes metodos:
perimetro() y area()*/

#include <iostream>
using namespace std;

class Rectangulo {
    private:
    float largo;
    float ancho;
    public:
    Rectangulo();
    Rectangulo(float largo, float ancho);
    void perimetro();
    void area();
};

Rectangulo::Rectangulo() {
    largo = 0;
    ancho = 0;
}

Rectangulo::Rectangulo(float largo, float ancho){
    this->largo = largo;
    this->ancho = ancho;
}

void Rectangulo::area() {
    float a = 0;
    a = largo * ancho;
    cout << "El area del rectangulo es: " << a << endl;
}

void Rectangulo::perimetro() {
    float p = 0;
    p = 2 * (largo) + 2 * (ancho);
    cout << "El perimetro del rectangulo es: " << p << endl;
}

int main(){
    cout << "Ingrese el largo del rectangulo: ";
    float largo;
    cin >> largo;
    cout << "Ingrese el ancho del rectangulo: ";   
    float ancho;
    cin >> ancho;
    Rectangulo R1(largo, ancho);
    R1.perimetro();
    R1.area();

    return 0;
}