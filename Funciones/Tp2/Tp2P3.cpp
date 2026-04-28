// 3) La función debe recibir como parámetro 2 números, y debe devolver como resultado el mayor de ellos.

#include <iostream>
using namespace std;

double comparar (double a, double b)
{
    if (a > b) 
    {
        return a;
    }
    else 
    { 
        return b;
    }
}

int main ()
{
    double a, b;
    cout << "Ingrese un numero a comprarar" << endl;
    cin >> a;
    cout << "Ingrese otro numero a comprarar" << endl;
    cin >> b;
    double r = comparar(a,b);
    cout << "El numero mayor es: " << r << endl;
    return 0;
}