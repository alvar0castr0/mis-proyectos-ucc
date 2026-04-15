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