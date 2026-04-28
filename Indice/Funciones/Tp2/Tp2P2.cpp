// 2) Escriba una función que tenga un argumento de tipo entero, y que devuelva la letra P, si es positivo, N si es negativo y C si es cero.

#include <iostream>
using namespace std;

char signo (int numero)
{
    if (numero == 0)
    {
        return 'C';
    }
    else 
    {
        if (numero < 0) 
        {
            return 'N';
        }
        return 'P';
    }
}

int main ()
{
    int numero;
    cout << "Ingrese un numero" << endl;
    cin >> numero;
    char r = signo (numero);
    cout << "El signo es: " << r << endl; 
    return 0;
}