// 3) Repetir el ejercicio anterior, considerando que la figura a dibujar es un rectángulo.
#include <iostream>
using namespace std;

void rectangulo (int lado);

int main ()
{
    int lado;
    cout << "Ingrese el lado del rectangulo" << endl; 
    cin >> lado;
    rectangulo (lado);
    return 0;
}

void rectangulo (int lado)
{
    for (int i = 0; i < lado+2; i++)
    {
        cout << "*" << " ";
    }
    cout << endl;
    
    for (int l = 0; l < lado/2; l++) {
        cout << "*"; for (int j = 0; j < lado+5; j++) {cout << " ";}; cout << "*"; cout << endl;
    }
    
    for (int k = 0; k < lado+2; k++)
    {
        cout << "*" << " ";;
    }


} 
