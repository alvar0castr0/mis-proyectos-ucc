#include <iostream>
using namespace std;

int main (){
    int edad1 = 0;
    int edad2 = 0;
    int edad3 = 0;
    int edad4 = 0; 

    cout << "Ingrese la cantidad de edades" << endl;
    cin >> edad4; 

    for (int i=0; i < edad4;i++){
        cout << "Ingrese una edad" << endl;
        cin >> edad1;
        edad2 = edad1 + edad2;
    }
    edad3 = edad2 / edad4;
    cout << "Edad promedio: " << edad3; 
    return 0; 

}