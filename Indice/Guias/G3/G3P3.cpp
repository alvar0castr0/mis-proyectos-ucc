// 3) Permita al usuario ingresar cualquier cantidad de notas. El proceso finalizará cuando se
// ingrese un '0'. Posteriormente, calculará el promedio de las notas.

#include <iostream>
using namespace std;

int main ()
{
    double nota = 1, n = 0;
    int contador = 0;

    cout << "Ingrese sus notas (Cuando coloque el 0 se calculara el promedio)" << endl;
    while (nota > 0)
    {
        cin >> nota;
        if (nota > 0)
        {
            n += nota;
            contador++;
        }
    }
    cout << "Su promedio total es: " << n / contador;
}