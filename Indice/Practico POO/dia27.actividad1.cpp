/* Implementar setter y getter para cada atributo.
    El setter de edad no debe permitir valores negativos ni mayores a 100
    El setter de nota solo debe aceptar valores entre 0 y 10
    En el main(), crear un objeto Alumno, cargar sus datos con los setter, y mostrar la informacion usando los getters.
    Si la carrera es igual a "administracion" mostrar "Futuro administrador"
    Si la carrera es igual a "Ingenieria" mostrar "Futuro ingeniero"
*/

#include <iostream>
#include <algorithm>
using namespace std;

class Alumno {
    private:
        string nombre;
        int edad;
        float nota;
        long claveuss;
        string carrera;

    public:
        Alumno();
        Alumno(string _nombre, int _edad, float _nota, long _claveuss, string _carrera);

        void mostrarDatos() const;

        void setNombre(string _nombre);
        string getNombre() const;

        bool setEdad(int _edad);
        int getEdad() const;

        bool setNota(float _nota);
        float getNota() const;

        void setClaveuss(long _claveuss);
        long getClaveuss() const;

        void setCarrera(string _carrera);
        string getCarrera() const;
};

// Listas de inicialización para optimizar la construcción de objetos
Alumno::Alumno(string _nombre, int _edad, float _nota, long _claveuss, string _carrera)
{
    nombre = _nombre; edad = _edad; nota = _nota; claveuss = _claveuss; carrera = _carrera;
}

Alumno::Alumno() {
    nombre = "";
    edad = 0;
    nota = 0.0f;
    claveuss = 0;
    carrera = "";
}

void Alumno::mostrarDatos() const {
    cout << "===============Datos del Alumno===============\n"
         << "Nombre: " << nombre << "\n"
         << "Edad: " << edad << "\n"
         << "Nota: " << nota << "\n"
         << "Clave USS: " << claveuss << "\n"
         << "Carrera: " << carrera << "\n";
}

void Alumno::setNombre(string _nombre) {
    nombre = _nombre;
}

string Alumno::getNombre() const {
    return nombre;
}

bool Alumno::setEdad(int _edad) {
    if (_edad >= 0 && _edad <= 100) {
        edad = _edad;
        return true;
    } else {
        cout << "Edad invalida. Debe estar entre 0 y 100.\n";
        return false;
    }
}

int Alumno::getEdad() const {
    return edad;
}

bool Alumno::setNota(float _nota) {
    if (_nota >= 0 && _nota <= 10) {
        nota = _nota;
        return true;
    } else {
        cout << "Nota invalida. Debe estar entre 0 y 10.\n";
        return false;
    }
}

float Alumno::getNota() const {
    return nota;
}

void Alumno::setClaveuss(long _claveuss) {
    claveuss = _claveuss;
}

long Alumno::getClaveuss() const {
    return claveuss;
}

void Alumno::setCarrera(string _carrera) {
    // normalizamos a minusculas para que la comparacion despues sea confiable
    transform(_carrera.begin(), _carrera.end(), _carrera.begin(), ::tolower);
    carrera = _carrera;
}

string Alumno::getCarrera() const {
    return carrera;
}

int main() {
    string nombre, carrera;
    int edad;
    float nota;
    long claveuss;

    Alumno alumno;

    cout << "Ingrese los datos del alumno\n";

    cout << "Nombre: ";
    cin >> nombre;
    alumno.setNombre(nombre);

    cout << "Edad: ";
    cin >> edad;
    while (!alumno.setEdad(edad)) {
        cout << "Ingrese nuevamente: ";
        cin >> edad;
    }

    cout << "Nota: ";
    cin >> nota;
    while (!alumno.setNota(nota)) {
        cout << "Ingrese nuevamente: ";
        cin >> nota;
    }

    cout << "Claveuss: ";
    cin >> claveuss;
    alumno.setClaveuss(claveuss);

    cout << "Carrera: ";
    cin >> carrera;
    alumno.setCarrera(carrera);

    cout << "\nDatos cargados:\n";
    alumno.mostrarDatos();

    if (alumno.getCarrera() == "administracion") {
        cout << "Futuro administrador\n";
    } else if (alumno.getCarrera() == "ingenieria") {
        cout << "Futuro ingeniero\n";
    }

    return 0;
}