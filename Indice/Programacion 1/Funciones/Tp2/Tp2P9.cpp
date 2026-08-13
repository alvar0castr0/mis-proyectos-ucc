// 9). Solicitar al usuario un valor entero y decir si es capicúa
#include <iostream>
using namespace std;

string capicua (int numero)
{
    int invertido;
    invertido = 0;
    int original = numero;
    while (numero != 0) {
        int digito = numero % 10;
        invertido = invertido * 10 + digito;
        numero = numero / 10;
    }
    if (invertido == original){
        return  "Lo es";
    }
    else {
        return "No lo es";
    }
    
}

int main ()
{
    int numero;
    cout << "Ingrese el valor que desea combrobar si es capicua" << endl;
    cin >> numero; 
    string r = capicua(numero);
    cout << r << endl;

    return 0;
}