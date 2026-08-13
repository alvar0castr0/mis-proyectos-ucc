#include <fstream> // Para ofstream
#include <iostream> // Para cout
using namespace std;
int main()
{
 ofstream fich("ejemplo.txt");
 if (!fich)
 {
cout << "Error al abrir ejemplo.txt\n";
exit(EXIT_FAILURE);
 }
// Ciclo de grabación
 for (int i = 0; i < 10; ++i)
fich << i << endl;
}
