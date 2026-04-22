#include <iostream>
using namespace std;

void cuadrado (int lado);

int main ()
{
    int lado;
    cout << "Ingrese el lado del cuadrado" << endl; 
    cin >> lado;
    cuadrado (lado);
    return 0;
}

void cuadrado (int lado)
{
    for (int i = 0; i < lado; i++)
    {
        cout << "*";
    }
    cout << endl;
    
    for (int l = 0; l < lado-2; l++) {
        cout << "*"; for (int j = 0; j < lado-2; j++) {cout << " ";}; cout << "*"; cout << endl;
    }
    
    for (int k = 0; k < lado; k++)
    {
        cout << "*";
    }
} 
