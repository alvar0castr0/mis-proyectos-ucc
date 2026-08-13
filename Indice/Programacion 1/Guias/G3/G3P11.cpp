// 11) Leer diez números y determinar la cantidad de ceros, positivos y negativos.

#include <iostream>
using namespace std;

int main ()
{
    int numero;
    int cero = 0, positivo = 0, negativo = 0;
    for (int i = 0; i < 10; i++)
    {
        cout << "Ingrese un numero" << endl;
        cin >> numero; 

        if (numero == 0)
        {
            cero = cero + 1;
        }
        if (numero < 0)
        {
            negativo = negativo + 1;
        }
        else {
            positivo = positivo + 1;
        }
    }
    cout << "Hay " << cero << "  ceros" << endl;
    cout << "Hay " << positivo << " numeros positivos" << endl;
    cout << "Hay " << negativo << " numeros negativos";
    return 0;
}