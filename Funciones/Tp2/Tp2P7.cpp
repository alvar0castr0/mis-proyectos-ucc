// 7). Obtener un programa que lea un número natural y diga si es o no es triangular.
// A saber: un número N es triangular si, y solamente si, es la suma de los primeros M números
// naturales, para algún valor de M.
// Ejemplo: 6 es triangular pues 6 = 1 + 2 + 3.
#include <iostream>
using namespace std;

string triangular (int numero)
{
    int k = 1;
    int suma = 0;
    while (suma < numero) {
    suma = suma + k;
    k++;
    }


    if (suma == numero) {
         
        return "Triangular";
    }
    else {
        
        return "No es triangular";
    }
}

int main () 
{
    int numero;
    cout << "Ingrese un numero que desea verificar si es triangular" << endl; 
    cin >> numero; 
    string r = triangular(numero);
    cout << r << endl;

}