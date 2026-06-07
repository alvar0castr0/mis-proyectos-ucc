// Ejercicio 3:
// Crear las siguientes funciones para dibujar figuras (como en Tp3):
// a) cuadrado(int lado)      : dibuja un cuadrado hueco de lado N con asteriscos
// b) trianguloAsc(int altura): dibuja un triangulo ascendente (izquierda)
// c) trianguloDesc(int altura): dibuja un triangulo descendente (izquierda)
//
// Mediante un menu con switch (como en G2P13), el usuario elige que figura dibujar
// e ingresa el tamano. El programa se repite hasta que el usuario elija Salir.

#include <iostream>
using namespace std;

void cuadrado(int lado);
void trianguloAsc(int altura);
void trianguloDesc(int altura);

int main()
{
    int opcion, tamano;

    do
    {
        cout << "\n--- Menu de Figuras ---" << endl;
        cout << "1. Cuadrado" << endl;
        cout << "2. Triangulo ascendente" << endl;
        cout << "3. Triangulo descendente" << endl;
        cout << "4. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        if (opcion == 4) break;

        if (opcion < 1 || opcion > 3)
        {
            cout << "Opcion invalida." << endl;
            continue;
        }

        do {
            cout << "Tamano (mayor a 1): ";
            cin >> tamano;
        } while (tamano <= 1);

        cout << endl;

        switch (opcion)
        {
            case 1: cuadrado(tamano);    break;
            case 2: trianguloAsc(tamano); break;
            case 3: trianguloDesc(tamano); break;
        }

    } while (opcion != 4);

    return 0;
}

void cuadrado(int lado)
{
    for (int i = 0; i < lado; i++) cout << "*";
    cout << endl;
    for (int i = 0; i < lado - 2; i++)
    {
        cout << "*";
        for (int j = 0; j < lado - 2; j++) cout << " ";
        cout << "*" << endl;
    }
    for (int i = 0; i < lado; i++) cout << "*";
    cout << endl;
}

void trianguloAsc(int altura)
{
    for (int i = 1; i <= altura; i++)
    {
        for (int k = 0; k < i; k++) cout << "*";
        cout << endl;
    }
}

void trianguloDesc(int altura)
{
    for (int i = altura; i >= 1; i--)
    {
        for (int k = 0; k < i; k++) cout << "*";
        cout << endl;
    }
}
