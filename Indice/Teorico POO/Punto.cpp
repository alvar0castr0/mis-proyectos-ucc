/* DEsarrollar una clase que represente un unto en el plano y tenga los siguientes metodos: 
cargar los valores de x e y, imprimir en que cuadrante se encuentra dicho punto 
(concepto matematico, primer cuadrante si x e y son positivas, si x<0 e y<0 segundo cuadrante, etc) */

#include <iostream>
using namespace std;

class Punto {
    private: 
        float x;
        float y;
    public:
        Punto()
        {
            x = 0;
            y = 0;
        }
        void cargar(float _x, float _y)
        {
            x = _x;
            y = _y;
        }
        void imprimirCuadrante()
        {
            if (x > 0 && y > 0)
            {
                cout << "El punto se encuentra en el primer cuadrante." << endl;
            }
            else if (x < 0 && y > 0)
            {
                cout << "El punto se encuentra en el segundo cuadrante." << endl;
            }
            else if (x < 0 && y < 0)
            {
                cout << "El punto se encuentra en el tercer cuadrante." << endl;
            }
            else if (x > 0 && y < 0)
            {
                cout << "El punto se encuentra en el cuarto cuadrante." << endl;
            }
            else if (x == 0 && y != 0)
            {
                cout << "El punto se encuentra sobre el eje Y." << endl;
            }
            else if (x != 0 && y == 0)
            {
                cout << "El punto se encuentra sobre el eje X." << endl;
            }
            else
            {
                cout << "El punto se encuentra en el origen." << endl;
            }
        }
};

int main()
{
    Punto P;
    P.cargar(3, 4);
    P.imprimirCuadrante(); // Imprime "El punto se encuentra en el primer cuadrante."
    P.cargar(-2, 5);
    P.imprimirCuadrante(); // Imprime "El punto se encuentra en el segundo cuadrante."
    P.cargar(-3, -4);
    P.imprimirCuadrante(); // Imprime "El punto se encuentra en el tercer cuadrante."
    P.cargar(2, -5);
    P.imprimirCuadrante(); // Imprime "El punto se encuentra en el cuarto cuadrante."
    P.cargar(0, 3);
    P.imprimirCuadrante(); // Imprime "El punto se encuentra sobre el eje Y."
    P.cargar(4, 0);
    P.imprimirCuadrante(); // Imprime "El punto se encuentra sobre el eje X."
    P.cargar(0, 0);
    P.imprimirCuadrante(); // Imprime "El punto se encuentra en el origen."

    return 0;
}
