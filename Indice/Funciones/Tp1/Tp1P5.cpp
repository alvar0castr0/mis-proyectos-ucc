// 5) Escribir una función que calcule el monto a pagar en una compra. Los parámetros a recibir son los siguientes:
// Cantidad
// Precio
// Porcentaje de descuento
#include <iostream>
using namespace std;

float monto(float precio, int cantidad, float descuento);

int main() 
{
    float precio, descuento;
    int cantidad;
    cout << "Ingrese el precio: " << endl;
    cin >> precio;
    cout << "Ingrese la cantidad: " << endl;
    cin >> cantidad;
    cout << "Ingrese el descuento (%): " << endl;
    cin >> descuento;
    float r = monto(precio, cantidad, descuento);
    cout << "El monto total es: " << r << endl; 

    return 0;
}

float monto(float precio, int cantidad, float descuento)
{
    return (precio * cantidad) * (1 - descuento / 100.0);
}