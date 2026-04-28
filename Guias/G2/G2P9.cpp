#include <iostream>
using namespace std;

int main ()
{
    int contenedores, peso, pesopromedio, pmp;
    cout << "Ingrese la cantidad de contenedores: ";
    cin >> contenedores;
    cout << "Peso maximo establecido por el puerto (kg): "; cin >> pmp;

    int pm = 0;
    int pp = 0;

    for (int i = 0; i < contenedores; i++)
    {
        cout << "Ingrese el peso en kg del contenedor: ";
        cin >> peso;
        pp = peso + pp;

        if (peso > pmp)
        {
            pm++;
        }
    }
    pesopromedio = pp / contenedores;
    cout << "Contenedores con peso mayor al limite: " << pm << endl;
    cout << "Contenedores registrados " << contenedores << endl;
    cout << "Promedio de peso: " << pesopromedio << endl;
}