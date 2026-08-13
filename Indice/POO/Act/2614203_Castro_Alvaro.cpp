#include <iostream>
#include <fstream>
using namespace std;

// -----------------------------------------------Estructura-----------------------------------------------
struct MP3
{
  string NombreArtista;
  string NombreCancion;
  double TiempoCancion;
  double TamañoArchivo;
};

// ------------------------------------------------Funciones-------------------------------------------------
void agregarArchivo(MP3 Arch[], int &cantidad);
bool Existe(MP3 Arch[], int cantidad, string NombreArtista, string NombreCancion);
void BuscarArtistas(MP3 Arch[], int cantidad);
void GenerarArchivo(MP3 Arch[], int cantidad);
void GenerarArchivoMP3(MP3 Arch[], int cantidad);


void agregarArchivo(MP3 Arch[], int &cantidad)
{
  string NombreArtista, NombreCancion;

  cout << "Ingrese el nombre del artista: ";
  cin >> NombreArtista;
  cout << "Ingrese el nombre de la canción: ";
  cin >> NombreCancion;

  if (Existe(Arch, cantidad, NombreArtista, NombreCancion))
  {
    cout << "El archivo MP3 ya existe." << endl;
    return; // Salir de la función si el archivo ya existe

  }else {
    cout << "Ingrese el tiempo de la canción (en minutos): ";
    cin >> Arch[cantidad].TiempoCancion;
    cout << "Ingrese el tamaño del archivo (en MB): ";
    cin >> Arch[cantidad].TamañoArchivo;

    Arch[cantidad].NombreArtista = NombreArtista;
    Arch[cantidad].NombreCancion = NombreCancion;

    cantidad++;
  }

}

bool Existe(MP3 Arch[], int cantidad, string NombreArtista, string NombreCancion)
{
  for (int i = 0; i < cantidad; i++)
  {
    if (Arch[i].NombreArtista == NombreArtista && Arch[i].NombreCancion == NombreCancion)
    {
      return true; // Retorna true si el archivo MP3 ya existe
    }
  }
  return false; // Retorna false si no existe
}

void BuscarArtistas(MP3 Arch[], int cantidad)
{
  string NombreArtista;
  cout << "Ingrese el nombre del artista a buscar: ";
  cin >> NombreArtista;
  bool encontrado = false;

  for (int i = 0; i < cantidad; i++)
  {
    if (Arch[i].NombreArtista == NombreArtista)
    {
      cout << "Canción: " << Arch[i].NombreCancion << endl;
      encontrado = true;
    }
  }

  if (!encontrado)
  {
    cout << "No se encontraron canciones del artista: " << NombreArtista << endl;
  }

}

void GenerarArchivo(MP3 Arch[], int cantidad)
{
  ofstream archivo;
  archivo.open("ListaCanciones.txt");

  if (!archivo)
  {
    cout << "Error al abrir el archivo" << endl;
    return;
  }

  for (int i = 0; i < cantidad; i++)
  {
    archivo << "Artista: " << Arch[i].NombreArtista << endl;
    archivo << "Canción: " << Arch[i].NombreCancion << endl;
    archivo << "Tiempo: " << Arch[i].TiempoCancion << " minutos" << endl;
    archivo << "Tamaño: " << Arch[i].TamañoArchivo << " MB" << endl;
    archivo << "-------------------------------------------" << endl;
  }

  archivo.close();
  cout << "Archivo 'ListaCanciones.txt' generado." << endl;
}

void GenerarArchivoMP3(MP3 Arch[], int cantidad)
{
  ofstream archivo;
  archivo.open("ListaMP3.txt");

  if (!archivo)
  {
    cout << "Error al intentar abrir el archivo" << endl;
    return;
  }

  for (int i = 0; i < cantidad; i++)
  {
    archivo << Arch[i].NombreArtista << " - " << Arch[i].NombreCancion << endl;
  }

  archivo.close();
  cout << "Archivo 'ListaMP3.txt' generado." << endl;

}


//-----------------------------------------------Main-------------------------------------------------
int main ()
{
  MP3 Arch[100];
  int opcion, cantidad = 0;

  do {

    cout << "===== MENU =====" << endl;
    cout << "1 - Agregar Archivo " << endl;
    cout << "2 - Buscar Artistas" << endl;
    cout << "3 - Generar Archivo con las listas de Canciones" << endl;
    cout << "4 - Generar Archivo con lista de mp3" << endl;
    cout << "5 - Salir" << endl;
    cin >> opcion;

    if (opcion >= 1 && opcion <= 5) {
        switch(opcion) {
           case 1:
            agregarArchivo(Arch, cantidad);
            break;

           case 2:
            BuscarArtistas(Arch, cantidad);
            break;

           case 3:
           GenerarArchivo(Arch, cantidad);
            break;

           case 4:
           GenerarArchivoMP3(Arch, cantidad);
            break;

           case 5:
           cout << "Fin del programa" << endl;
           break;

          }

   } else { cout << "Opcion incorrecta" << endl;}

  } while (opcion != 5);
  return 0;


}