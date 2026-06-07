// Ejercicio 4:
// Menu de operaciones, cada una implementada como funcion separada:
// 1) Normalizar tiempo: recibe horas, minutos y segundos con valores arbitrarios
//    y los convierte al formato correcto (ej: 3h 118m 195s -> 5h 1m 15s)  [como Tp2P6]
// 2) Convertir temperatura de Celsius a Fahrenheit                         [como G2P13]
// 3) Calcular el factorial de un numero N                                  [como Tp2P4 / G3P12]
// 4) Salir
//
// Validar los datos de entrada con do-while.
// El programa se repite hasta que el usuario elija Salir.

#include <iostream>
using namespace std;

void normalizarTiempo(int &hora, int &minuto, int &segundo);
double celsiusAFahrenheit(double celsius);
long long factorial(int n);

int main()
{
    int opcion;

    do
    {
        cout << "\n--- Menu ---" << endl;
        cout << "1. Normalizar tiempo" << endl;
        cout << "2. Convertir temperatura (C a F)" << endl;
        cout << "3. Calcular factorial" << endl;
        cout << "4. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion)
        {
            case 1: {
                int h, m, s;
                cout << "Horas   : "; cin >> h;
                cout << "Minutos : "; cin >> m;
                cout << "Segundos: "; cin >> s;
                normalizarTiempo(h, m, s);
                cout << "Resultado: " << h << "h " << m << "m " << s << "s" << endl;
                break;
            }
            case 2: {
                double c;
                cout << "Temperatura en Celsius: "; cin >> c;
                cout << "En Fahrenheit: " << celsiusAFahrenheit(c) << endl;
                break;
            }
            case 3: {
                int n;
                do {
                    cout << "Numero (>= 1): "; cin >> n;
                } while (n < 1);
                cout << n << "! = " << factorial(n) << endl;
                break;
            }
            case 4:
                cout << "Hasta luego." << endl;
                break;
            default:
                cout << "Opcion invalida." << endl;
        }

    } while (opcion != 4);

    return 0;
}

void normalizarTiempo(int &hora, int &minuto, int &segundo)
{
    if (segundo >= 60)
    {
        minuto += segundo / 60;
        segundo = segundo % 60;
    }
    if (minuto >= 60)
    {
        hora += minuto / 60;
        minuto = minuto % 60;
    }
}

double celsiusAFahrenheit(double celsius)
{
    return celsius * 9.0 / 5.0 + 32;
}

long long factorial(int n)
{
    long long r = 1;
    for (int i = 2; i <= n; i++)
        r *= i;
    return r;
}
