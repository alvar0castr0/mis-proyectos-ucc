// Promedio Condicional: Implementar una función llamada calcularPromedioPares que
// reciba un arreglo de números float y su tamaño. La función debe calcular y retornar el
// promedio de los números pares contenidos en el arreglo. Si no hay números pares, la
// función debe retornar 0. En el main, crea un arreglo de enteros y utiliza la función para
// obtener el promedio de los pares.

#include <iostream>
using namespace std;

float calcularPromedioPares(float arr[], int tam) {
    float suma = 0;
    int cantidad = 0;
    for (int i = 0; i < tam; i++) {
        if ((int)arr[i] % 2 == 0) {
            suma += arr[i];
            cantidad++;
        }
    }
    if (cantidad == 0) return 0;
    return suma / cantidad;
}

int main() {
    float numeros[] = {2.0, 3.0, 4.0, 7.0, 8.0, 11.0, 6.0};
    int tam = 7;
    cout << "Promedio de pares: " << calcularPromedioPares(numeros, tam) << endl;
    return 0;
}
