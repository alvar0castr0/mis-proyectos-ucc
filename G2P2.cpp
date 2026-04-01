#include <iostream>
#include <numbers>
using namespace std;

int main() { 
    double perimetro, radio; 
    double pi = 3.14159265;
    std::cout << pi << std::endl;
    
    do {
        cout << "Ingrese el radio" << endl;
        cin >> radio;
        
        if (radio<=0) {
            cout << "Error";
        } 

    } while (radio <= 0);

    if (radio>0) {
        perimetro = 2 * pi * radio;
        cout << "El perimetro es: " << perimetro << endl;
    }
    
    return 0;
}
