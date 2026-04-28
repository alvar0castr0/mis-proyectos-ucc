// 5) Realice la sumatoria de los números enteros comprendidos entre el 1 al 10.

#include <iostream>
using namespace std;

int main()
{
    int i = 1, suma = 0;

    do {
        suma += i; // suma = suma + 1
        i++;
    } while (i <= 10);

    cout << "La sumatoria del 1 al 10 es: " << suma << endl;

    return 0;
}