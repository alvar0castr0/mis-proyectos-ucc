// 8). Desarrollar un programa en el cual introduzca un número entero positivo e invierta los dígitos del número. Mostrar en pantalla el número invertido.
#include <iostream>
using namespace std;

int invertir (int numero)
{
    int invertido;
    invertido = 0;
    while (numero != 0) {
    int digito = numero % 10;
    invertido = invertido * 10 + digito;
    numero = numero / 10;
    }
    return invertido;
}

int main ()
{
    int numero;
    cout << "Ingrese el numero que desea invertir" << endl;
    cin >> numero;
    int r = invertir (numero);
    cout << "El numero invertido es: " << r;

}