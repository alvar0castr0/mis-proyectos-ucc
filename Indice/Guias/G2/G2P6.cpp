// Consigna: Crear un algoritmo que permita mostrar la tabla de multiplicar de un numero ingresado
// por teclado. El programa finaliza cuando el numero ingresado es 0.

#include <iostream>
using namespace std;

int main (){
    int tabla;
    cout << "ingrese la tabla de que numeor quiere trabajar" << endl;
    cin >> tabla; 

    for (int i=1; i <= 10;i++) {
        cout << tabla << "x" <<  i << "=" << tabla * i << endl;
    }

    return 0; 

}