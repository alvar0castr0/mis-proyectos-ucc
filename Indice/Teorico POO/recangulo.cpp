#include <iostream>
using namespace std;

class Rectangulo {
private: 
    int base, altura;

public: 
    Rectangulo(); 
    Rectangulo(int base, int altura); 
    
    void setBase(int base); 
    void setAltura(int altura); 
    
    // Métodos const porque no modifican el objeto
    int getBase() const; 
    int getAltura() const; 
    int perimetro() const; 
    int superficie() const; 
    
    ~Rectangulo();
}; 

// Definición de constructores y destructor
Rectangulo::Rectangulo() : base(0), altura(0) {}

Rectangulo::Rectangulo(int base, int altura) {
    this->base = base;
    this->altura = altura;
}

Rectangulo::~Rectangulo() {}

// Setters y Getters
void Rectangulo::setBase(int base) { this->base = base; }
void Rectangulo::setAltura(int altura) { this->altura = altura; }

int Rectangulo::getBase() const { return this->base; }
int Rectangulo::getAltura() const { return this->altura; }

// Métodos de cálculo
int Rectangulo::perimetro() const { return 2 * base + 2 * altura; }
int Rectangulo::superficie() const { return base * altura; }

int main() {
    Rectangulo R;
    Rectangulo X(3, 4);

    cout << R.superficie() << endl; // Imprime 0
    R.setBase(5);
    R.setAltura(6);
    cout << R.superficie() << endl; // Imprime 30
    R.setAltura(3);
    cout << R.superficie() << endl; // Imprime 15
    cout << X.superficie() << endl; // Imprime 12

    // Uso correcto con memoria dinámica (punteros):
    Rectangulo *ptrR = new Rectangulo(5, 6);
    cout << "Superficie dinamica: " << ptrR->superficie() << endl;
    delete ptrR; // Liberación de memoria

    return 0;
}