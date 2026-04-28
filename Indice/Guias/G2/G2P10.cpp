// Consigna: Se ingresa por teclado la categoria de un socio del club Deportivo y su antiguedad en
// anios. Las categorias posibles son A, B y C. Determinar el valor de la cuota segun la tabla:
// Categoria | Ant < 10 anios | Entre 10 y 20 anios | Mayor a 20 anios
//     A     |      100       |        +20%          |       +30%
//     B     |      200       |        +15%          |       +25%
//     C     |      300       |        +10%          |       +20%

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
