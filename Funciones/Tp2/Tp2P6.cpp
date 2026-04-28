// 6). Dada una medida de tiempo expresada en horas, minutos y segundos con valores arbitrarios, obtenga un programa que transforme dicha medida en una expresión correcta. Por ejemplo, dada la medida 3h 118m 195s, el programa deberá obtener como resultado 5h 1m 15s
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