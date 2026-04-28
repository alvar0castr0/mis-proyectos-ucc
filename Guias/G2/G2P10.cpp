#include <iostream>
using namespace std;

int main ()
{
    string categoria;
    int antiguedad;
    int pagar;

    cout << "Ingrese la categoria a la que pertenece su club (A, B o C): "; cin >> categoria;
    if (categoria != "A" && categoria != "B" && categoria != "C")
    {
        cout << "Categoria no correspondiente a la tabla";
        return 0;
    }
    cout << "Ingrese la antiguedad de su club: "; cin >> antiguedad;
    

    if (categoria == "A")
    {
        if (antiguedad < 10)
            pagar = 100;
        else if (antiguedad >= 10 && antiguedad < 20)
            pagar = 120;
        else
            pagar = 130;
    }
    else if (categoria == "B")
    {
        if (antiguedad < 10)
            pagar = 200;
        else if (antiguedad >= 10 && antiguedad < 20)
            pagar = 225;
        else
            pagar = 230;
    }
    else
    {
        if (antiguedad < 10)
           pagar = 300;
        else if (antiguedad >= 10 && antiguedad < 20)
            pagar = 310;
        else
            pagar = 320;
    }

    cout << "La cantidad a pagar: " << pagar;

    return 0;
}
