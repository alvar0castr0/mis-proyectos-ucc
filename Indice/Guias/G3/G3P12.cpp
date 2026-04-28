// 12) El programa debe calcular el factorial de un número N que ingrese el usuario.
// Ej. 6! = 6 x 5 x 4 x 3 x 2 x 1 = 720

#include <iostream>
using namespace std;

int main ()
{
    int numero, r = 1;
    cout << "Ïngrese el numero del que desea ver su factorial" << endl;
    cin >> numero;

    if (numero == 0)
    {
        cout << "No hay factorial";
        return 0;
    }

    for (int i = 1; i <= numero; i++) 
    {
        r = r * i;
    }
    cout << "!" << numero << " = " << r;
}