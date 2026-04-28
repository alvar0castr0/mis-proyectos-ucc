#include <iostream>
using namespace std;

int main ()
{
    int numero;
    double distancia, temperatura;
    cout << "Escriba el numero correspondiente a la actividad que desea realizar" << endl;
    cout << "1 . Conversión de distancia" << endl;
    cout << "2 . conversión de Temperatura" << endl;
    cout << "3 . Salir" << endl;
    cin >> numero;

    switch (numero)
    {
        case 1: {
            cout << "Ingrese la distancia que desea convertir (cm a metros y pulgadas): " << endl;
            cin >> distancia;
            double metros = distancia * 0.01;
            double pulgadas = distancia / 2.54;
            cout << "Distancia en: cm: " << distancia << ", metros: " << metros << ", pulgadas: " << pulgadas << endl;
            break;
        }
        case 2: {
            cout << "Ingrese la temperatura, en grados, que desea convertir (Celsius a Fahrenheit): " << endl;
            cin >> temperatura;
            double Fahrenheit = (temperatura * 9.0 / 5.0) + 32;
            cout << "Temperatura en Fahrenheit: " << Fahrenheit << endl;
            break;
        }


        case 3: 
        return 0;

    }
    return 0;
}