/*Se conoce  de  un alumno: Claveucc, nombre y tres notas parciales (nota, nota2, nota3). SE desea saber su nota final promedio de las notas de parciales)
El programa debe imprimir: clave ucc, nombre, nota final e indique con un mensaje si el alumno aprobo (ota final >= 4)
o no aprobo (nota inal < 4) la asigatura*/

#include <iostream>
using namespace std;

class Alumno{
    private:
    string claveucc;
    string nombre;
    float nota1;
    float nota2;
    float nota3;
    public:
    Alumno();
    Alumno(string claveucc, string nombre, float nota1, float nota2, float nota3);
    void promedio();
};

Alumno::Alumno(){
    claveucc = "";
    nombre = "";
    nota1 = 0;
    nota2 = 0;
    nota3 = 0;
}

Alumno::Alumno(string claveucc, string nombre, float nota1, float nota2, float nota3){
    this->claveucc = claveucc;
    this->nombre = nombre;
    this->nota1 = nota1;
    this->nota2 = nota2;
    this->nota3 = nota3;
}

void Alumno::promedio(){
    float promedio = (nota1 + nota2 + nota3) / 3;
    cout << "Clave UCC: " << claveucc << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Nota final: " << promedio << endl;
    if(promedio >= 4){
        cout << "El alumno aprobo la asignatura." << endl;
    } else {
        cout << "El alumno no aprobo la asignatura." << endl;
    }
}

int main(){
    Alumno alumno1("12345", "Juan Pérez", 5.0, 6.0, 7.0);
    alumno1.promedio();
    return 0;
}