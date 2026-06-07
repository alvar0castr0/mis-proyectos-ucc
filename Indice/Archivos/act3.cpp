#include <fstream> // Para ofstream
#include <iostream> // Para cout
#include <sstream>
using namespace std;

int main() {
ifstream archivo("respuesta3.md");
if (!archivo.is_open())
{
cout << "Error al abrir respuesta3.md\n";
exit(EXIT_FAILURE);
}

const int diametro = 22;
const double tolerancia = 0.05;

int iguales = 0, menores = 0, sepasan = 0;
string linea;
archivo >> linea >> linea;
char pipe;
int pieza, medida;

while (archivo >> pipe >> pieza >> pipe >> medida >> pipe){
if (medida == diametro) {
    iguales++;
}
if (medida < diametro) {
    menores++;
}
}

double diferencia = abs(medida - diametro) / (double)diametro;
if (diferencia > tolerancia)
{sepasan++;}

cout << "Piezas con medida igual al diametro: " << iguales << endl;
cout << "Piezas con medida menor al diametro: " << menores << endl;
cout << "Piezas con diferencia mayor al 5%: " << sepasan << endl;

}
