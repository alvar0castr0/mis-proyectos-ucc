// 10). Escribir un programa que sume las cifras de un número entero positivo.

#include <iostream>
using namespace std;

int cifras (int numero)
{
    int digito, s;
    s = 0;
    while (numero != 0) {
    digito = numero % 10;
    numero = numero / 10;
    s += digito;
    }
    return s;
}

int main ()
{
    int numero;
    cout << "Ingrese un numero del que desea saber la suma de sus cifras" << endl;
    cin >> numero;
    if (numero <= 0)
    {
        cout << "El numero ingresado debe ser positivo" << endl;
        return 0;
    }
    
    int r = cifras(numero);
    cout << r;

    return 0;
}