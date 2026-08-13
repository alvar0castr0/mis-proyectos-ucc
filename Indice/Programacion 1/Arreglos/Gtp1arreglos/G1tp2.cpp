#include <iostream>
using namespace std;

void carga (int numero[], int tam, int &prom);
void promedios (int tam, int prom, float &promedio);
void menores (int numero [], int tam, float promedio);
void mostrar (int numero[], int tam);

int main ()
{
    int prom = 0;
    float promedio = 0;
    const int tam = 10;
    int a[tam]; 
    carga (a, tam, prom);
    promedios (tam, prom, promedio);
    menores (a, tam, promedio);
    mostrar (a, tam);
    return 0;
}

void carga (int numero[], int tam, int &prom)
{
    cout << "Ingrese un numero" << endl;
    for (int i = 0; i < tam; i++){
        cin >> numero[i];
        prom += numero[i];
    }
}

void promedios (int tam, int prom, float &promedio)
{
    promedio = (float)prom / tam;
}

void menores (int numero[], int tam, float promedio)
{
    for (int i = 0; i < tam; i++)
        if (numero[i] < promedio) numero[i] = -1;

}

void mostrar (int numero[], int tam)
{
    for (int i = 0; i < tam; i++)
        cout << "Los numeros son" << numero[i] << endl;
}