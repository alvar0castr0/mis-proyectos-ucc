// Verificar Palíndromo: Escribe una función llamada esPalindromo que reciba un arreglo
// de caracteres. La función debe retornar true si la cadena es un palíndromo (se lee igual
// de izquierda a derecha que de derecha a izquierda) y false en caso contrario. En el main,
// probar la función con diferentes palabras.

#include <iostream>
using namespace std;

int longitud(char arr[]) {
    int i = 0;
    while (arr[i] != '\0') i++;
    return i;
}

bool esPalindromo(char arr[]) {
    int tam = longitud(arr);
    for (int i = 0; i < tam / 2; i++) {
        if (arr[i] != arr[tam - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    char palabra1[] = "reconocer";
    char palabra2[] = "hola";
    char palabra3[] = "anilina";

    cout << palabra1 << ": " << (esPalindromo(palabra1) ? "Es palíndromo" : "No es palíndromo") << endl;
    cout << palabra2 << ": " << (esPalindromo(palabra2) ? "Es palíndromo" : "No es palíndromo") << endl;
    cout << palabra3 << ": " << (esPalindromo(palabra3) ? "Es palíndromo" : "No es palíndromo") << endl;
    return 0;
}
