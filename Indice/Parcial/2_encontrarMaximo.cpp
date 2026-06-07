// Encontrar el Máximo: Implementa una función llamada encontrarMaximo que tome
// como entrada un arreglo de números con coma y su tamaño. La función debe devolver el
// valor máximo encontrado en el arreglo. En el main, crear un arreglo de float, llamar a
// encontrarMaximo y mostrar el máximo.

#include <iostream>
using namespace std;

float encontrarMaximo(float arr[], int tam) {
    float maximo = arr[0];
    for (int i = 1; i < tam; i++) {
        if (arr[i] > maximo) {
            maximo = arr[i];
        }
    }
    return maximo;
}

int main() {
    float numeros[] = {3.5, 7.2, 1.8, 9.4, 4.1};
    int tam = 5;
    cout << "Máximo: " << encontrarMaximo(numeros, tam) << endl;
    return 0;
}
