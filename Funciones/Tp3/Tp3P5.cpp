// 5) Escribir una función que permita realizar el siguiente gráfico: La función debe aceptar como parámetro la altura del gráfico 
#include <iostream>
using namespace std;

void grafico (int rectangulo);

int main ()
{
    int rectangulo;
    cout << "Ingrese la altura de su grafico" << endl;
    cin >> rectangulo;
    grafico (rectangulo);
    return 0;
}

void grafico (int rectangulo)
{
    for (int i = 1; i <= rectangulo; i++)
    {
        for (int k = 0; k < rectangulo - i + 1; k++){
            cout << "*";
        }
        cout << endl;
    }
}