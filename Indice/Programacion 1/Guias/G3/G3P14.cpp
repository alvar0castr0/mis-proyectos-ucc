// 14) Ingresar 8 números por teclado. Contabilizar la cantidad de pares, impares y nulos.

#include <iostream>
using namespace std;

int main ()
{
    int numero, par = 0, impar = 0, nulo = 0;
    for (int i = 0; i < 8; i++)
    {
        cout << "Ingrese un numero" << endl;
        cin >> numero;
        
        if (numero == 0)
        {
            nulo++;
        }
        if (numero % 2 == 0)
        {
            par++;
        }
        if (numero % 2 != 0)
        {
            impar++;
        }
    }
    cout << "Pares: " << par - nulo << " Impares: " << impar << " Nulos: " << nulo;
}