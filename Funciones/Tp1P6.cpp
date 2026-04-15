#include <iostream>
using namespace std;

double operacion (char operador, double caracter1, double caracter2)
{
    switch (operador)
    {
        case '+':
        return (caracter1 + caracter2);
    
        case '-':
        return (caracter1 - caracter2);

        case '*':
        return (caracter1 * caracter2);

        case '/':
        if (caracter2 == 0) {
            cout << "El valor ingresado da un resultado que no existe" << endl;
            return 0;
        }
        return (caracter1 / caracter2);
    }

}

int main()
{ 
    char operador;
    double caracter1, caracter2;
    cout << "Ingrese el operador" << endl;
    cin >> operador;
    if (operador != '+' && operador != '-' && operador != '*' && operador != '/')
    {
        cout << "Operador invalido" << endl;
        return 0;
    }
    cout << "Ingrese un numero" << endl;
    cin >> caracter1;
    cout << "Ingrese otro numero" << endl;
    cin >> caracter2; 
    double r = operacion (operador, caracter1, caracter2);
    if (operador == '/' && caracter2 == 0) {
        return 0;
    }
    cout << "El resultado es: " << r << endl;
    
    return 0;
}

