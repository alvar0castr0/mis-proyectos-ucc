// Ejercicio 4: Analisis de Numeros - Primos y Amigos
#include <iostream>
using namespace std;

int sumaDivisoresPropios(int n)
{
    int suma = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            suma += i;
    }
    return suma;
}

bool esPrimo(int n)
{
    if (n < 2)
        return false;
    int divisores = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            divisores++;
    }
    return divisores == 2;
}

int main()
{
    int a, b;

    cout << "Ingrese el primer numero positivo: ";
    cin >> a;
    cout << "Ingrese el segundo numero positivo: ";
    cin >> b;

    cout << "\n--- Analisis individual ---" << endl;
    cout << a << (esPrimo(a) ? " es primo." : " no es primo.") << endl;
    cout << b << (esPrimo(b) ? " es primo." : " no es primo.") << endl;

    int sumaA = sumaDivisoresPropios(a);
    int sumaB = sumaDivisoresPropios(b);
    cout << "\n--- Numeros Amigos ---" << endl;
    if (sumaA == b && sumaB == a)
        cout << a << " y " << b << " son numeros amigos." << endl;
    else
        cout << a << " y " << b << " NO son numeros amigos." << endl;

    int menor = (a < b) ? a : b;
    int mayor = (a > b) ? a : b;

    cout << "\n--- Primos entre " << menor << " y " << mayor << " ---" << endl;
    bool hayPrimos = false;
    for (int i = menor + 1; i < mayor; i++)
    {
        if (esPrimo(i))
        {
            cout << i << " ";
            hayPrimos = true;
        }
    }
    if (!hayPrimos)
        cout << "No hay numeros primos en ese rango.";
    cout << endl;

    return 0;
}
