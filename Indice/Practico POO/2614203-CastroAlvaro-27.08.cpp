/*
Clase producto (sistema de tienda)
Crear una clase Producto con atributos privados:
nombreProducto (string)
precio (double)
stock (int)

Requisitos:
Setters y getters para todos los atributos.
El setter de precio no debe permitir valores negativos.
Agregar un metodo venderUnidad() que reduzca el stock en 1, pero solo si hay stock disponible.
En el main(), crear 2 o 3 productos, simular ventas, y mostrar el estado final de cada uno
con los getters.
*/

#include <iostream>
#include <string>
using namespace std;

class Producto {
    private:
        string nombreProducto;
        double precio;
        int stock;

    public:
        Producto();
        Producto(string _nombreProducto, double _precio, int _stock);

        void mostrarDatos();

        void setNombreProducto(string _nombreProducto);
        string getNombreProducto();

        void setPrecio(double _precio);
        double getPrecio();

        void setStock(int _stock);
        int getStock();

        void venderUnidad();
};

Producto::Producto() {
    nombreProducto = "Sin nombre";
    precio = 0.0;
    stock = 0;
}

Producto::Producto(string _nombreProducto, double _precio, int _stock) {
    nombreProducto = _nombreProducto;
    precio = (_precio >= 0) ? _precio : 0.0;
    stock = (_stock >= 0) ? _stock : 0;
}

void Producto::mostrarDatos() {
    cout << "Producto: " << nombreProducto << " | Precio: $" << precio << " | Stock actual: " << stock << endl;
}

void Producto::setNombreProducto(string _nombreProducto) {
    nombreProducto = _nombreProducto;
}

string Producto::getNombreProducto() {
    return nombreProducto;
}

void Producto::setPrecio(double _precio) {
    if (_precio >= 0) {
        precio = _precio;
    } else {
        cout << "El precio no puede ser un numero negativo." << endl;
    }
}

double Producto::getPrecio() {
    return precio;
}

void Producto::setStock(int _stock) {
    if (_stock >= 0) {
        stock = _stock;
    } else {
        cout << "El stock no puede ser negativo." << endl;
    }
}

int Producto::getStock() {
    return stock;
}

void Producto::venderUnidad() {
    if (stock > 0) {
        stock--;
        cout << "--> Venta exitosa. Total a cobrar: $" << precio << endl;
        cout << "--> Quedan " << stock << " unidades en stock." << endl;
    } else {
        cout << "--> No se pudo realizar la venta: ¡Sin stock de " << nombreProducto << "!" << endl;
    }
}

int main() {
    const int CANTIDAD = 3;
    Producto productos[CANTIDAD];

    string nom;
    double prec;
    int st;

    cout << "=== SISTEMA DE GESTION DE TIENDA ===" << endl;
    cout << "Carga inicial de " << CANTIDAD << " productos:" << endl;

    for (int i = 0; i < CANTIDAD; i++) {
        cout << endl << "--- Producto " << (i + 1) << " ---" << endl;
        
        cout << "Ingrese nombre: ";
        cin >> nom;
        productos[i].setNombreProducto(nom);

        cout << "Ingrese precio: $";
        cin >> prec;
        productos[i].setPrecio(prec);

        cout << "Ingrese stock inicial: ";
        cin >> st;
        productos[i].setStock(st);
    }

    int opcion = 0;

    do {
        cout << endl << "========== MENU DE OPCIONES ==========" << endl;
        cout << "1. Ver catalogo completo" << endl;
        cout << "2. Realizar una venta" << endl;
        cout << "3. Salir y mostrar reporte final" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                cout << endl << "--- LISTA DE PRODUCTOS ---" << endl;
                for (int i = 0; i < CANTIDAD; i++) {
                    cout << (i + 1) << ") ";
                    productos[i].mostrarDatos();
                }
                break;
            }
            case 2: {
                int prodElegido = 0;
                cout << endl << "Ingrese el numero de producto a vender (1 a " << CANTIDAD << "): ";
                cin >> prodElegido;

                if (prodElegido >= 1 && prodElegido <= CANTIDAD) {
                    productos[prodElegido - 1].venderUnidad();
                } else {
                    cout << "Opcion fuera de rango." << endl;
                }
                break;
            }
            case 3:
                cout << endl << "Finalizando la jornada laboral..." << endl;
                break;

            default:
                cout << "Opcion incorrecta, intente de nuevo." << endl;
        }

    } while (opcion != 3);

    cout << endl << "========================================" << endl;
    cout << "       REPORTE FINAL DE STOCK           " << endl;
    cout << "========================================" << endl;

    for (int i = 0; i < CANTIDAD; i++) {
        cout << "Producto " << (i + 1) << ":" << endl;
        cout << "  * Nombre: " << productos[i].getNombreProducto() << endl;
        cout << "  * Precio: $" << productos[i].getPrecio() << endl;
        cout << "  * Stock restante: " << productos[i].getStock() << " unidades" << endl;
        cout << "----------------------------------------" << endl;
    }

    return 0;
}