#include <fstream> // Para ofstream
#include <iostream> // Para cout
using namespace std;

void muestra_vector(int contador);

int main() {
ifstream fich("respuesta2.txt");
if (!fich.is_open())
{
cout << "Error al abrir respuesta2.txt\n";
exit(EXIT_FAILURE);
}
string palabra;
int i = 0;
while (fich >> palabra){
i++;
}
muestra_vector(i);
return 0;
}

void muestra_vector(int contador)
{
    cout << "La cantidad de datos es: " << contador;
}
