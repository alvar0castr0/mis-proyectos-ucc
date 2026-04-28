// 11). Se dice que un número es hyperpar cuando todos sus dígitos son pares. Obtener una función que retorne True si el número pasado como parámetro es hyperpar o False en caso contrar
#include <iostream>
using namespace std;

string cifras (int numero)
{
    int digito;
    while (numero != 0) 
    {
    digito = numero % 10;
    numero = numero / 10;
    
    if (digito % 2 != 0)
    {
        return "False";
    }
    }
    
    if (digito % 2 == 0)
    {
        return "True";
    }
}

int main ()
{
    int numero;
    cout << "Ingrese un numero del que desea saber si es hyperpar" << endl;
    cin >> numero;
    string r = cifras(numero);
    cout << r;

    return 0;
}