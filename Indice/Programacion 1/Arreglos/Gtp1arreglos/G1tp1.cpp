#include <iostream>
using namespace std;

void carga (int numero[], int tam);
void menores (int numero [], int tam, int &contador);
void mostrar (int numero[], int tam, int contador);

int main ()
{
    int contador = 0;
    const int tam = 10;
    int a [tam];
    carga (a, tam);
    menores (a, tam, contador);
    mostrar (a, tam, contador);
    return 0;
}

void carga (int numero[], int tam)
{
    cout << "Ingrese numeros" << endl;
    for (int i = 0; i < tam; i++)
        cin >> numero[i];
}

void menores (int numero[], int tam, int &contador)
{
    for (int i = 0; i < tam; i++)
        if (numero[i] < 5) contador++;
}

void mostrar (int numero[], int tam, int contador)
{
    cout << "El numero de numeros ingresados menores que 5 es: " << contador;
}