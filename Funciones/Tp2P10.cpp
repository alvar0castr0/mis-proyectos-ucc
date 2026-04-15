#include <iostream>
using namespace std;

int cifras (int numero)
{
    int cifra, digito;
    cifra = 0;
    while (numero != 0) {
    int digito = numero % 10;
    cifra = cifra * 10 + digito;
    numero = numero / 10;
    }
}

int main ()
{
    int numero;
    cout << "Ingrese un numero del que desea saber la suma de sus cifras" << endl;
    cin >> numero;

    return 0;
}