#include <iostream>

using namespace std;

int main (int arfc, char *argv[])
{
  if (argc==1)
  {
    printf("Faltan parametros...\n");
    return 1;
  }
  cout << "Hola" << argv[1];
  cout << "Fin del programa" << argv[0];
  return 0;
}
