#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

void tirarDados(int &d1, int &d2, int &suma);
void mostrarDados(int d1, int d2, int suma);
void esperarTirada();
void separador();

int main()
{
    srand(time(NULL));

    separador();
    cout << "          JUEGO DE DADOS" << endl;
    separador();
    cout << endl;
    cout << "  REGLAS:" << endl;
    cout << "   - Primera tirada 7 u 11    -> GANAS" << endl;
    cout << "   - Primera tirada 2, 3 o 12 -> PIERDES" << endl;
    cout << "   - Otro numero = tu PUNTO" << endl;
    cout << "     * Vuelve a sacar ese numero -> GANAS" << endl;
    cout << "     * Saca un 7               -> PIERDES" << endl;
    cout << endl;
    separador();
    cout << endl;

    int d1, d2, suma;

    // Primera tirada
    esperarTirada();
    tirarDados(d1, d2, suma);
    mostrarDados(d1, d2, suma);

    if (suma == 7 || suma == 11)
    {
        cout << endl;
        cout << "  *** SUMA " << suma << " -- !GANASTE! ***" << endl;
    }
    else if (suma == 2 || suma == 3 || suma == 12)
    {
        cout << endl;
        cout << "  *** SUMA " << suma << " -- !PERDISTE! ***" << endl;
    }
    else
    {
        int punto = suma;
        cout << endl;
        cout << "  >> Tu PUNTO es: [ " << punto << " ] <<" << endl;
        cout << "  >> Saca " << punto << " para ganar | Saca 7 para perder" << endl;

        while (true)
        {
            cout << endl;
            esperarTirada();
            tirarDados(d1, d2, suma);
            mostrarDados(d1, d2, suma);
            cout << endl;

            if (suma == punto)
            {
                cout << "  *** !SACASTE TU PUNTO! [" << punto << "] -- !GANASTE! ***" << endl;
                break;
            }
            else if (suma == 7)
            {
                cout << "  *** !SACASTE 7! -- !PERDISTE! ***" << endl;
                break;
            }
            else
            {
                cout << "  >> Sacaste: " << suma << "  |  Tu punto: " << punto << "  |  Sigue tirando..." << endl;
            }
        }
    }

    cout << endl;
    separador();
    cout << "           FIN DEL JUEGO" << endl;
    separador();
    cout << endl;

    return 0;
}

void tirarDados(int &d1, int &d2, int &suma)
{
    d1 = (rand() % 6) + 1;
    d2 = (rand() % 6) + 1;
    suma = d1 + d2;
}

void mostrarDados(int d1, int d2, int suma)
{
    cout << endl;
    cout << "  .-------.    .-------." << endl;
    cout << "  |       |    |       |" << endl;
    cout << "  |   " << d1 << "   |    |   " << d2 << "   |   =>  Suma: " << suma << endl;
    cout << "  |       |    |       |" << endl;
    cout << "  `-------'    `-------'" << endl;
}

void esperarTirada()
{
    string dummy;
    cout << "  [ Presiona ENTER para tirar los dados ]";
    getline(cin, dummy);
}

void separador()
{
    cout << "=================================" << endl;
}
