// Contar Ocurrencias: Desarrollar una función llamada contarOcurrencias que reciba un
// arreglo de enteros, su tamaño y un número. La función debe retornar la cantidad de veces
// que el número aparece en el arreglo. En el main, definir un arreglo de números de tipo float
// y un número a buscar, luego utilizar la función para contar sus ocurrencias.

#include <iostream>
using namespace std;

int contarOcurrencias(int arr[], int tam, int numero) {
    int contador = 0;
    for (int i = 0; i < tam; i++) {
        if (arr[i] == numero) {
            contador++;
        }
    }
    return contador;
}

int main() {
    int numeros[] = {3, 7, 3, 5, 3, 9, 7, 3};
    int tam = 8;
    int buscar = 3;
    cout << "El número " << buscar << " aparece " << contarOcurrencias(numeros, tam, buscar) << " veces." << endl;
    return 0;
}
