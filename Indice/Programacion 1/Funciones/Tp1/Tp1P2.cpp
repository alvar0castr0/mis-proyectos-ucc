//2) Escribir una función que calcule la cantidad de veces que un número está contenido en otro.
#include <iostream>
using namespace std;

int veces_contenido(int numero, int divisor)
{
    
    int abs_numero = (numero);
    int abs_divisor = (divisor);
    
    return numero / divisor;
}

int main()
{
    int numero, divisor;
    cout << "Ingresa el numero: ";
    cin >> numero;
    cout << "Ingresa el divisor: ";
    cin >> divisor;

    int resultado = veces_contenido(numero, divisor);
    cout << divisor << " esta contenido " << resultado << " veces en " << numero << endl;

    return 0;
}