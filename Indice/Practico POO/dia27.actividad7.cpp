#include <iostream>
using namespace std;

class persona {
private:
    string nombre;
    int edad;
    long dni;
    float peso, altura;
public:
    persona();
    persona (string, int, long, float, float);
    ~persona();
    void mostrardatos();
    void setnombre(string _nombre);
    string getnombre();
    void setedad(int _edad);
    int getedad();
    void setdni(long _dni);
    long getdni();
};

persona::persona() {
    nombre = "";
    edad = 0;
    dni = 0;
    peso = 0.0;
    altura = 0.0;
}

persona::persona(string _nombre, int _edad, long _dni, float _peso, float _altura) {
    nombre = _nombre;
    edad = _edad;
    dni = _dni;
    peso = _peso;
    altura = _altura;
}

persona::~persona() {
    // Destructor
}

void persona::mostrardatos() {
    cout << "===============Datos de la persona===============" << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
    cout << "DNI: " << dni << endl;
    cout << "Peso: " << peso << endl;
    cout << "Altura: " << altura << endl;
}

void persona::setnombre(string _nombre) {
    nombre = _nombre;
}

string persona::getnombre() {
    return nombre;
}

void persona::setedad(int _edad) {
    edad = _edad;
}

int persona::getedad() {
    return edad;
}

void persona::setdni(long _dni) {
    dni = _dni;
}

long persona::getdni() {
    return dni;
}

int main ()
{
    persona P1 ("edu", 44, 23445667, 100, 100);
    persona P2;

    P2.setnombre ("eduardo"); //se usa (), ya que al estar encapsulado, solo se puede acceder a traves de los metodos. 
    
    P1.mostrardatos();
    P2.mostrardatos();

}   
