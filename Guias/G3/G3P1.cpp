#include <iostream>
using namespace std;

int main()
{
    int i = 1, suma = 0;

    while (i <= 10) {
        suma += i; // suma = suma + 1
        i++;
    }

    cout << "La sumatoria del 1 al 10 es: " << suma << endl;

    return 0;
}
