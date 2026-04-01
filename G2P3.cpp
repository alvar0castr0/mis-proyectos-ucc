#include <iostream>
using namespace std;

int main (){
    int numero1, numero2, numerof;
    cout << "Ingrese un numero" << endl; 
    cin >> numero1; 
    cout << "Ingrese otro numero" << endl;
    cin >> numero2; 
    if (numero1 < 0) {
        numero1 = numero1 * (-1);
    }
    if (numero2 < 0){
        numero2 = numero2 * (-1);
    }

    numerof = numero1 + numero2; 
    cout << "El resultado es:" << numerof << endl;
    return 0; 
}