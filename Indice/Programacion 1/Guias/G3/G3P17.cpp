// 17) El programa debe imprimir los términos de la siguiente serie: 2,5,7,10,12,15,17 (hasta llegar a 100).

#include <iostream>
using namespace std;

int main()
{
    int n = 2;
    int paso = 3;

    while (n <= 100)
    {
        cout << n << " ";
        n += paso;
        paso = (paso == 3) ? 2 : 3; // if (paso == 3) {paso = 2} else  {paso = 3}
    }

    cout << endl;
    return 0;
}
