#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

string random (int numero1, int numero2)
{
    srand(time(NULL));
    numero1 = (rand() % 6) + 1;
    srand(time(NULL));
    numero2 = (rand() % 6)+ 1;
    int s = 0;
    s = numero1 + numero2;
    if (s || 7 && s || 11)
    {
        return "Has ganado";
        return 0;
        
    }
    else if (s == 2 || s == 3 || s == 11)
    {
        return "Has perdido"
        return 0;
    }
    else 
    {

    }
}

int main ()
{
    string tirar;
    cout << "Tire los dados escribiendo (tirar)" << endl;
    cin >> tirar;
    
    while (tirar != "tirar")
    {
        cout << "Debe escribir 'tirar' para continuar" << endl;
        cin >> tirar;
    }
}