#include <iostream>
using namespace std;

int main()
{
    int base, altura, perimetro, area;
    base = 0;
    altura = 0;
    perimetro = 0;
    area = 0;

    while (true) {

        do {
            cout << "Ingrese la base" << endl;
            cin >> base;
        
            if (base <= 0) {
            cout << "Ingrese una base mayor a 0" << endl;
            }
        }  while (base <= 0);  
    
        do {
            cout << "Ingrese la altura" << endl; 
            cin >> altura;
        
            if (altura <= 0){
            cout << "Ingrese una altura mayor a 0" << endl;
            }
        }  while (altura <= 0); 

        area = base * altura;
        perimetro = base + base + altura + altura;
    }
}