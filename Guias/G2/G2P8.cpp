#include <iostream> 
using namespace std;

int main ()
{
    int numero, digito, d1, d2, d3, d4;
    cout << "Ingrese el digito" << endl;
    cin >> numero;

    if (numero > 9999) 
    { 
        cout << "El numero debe contener unicamente 4 cifras";
        return 0;
    }

    for (int i = 0; i < 4; i++)
    {
    digito = numero % 10;
    numero = numero / 10;
    
    switch (i) {
    case 0:
        d4 = digito;
        break;
    case 1:
        d3 = digito;
        break;
    case 2:
        d2 = digito;
        break;
    case 3:
        d1 = digito;
        break;
    } 
    }
    cout << "Los ditigos que componen el numero ingresado son: " << "d1 = " << d1 << ", d2 = " << d2 << ", d3 = " << d3 <<  ", d4 = " << d4;
    return 0;
}
