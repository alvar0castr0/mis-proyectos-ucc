#include <iostream>
using namespace std;

void mostrar (int numero[], int tam);


int main ()
{
    const int tam = 14;
    int a[] = {0,1,2,0,3,0,2,0,4,6,0,5,0,9};
    mostrar (a, tam);
    return 0;
}

void mostrar (int numero[], int tam)
{
    for (int i = 0; i < tam; i++)
        if (numero[i] != 0)
            cout << numero[i] << endl;
}