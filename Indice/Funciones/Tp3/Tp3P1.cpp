// 1) Escribir una función que permita mostrar un mensaje por pantalla con el siguiente formato:
// *************************************************************
// Mensaje
// *************************************************************
// El mensaje a mostrar debe ser enviado por parámetro a la función 

#include <iostream>
using namespace std;

void mensaje (string mens);

int main ()
{
    string mens;
    cout << "Ingrese un mensaje" << endl;
    cin >> mens;
    mensaje (mens); 
    return 0;
}

void mensaje (string mens)
{
    cout << "*************************************************************" << endl;
    cout << "                          " << (mens) << "                       " << endl;
    cout << "*************************************************************" << endl;
}