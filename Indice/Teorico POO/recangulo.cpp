#include <iostream>
using namespace std;

class Rectangulo {
    private: 
        int base, altura;
    public: 
        Rectangulo (); //Constructor default, la firma del constructor tiene que replicar el nombre de la clase 
        Rectangulo (int base, int altura); //Especifico los datos, se pueden hacer mas de un constructor
        void setBase (int base); //Ingreso de datos en el atributo
        void setAltura (int altura);
        int getBase (); //Recibo los datos
        int getAltura ();
        int perimetro (); //defino el metodo general, que no es un atributo, sino una funcion que devuelve un valor
        int superficie ();
    ~Rectangulo () //Destructor, se ejecuta cuando el objeto deja de existir, se puede usar para liberar memoria
    {
        //
    };
};

    //Definicion de los metodos
    Rectangulo:: Rectangulo ()
    {
         base = 0;

    altura = 0;
        }
        Rectangulo:: Rectangulo (int base, int altura)
        {
            this->base = base; //this hace referencia al objeto que invoca el metodo
            this->altura = altura;
        }

        void Rectangulo:: setBase (int base)

        {
            this->base = base; // this porque hace referencia al objeto que invoca el metodo
        }

        void Rectangulo:: setAltura (int altura)

        {
            this->altura = altura;
        }

        int Rectangulo:: getBase () 
        {
            return this->base; //return porque devuelve el valor del atributo
        }
        int Rectangulo:: getAltura ()
        {
            return this->altura;
        }
        //Metodo general
        int Rectangulo:: perimetro ()  {
            return 2 * base + 2 * altura;
        }
        int Rectangulo:: superficie ()
        {
            return base * altura;
        }
}


int main ()
{
    Rectangulo R();
    Rectangulo X(3, 4);

    cout << R.Superficie();
    R.setBase(5);
    R.setAltura(6);
    cout << R.Superficie();
    R.setAltura(3);
    cout << R.Superficie();
    cout << X.superficie();
    /* Para punteros, se hace de la siguiente manera:
    Rectangulo *R;
    R = new R(); //Se crea el objeto en memoria dinamica

    R->superficie();
    delete R; //Se libera la memoria del objeto
    */
    return 0;
}
