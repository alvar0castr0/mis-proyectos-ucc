// 6) Escribe los 100 primeros números pares.

#include <iostream>
using namespace std;

int main ()
{
    int numero = 2;
    do
    {
        cout << numero << endl;
        numero += 2;
    } while (numero <= 200);

    return 0;
}