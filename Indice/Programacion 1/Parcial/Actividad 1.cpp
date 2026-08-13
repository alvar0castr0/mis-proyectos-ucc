#include <iostream>
using namespace std;

bool esPar (int numero);
bool esMultiploDeTres (int numero);

int main ()
{
    int numero;
    cout << "Ingrese un numero (entero positivo)" << endl;
    cin >> numero;
    if (numero <= 0) {
        cout << "Numero no valido" << endl;
        return 0;
    }

    cout << numero << (esPar(numero) ? " es par." : " no es par.") << endl;
    cout << numero << (esMultiploDeTres(numero) ? " es multiplo." : " no es multiplo.") << endl;

    return 0;
}

bool esPar (int numero)
{
    if (numero % 2 != 0) {
        return false;
    }
    return true;
}

bool esMultiploDeTres (int numero)
{
    if (numero % 3 != 0) {
        return false; 
    }
    return true;
}