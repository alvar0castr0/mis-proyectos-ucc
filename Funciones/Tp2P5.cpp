#include <iostream>
using namespace std;

string madre (int edad1, int edad2, string nombre1, string nombre2)
{
    if (edad1 > edad2) {
        return nombre1;
    }
    else {
        return nombre2;
    }
}

int main ()
{
    int edad1, edad2; 
    string nombre1, nombre2;
    cout << "Ingrese el nombre: "; cin >> nombre1; cout << "Ingrese la edad: "; cin >> edad1;
    cout << "Ingrese el nombre: "; cin >> nombre2; cout << "Ingrese la edad: "; cin >> edad2;
    if (edad1 == edad2)
    {
        cout << "Programa imposible de resolver";
        return 0;
    }
    string r = madre(edad1, edad2, nombre1, nombre2);
    cout << "La madre es: " << r << endl;
    return 0;
}