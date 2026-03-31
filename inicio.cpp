#include <iostream>
using namespace std; 

int main()
{
    int velocidad, tiempo, distancia;
    cout << "Ingrese la velocidad";
    cin >> velocidad;
    cout << "Ingrese el tiempo";
    cin >> tiempo;
    
    if (velocidad != 0) { 
        distancia = velocidad * tiempo;
    }
    
    cout << distancia; 
    
    return 0;
}