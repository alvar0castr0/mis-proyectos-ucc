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