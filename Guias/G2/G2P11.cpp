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