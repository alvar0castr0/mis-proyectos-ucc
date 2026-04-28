// 7) Existen 1000 unidades de un determinado producto. Mientras existan más de 200 se
// pueden seguir realizando entregas. Si la cantidad baja de 200 debe notificarse un alerta.

#include <iostream>
using namespace std;

int main()
{
    int stock = 1000;
    int entrega;

    do
    {
        cout << "Stock actual: " << stock << endl;
        cout << "Ingrese cantidad a entregar: ";
        cin >> entrega;

        if (entrega > stock)
        {
            cout << "No hay suficiente stock." << endl;
            continue;
        }

        stock -= entrega;
    } while (stock > 200);

    cout << "ALERTA: El stock bajo a " << stock << " unidades." << endl;

    return 0;
}
