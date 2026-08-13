// 2) Queremos conocer los gastos de nuestro último viaje. Permita al usuario ingresar todos los gastos deseados. 
// El programa mostrará la sumatoria de los mismos cuando el usuario ingrese un valor negativo.

#include <iostream>
using namespace std;

int main ()
{
    double gasto = 0, g = 0;
    
    
    cout << "Ingrese lo gastos de su viaje" << endl;
    cout << "Cuando desee terminar con la suma de gastos coloque un valor negativo" << endl;
    while (gasto >= 0)
    {
        cin >> gasto;
        if (gasto >= 0)
            g += gasto;
    
    }
    cout << "Total gastado: " << "$" << g;
}