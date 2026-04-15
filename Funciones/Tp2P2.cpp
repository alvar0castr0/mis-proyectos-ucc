#include <iostream>
using namespace std;

char signo (int numero)
{
    if (numero == 0)
    {
        return 'C';
    }
    else 
    {
        if (numero < 0) 
        {
            return 'N';
        }
        return 'P';
    }
}

int main ()
{
    int numero;
    cout << "Ingrese un numero" << endl;
    cin >> numero;
    char r = signo (numero);
    cout << "El signo es: " << r << endl; 
    return 0;
}