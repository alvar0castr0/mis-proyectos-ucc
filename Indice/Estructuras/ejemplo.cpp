# include <iostream>
using namespace std;

struct Alumno {
char nombre [25];
char apellido [10];
int edad;
int anio;
int notas[4];
float promedio;
};

int main () {
Alumno R1;
R1 = {"Pedro", "Valdez", 20, 1};
R1.notas[0] = 4;
R1.notas[1] = 6;
R1.notas[2] = 10;
R1.notas[3] = 2;

// Muestra los datos
cout << R1.nombre <<" ";
cout << R1.apellido << endl;
cout << R1.edad << endl;
cout << R1.anio << endl;
cout << "Notas" << endl;
for (int i = 0; i<=3; i++)
{
 cout << R1.notas[i]<<endl;
}
return 0;
}