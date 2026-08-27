#include <iostream>
using namespace std;

class Sueldo {
private:
    string nombre;
    int edad;
    int antiguedad;
    float sueldo;

public:
    Sueldo();
    Sueldo(string nombre, int edad, int antiguedad, float sueldo);
    void calcularAumento();
};

Sueldo::Sueldo() {
    nombre = "";
    edad = 0;
    antiguedad = 0;
    sueldo = 0;
}

Sueldo::Sueldo (string nombre, int edad, int antiguedad, float sueldo) {
    this->nombre = nombre;
    this->edad = edad;
    this->antiguedad = antiguedad;
    this->sueldo = sueldo;
}

void Sueldo::calcularAumento() {
    int bono = (sueldo > 2000000) ? 50000 : 100000;

    float porcentaje = (antiguedad > 10) ? 0.20f : 0.15f;
    float aumento = sueldo * porcentaje;
    float sueldoFinal = sueldo + aumento;

    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
    cout << "Antiguedad: " << antiguedad << " anos" << endl;
    cout << "Sueldo base: $" << sueldo << endl;
    cout << "Sueldo con aumento: $" << sueldoFinal << endl;
    cout << "Bono: $" << bono << endl;
}

int main() {
    Sueldo empleado1("Carlos López", 35, 12, 2500000);
    empleado1.calcularAumento();
    return 0;
}