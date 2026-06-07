// Ejercicio 1:
// Crear las siguientes funciones (basadas en Tp2):
// a) bool esCapicua(int n) : devuelve true si el numero se lee igual al reves
// b) int sumarCifras(int n): devuelve la suma de los digitos del numero
// c) bool esHyperpar(int n): devuelve true si TODOS sus digitos son pares
//
// El programa pide al usuario cuantos numeros quiere analizar (N).
// Para cada numero ingresado muestra los tres resultados.
// Al finalizar indica cuantos capicua y cuantos hyperpar se encontraron en total.

#include <iostream>
using namespace std;

bool esCapicua(int n);
int sumarCifras(int n);
bool esHyperpar(int n);

int main()
{
    int cantidad, numero;
    int totalCapicua = 0, totalHyperpar = 0;

    cout << "Cuantos numeros desea analizar: ";
    cin >> cantidad;

    for (int i = 1; i <= cantidad; i++)
    {
        cout << "\nNumero " << i << ": ";
        cin >> numero;

        cout << "  Capicua    : " << (esCapicua(numero) ? "Si" : "No") << endl;
        cout << "  Suma cifras: " << sumarCifras(numero) << endl;
        cout << "  Hyperpar   : " << (esHyperpar(numero) ? "Si" : "No") << endl;

        if (esCapicua(numero)) totalCapicua++;
        if (esHyperpar(numero)) totalHyperpar++;
    }

    cout << "\n--- Totales ---" << endl;
    cout << "Capicuas encontrados : " << totalCapicua << endl;
    cout << "Hyperpar encontrados : " << totalHyperpar << endl;

    return 0;
}

bool esCapicua(int n)
{
    int original = n, invertido = 0;
    while (n != 0)
    {
        invertido = invertido * 10 + n % 10;
        n /= 10;
    }
    return original == invertido;
}

int sumarCifras(int n)
{
    int suma = 0;
    while (n != 0)
    {
        suma += n % 10;
        n /= 10;
    }
    return suma;
}

bool esHyperpar(int n)
{
    while (n != 0)
    {
        if ((n % 10) % 2 != 0) return false;
        n /= 10;
    }
    return true;
}
