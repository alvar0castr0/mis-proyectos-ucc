//4) Escribir una función que permita determinar si un número es positivo, negativo o cero.
#include <iostream>
#include <string>
using namespace std; 

string tipo(int a);

int main()
{
    int a;
    cout << "Ingrese un numero: ";
    cin >> a;

    string r = tipo(a);
    cout << r << endl;

    return 0;
}

string tipo(int a)
{
    if (a > 0) 
    { 
        return "positivo";
    }
    else 
    {
        if (a == 0)
        {
            return "igual a 0";
        }

        return "negativo";
    }
}