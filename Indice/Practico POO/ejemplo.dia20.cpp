#include <iostream>
using namespace std;

class Persona{

    private:
    string nombre;
    int edad;
    float alt;

    public:
    Persona(string, int, float);
    void comer();
    void dormir();
    void caminar();

};

Persona::Persona(string _nombre, int edad, float alt){
    nombre = _nombre;
    edad = edad;
    alt = alt;
}

void Persona::comer(){
    cout<<"Me llamo: "<< nombre << " y me gusta el asado Argentino"<<endl;
    
}

void Persona::dormir(){
    cout<< "Me llamo "<< nombre << " y me gusta dormir por las tardes"<<endl;

}

void Persona::caminar(){
    cout<<"Me llamo "<< nombre << " tengo " << edad << " años "<<endl;

};

int main(){
    Persona P1("Eduardo", 44, 178.2);

    P1.comer();
    P1.caminar();
    P1.dormir();

}