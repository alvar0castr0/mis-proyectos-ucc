// Buscar Elemento: Crear una función llamada buscarElemento que tome un arreglo de
// números enteros y un número a buscar. La función debe retornar el índice de la primera
// ocurrencia del número objetivo en el arreglo. Si el número no se encuentra, debe retornar
// -1. En el main, declarar un arreglo de enteros y un número a buscar, luego utilizar la
// función para encontrar su posición.

#include <iostream>
using namespace std;

int buscarElemento(int arr[], int tam, int objetivo) {
    for (int i = 0; i < tam; i++) {
        if (arr[i] == objetivo) {
            return i;
        }
    }
    return -1;
}

int main() {
    int numeros[] = {10, 25, 33, 47, 58};
    int tam = 5;
    int buscar = 33;

    int indice = buscarElemento(numeros, tam, buscar);
    if (indice != -1) {
        cout << "Elemento " << buscar << " encontrado en el índice " << indice << "." << endl;
    } else {
        cout << "Elemento " << buscar << " no encontrado." << endl;
    }
    return 0;
}
