// 3) Repetir el ejercicio anterior considerando, considerando que la figura a dibujar es un rectángulo
#include <iostream> 5
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
        for (int k = 0; k < i; k++){
            cout << "*";
        }
        cout << endl;
    }
}