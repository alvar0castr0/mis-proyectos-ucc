// 4). Obtener una función que calcule la factorial de un número n.
#include <iostream>
using namespace std; 

string factorial (int numero)
{
    if (numero == 0)
    {
        return "No hay factorial";
    }
    
    int r;
    r = 1; 

    for (int i = 1; i <= numero; i++) 
    {
        r = r * i;
    }
    return to_string(r);
}

int main ()
{
    int numero;
    numero = 0;
    cout << "Ïngrese el numero del que desea ver su factorial" << endl;
    cin >> numero;
    string r = factorial(numero);
    cout << "Su factorial es: " << r << endl;
    return 0;
}