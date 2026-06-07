#include <iostream>
#include <fstream>
using namespace std;

int main(){
ifstream fich("act1.txt");
if (!fich.is_open()) {
cout << "Error al abrir act1.txt\n";
exit(EXIT_FAILURE);
}
int i = 0;
int valor;
int datos[20];
while (fich >> valor){
datos[i] = valor;
i++;
}

ofstream a("respuesta1.txt");
if (!a){
cout << "Error al abrir ejemplo.txt\n";
exit(EXIT_FAILURE);
}

for (int i = 0; i < 10; ++i){
a << i << endl;
}
}