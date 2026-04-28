// Consigna: Una compania realiza el control de un lote de piezas producidas por una maquina.
// Las piezas deben tener un diametro de 10 mm +- 10%. Ingresar las medidas de N piezas y calcular:
// - Cantidad de piezas que cumplen con la tolerancia.
// - Cantidad de piezas que no cumplen con la tolerancia.
// - Porcentaje de piezas buenas y malas respecto al total.

#include <iostream>
using namespace std;

int main ()
{
    double pieza, diametro;
    double pnt = 0;
    double pt = 0;

    cout << "Ingrese la cantidad de piezas: "; cin >> pieza;
    
    for (int i = 0; i < pieza; i++)
    {
        cout << "Ingrese el diametro de la pieza (mm): "; cin >> diametro;
        if (diametro < 9 || diametro > 11)
        {
            pnt++;
        }
        else 
        {
            pt++;
        }
    }

    double ppb = (pt / pieza) * 100;
    double ppm = (pnt / pieza) * 100;
    cout << "La cantidad de piezas con la tolerancia especifica es: " << pt << endl;
    cout << "La cantidad de piezas que incumplen la tolerancia es: " << pnt << endl;
    cout << "El porcentaje de piezas buenas es de: " << ppb << "%" << endl;
    cout << "El porcentaje de piezas malas es de: " << ppm << "%";
    return 0;
}