// 12). Realizar un programa que simule un juego de dados con las siguientes reglas: El jugador tira dos dados. Cada dato tiene seis caras. Las caras contienen 1, 2, 3, 4, 5 y 6 untos
// Una vez que los dados se hayan detenido, se calcula la suma de los puntos en las dos caras superiores.
// - Si la suma es 7 u 11, el jugador gana y acaba el juego
// - Si la suma es 2, 3 o 12 el jugador pierde y acaba el juego
// - Si la suma es 4, 5, 6, 8, 9 ó 10 se repite la jugada hasta que gane o pierda
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int random ();
string verificar (int s);

int main ()
{
    srand(time(NULL));
    string tirar;
    cout << "Tire los dados escribiendo (tirar)" << endl;
    cin >> tirar;
    
    while (tirar != "tirar")
    {
        cout << "Debe escribir 'tirar' para continuar" << endl;
        cin >> tirar;
    }

    int s = random ();
    cout << verificar (s);

    return 0;
}

int random ()
{
    int numero1 = (rand() % 6) + 1; //dado 1
    int numero2 = (rand() % 6)+ 1; //dado2
    int s = 0;
    s = numero1 + numero2; //suma de dados
    return s;
}

string verificar(int s) 
{
    if (s == 7 || s == 11)
    {
        return "Has ganado";
        
    }
    else if (s == 2 || s == 3 || s == 12)
    {
        return "Has perdido";

    }
    int punto = s;
    while (s != punto && s!= 7 && s != 11)
    {
        random ();
    }
    if (s == punto || s == 11)
    {
        return "Has ganado";
    }
    else 
    {
        return "Has perdido";
    }
}