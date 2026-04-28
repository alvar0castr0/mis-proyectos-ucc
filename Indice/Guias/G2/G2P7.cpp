// Consigna: En una veterinaria se desea saber el promedio de edad de gatos y perros (por separados)
// que fueron asistidos durante un mes. En total se registran N animales.
// La veterinaria solo atiende gatos y perros.

#include <iostream>
using namespace std;

int main() {
    int numerogatos = 0, gatosedad = 0, gatosedadfinal = 0;
    int numeroperros = 0, perrosedad = 0, perrosedadfinal = 0;
    float perrosprom = 0, gatosprom = 0;
    cout << "Ingrese la cantidad de perros" << endl; 
    cin >> numeroperros; 
    
    for (int i=1; i <= numeroperros; i++ ){
        cout << "Ingrese edad" << endl;
        cin >> perrosedad;
        perrosedadfinal = perrosedad + perrosedadfinal;
    }
    
    if (numeroperros > 0) {
        perrosprom = (float)perrosedadfinal / numeroperros;
        cout << "Promedio perros: " << perrosprom << endl;
    }

    cout << "Ingrese la cantidad de gatos" << endl;
    cin >> numerogatos;

    for (int i=1; i <= numerogatos; i++){
        cout << "Ingrese edad" << endl;
        cin >> gatosedad;
        gatosedadfinal = gatosedad + gatosedadfinal;
    }

    if (numerogatos > 0) {
        gatosprom = (float)gatosedadfinal / numerogatos;
        cout << "Promedio gatos: " << gatosprom << endl;
    }

    return 0; 

}