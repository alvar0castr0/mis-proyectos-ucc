// 1) Escriba una función que reciba como parámetros 2 números, y retorne la suma de ambos.

#include <iostream>
using namespace std;

double suma (double num1, double num2)
{
    return (num1 + num2);
}

int main () 
{
    double num1, num2;
    cout << "Ingrese un numero" << endl;
    cin >> num1;
    cout << "Ingrese otro numero" << endl;
    cin >> num2;
    double r = suma(num1, num2);
    cout << "El resultado de la suma es: " << r << endl;
    return 0;
}