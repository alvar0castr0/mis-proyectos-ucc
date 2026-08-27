/* Rellenar un arreglo con 10 numeros, posteriormente utilizando punteros 
determinar el menor y el mayor elemento del vector, mostrar por pantalla sus 
direcciones de memoria. Utilice una funcion void */

#include <iostream>
using namespace std;

void buscarMayorMenor(int arreglo[], int tamano) {
    int *punteroEntero = arreglo;

    int *punteroMayor = punteroEntero;
    int *punteroMenor = punteroEntero;

    for (int i = 1; i < tamano; i++) {
        int *punteroActual = punteroEntero + i;

        if (*punteroActual < *punteroMenor) {
            punteroMenor = punteroActual;
        }

        if (*punteroActual > *punteroMayor) {
            punteroMayor = punteroActual;
        }
    }

    cout << "El menor elemento es: " << *punteroMenor << endl;
    cout << "Su direccion de memoria es: " << punteroMenor << endl;

    cout << "El mayor elemento es: " << *punteroMayor << endl;
    cout << "Su direccion de memoria es: " << punteroMayor << endl;
}

int main() {
    int Arreglo[10];

    for (int i = 0; i < 10; i++) {
        cout << "Indique el valor de la pos " << i << " del vector: " << endl;
        cin >> Arreglo[i];
    }

    buscarMayorMenor(Arreglo, 10);

    return 0;
}