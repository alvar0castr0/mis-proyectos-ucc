// Suma de Elementos: Escribir una función llamada calcularSuma que reciba un arreglo
// de enteros y su tamaño como argumentos. La función debe retornar la suma de todos los
// elementos del arreglo. En la función main, declarar un arreglo, inicializar con algunos
// valores y utilizar la función calcularSuma para mostrar el resultado.

#include <iostream>
using namespace std;

int calcularSuma(int arr[], int tam) {
    int suma = 0;
    for (int i = 0; i < tam; i++) {
        suma += arr[i];
    }
    return suma;
}

int main() {
    int numeros[] = {5, 10, 15, 20, 25};
    int tam = 5;
    cout << "Suma: " << calcularSuma(numeros, tam) << endl;
    return 0;
}
