// 8) Realice la sumatoria de los números enteros comprendidos entre el 1 al 10.

#include <iostream>
using namespace std;

int main()
{
    int suma = 0;

    for (int i = 1; i <= 10; i++)
    {
        suma += i; // suma = suma + 1
    }

    cout << "La sumatoria del 1 al 10 es: " << suma << endl;

    return 0;
}
