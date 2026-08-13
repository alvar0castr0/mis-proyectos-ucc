// Consigna: Hallar el perimetro y el area de un rectangulo ingresando la base b y la altura h.
// Controlar que los parametros ingresados sean mayores que 0.
// Si un parametro es mal ingresado, repetir el ingreso nuevamente.
// El programa debe permitir el ingreso de N conjuntos de datos.

#include <iostream>
using namespace std;

int main()
{
    int base, altura, perimetro, area;

    while (true) {

        do {
            cout << "Ingrese la base" << endl;
            cin >> base;
        
            if (base <= 0) {
            cout << "Ingrese una base mayor a 0" << endl;
            }
        }  while (base<=0);  
    
        do {
            cout << "Ingrese la altura" << endl;
            cin >> altura;
        
            if (altura <= 0){
            cout << "Ingrese una altura mayor a 0" << endl;
            }
        }  while (altura<=0); 

        area = base * altura;
        perimetro = base + base + altura + altura;
        cout << "El área es: " << area << endl;
        cout << "El perímetro es: " << perimetro << endl;
    }
    return 0;
}