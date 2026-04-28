// 9) Crear una función que dibuje un reloj de arena de tamaño variable.
//* * * * *
//  * * *
//    *
//  * * *
//* * * * *


#include <iostream>
using namespace std; 

void reloj (int variable);

int main () 
{
    int variable;
    cout << "Ingrese el tamaño de su reloj" << endl;
    cin >> variable;
    reloj (variable);
    return 0;

}

void reloj (int variable)
{
    int filas = (variable + 1) / 2;

    for (int i = 1; i <= filas; i++)
    {
        
        for (int k = 0; k < i - 1; k++) 
            cout << " ";
        
        for (int k = 0; k < variable - 2 * (i - 1); k++)
            cout << "*"; 
        cout << endl;
    }
    
    for (int i = 2; i <= filas; i++)
    {
        
        for (int k = 0; k < filas - i; k++) 
            cout << " ";
        
        for (int k = 0; k < 2 * i-1; k++)
            cout << "*"; 
        cout << endl;
    }
}

