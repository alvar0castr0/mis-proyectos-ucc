// Invertir Arreglo: Escribir una función llamada invertirArreglo que reciba un arreglo de
// enteros y su tamaño. La función debe invertir el orden de los elementos dentro del arreglo
// (el primer elemento pasa a ser el último, el segundo al penúltimo, y así sucesivamente).
// La función no debe retornar nada, sino modificar el arreglo original. En el main, inicializar
// un arreglo, llamar a la función invertirArreglo y luego imprimir el arreglo invertido.

#include <iostream>
using namespace std;

void invertirArreglo(int arr[], int tam) {
    for (int i = 0; i < tam / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[tam - 1 - i];
        arr[tam - 1 - i] = temp;
    }
}

int main() {
    int numeros[] = {1, 2, 3, 4, 5};
    int tam = 5;

    invertirArreglo(numeros, tam);

    cout << "Arreglo invertido: ";
    for (int i = 0; i < tam; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;
    return 0;
}
