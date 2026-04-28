// 4) Muestre por pantalla la tabla de multiplicación del número que ingrese el usuario. Para
// definir hasta qué número desea que muestre la tabla de multiplicación el usuario también
// deberá ingresar este valor. La tabla de multiplicación a mostrar debe empezar en la
// multiplicación por 1.

#include <iostream>
using namespace std;

int main ()
{
    int tabla, por, i = 1;
    cout << "ingrese la tabla de que numeor quiere trabajar" << endl;
    cin >> tabla; 
    cout << "Ingrese el numero hasta el que quiere trabajar" << endl;
    cin >> por;

    while ( i <= por)
    {
        cout << tabla << "x" <<  i << "=" << tabla * i << endl;
        i++;
    }

    return 0; 

}
