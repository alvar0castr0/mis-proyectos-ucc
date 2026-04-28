// 9) Permite ingresar 12 números por teclado. Cuenta la cantidad de veces que se ingresó el cero.

#include <iostream>
using namespace std;

int main ()
{
    int numero;
    int cero = 0;
    for (int i = 0; i < 12; i++)
    {
        cout << "Ingrese un numero" << endl;
        cin >> numero; 

        if (numero ==0)
        {
            cero = cero + 1;
        }
    }
    cout << "El cero se ingreso: " << cero << " veces";
    
    return 0;
}