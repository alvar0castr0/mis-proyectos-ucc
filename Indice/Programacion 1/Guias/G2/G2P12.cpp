// Consigna: La compania del problema anterior adquiere dos maquinas mas. Modificar el programa
// para que, ademas de la informacion anterior, muestre por cada maquina:
// - Cantidad total de piezas producidas por maquina.
// - Porcentaje de piezas defectuosas producidas por maquina.

#include <iostream>
using namespace std;

int main ()
{
    double pieza, diametro, pieza2, diametro2, pieza3, diametro3;
    double pnt = 0, pnt2 = 0, pnt3 = 0;
    double pt = 0, pt2 = 0, pt3 = 0;

    cout << "Ingrese la cantidad de piezas de la maquina 1: "; cin >> pieza;
    cout << "Ingrese la cantidad de piezas de la maquina 2: "; cin >> pieza2;
    cout << "Ingrese la cantidad de piezas de la maquina 3: "; cin >> pieza3;
    
    for (int i = 0; i < pieza; i++)
    {
        cout << "Ingrese el diametro de la pieza de la maquina 1 (mm): "; cin >> diametro;
        if (diametro < 9 || diametro > 11)
        {
            pnt++;
        }
        else 
        {
            pt++;
        }
    }
    for (int i = 0; i < pieza2; i++)
    {
        cout << "Ingrese el diametro de la pieza de la maquina 2 (mm): "; cin >> diametro2;
        if (diametro2 < 9 || diametro2 > 11)
        {
            pnt2++;
        }
        else 
        {
            pt2++;
        }
    }
    for (int i = 0; i < pieza3; i++)
    {
        cout << "Ingrese el diametro de la pieza de la maquina 3 (mm): "; cin >> diametro3;
        if (diametro3 < 9 || diametro3 > 11)
        {
            pnt3++;
        }
        else 
        {
            pt3++;
        }
    }

    double ppb = (pt / pieza) * 100;
    double ppm = (pnt / pieza) * 100;
    double ppb2 = (pt2 / pieza2) * 100;
    double ppm2 = (pnt2 / pieza2) * 100;
    double ppb3 = (pt3 / pieza3) * 100;
    double ppm3 = (pnt3 / pieza3) * 100;
    cout << "La cantidad de piezas con la tolerancia especifica es: " << pt << endl;
    cout << "La cantidad de piezas que incumplen la tolerancia es: " << pnt << endl;
    cout << "El porcentaje de piezas buenas es de: " << ppb << "%" << endl;
    cout << "El porcentaje de piezas malas es de: " << ppm << "%" << endl;
    cout << "La cantidad de piezas con la tolerancia especifica es: " << pt2 << endl;
    cout << "La cantidad de piezas que incumplen la tolerancia es: " << pnt2 << endl;
    cout << "El porcentaje de piezas buenas es de: " << ppb2 << "%" << endl;
    cout << "El porcentaje de piezas malas es de: " << ppm2 << "%" << endl;
    cout << "La cantidad de piezas con la tolerancia especifica es: " << pt3 << endl;
    cout << "La cantidad de piezas que incumplen la tolerancia es: " << pnt3 << endl;
    cout << "El porcentaje de piezas buenas es de: " << ppb3 << "%" << endl;
    cout << "El porcentaje de piezas malas es de: " << ppm3 << "%" << endl;
    cout << "La cantidad de piezas producidas por la maquina 1 es: " << pieza << endl; 
    cout << "La cantidad de piezas producidas por la maquina 2 es: " << pieza2 << endl; 
    cout << "La cantidad de piezas producidas por la maquina 3 es: " << pieza3 << endl; 
    return 0;
}