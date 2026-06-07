// Concatenar Cadenas: Desarrollar una función llamada concatenarArreglos que reciba
// dos arreglos de caracteres. La función debe unir los dos arreglos en uno solo. En el
// main, crear los dos arreglos que se desean unir, inicializarlos y utilizar la función para
// realizar la unión de los arreglos. Imprimir el arreglo resultante.

#include <iostream>
using namespace std;

void concatenarArreglos(char a[], char b[], char resultado[]) {
    int i = 0;
    while (a[i] != '\0') {
        resultado[i] = a[i];
        i++;
    }
    int j = 0;
    while (b[j] != '\0') {
        resultado[i] = b[j];
        i++;
        j++;
    }
    resultado[i] = '\0';
}

int main() {
    char primero[] = "Hola ";
    char segundo[] = "Mundo";
    char resultado[50];

    concatenarArreglos(primero, segundo, resultado);

    cout << "Resultado: " << resultado << endl;
    return 0;
}
