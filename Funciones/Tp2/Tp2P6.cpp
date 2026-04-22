#include <iostream>
using namespace std;

void transformacion (int &hora, int &minuto, int &segundo)
{
    if (segundo >= 60)
    {
        minuto = (segundo / 60) + minuto;
        segundo = (segundo % 60);
    }
    if (minuto >= 60)
    {
        hora = (minuto / 60) + hora;
        minuto = (minuto % 60);
    }
}

int main ()
{
    int hora, minuto, segundo;
    hora = 3;
    minuto = 118;
    segundo = 195;
    transformacion(hora, minuto, segundo);
    cout << hora << "h " << minuto << "m " << segundo << "s " << endl;

    return 0;
}