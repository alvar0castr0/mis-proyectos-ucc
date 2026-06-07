#include <iostream>
using namespace std;

struct producto {
    string nombre;
    float precio;
    int cantidad;
};

void carga (producto inventario[], int tam);
void vender(producto inventario[], int tam);
void mostrarInventario(producto inventario[], int tam);

int main (){
    producto inventario[5];
    int tam = 5;
    carga (inventario, tam);
    vender (inventario, tam);
    mostrarInventario(inventario, tam);
    return 0;
}

void carga (producto inventario[], int tam)
{
    
    cout << "---Ingrese los datos---" << endl;
    for (int i = 0; i < tam; i++){
        cout << "Nombre del producto" << endl;
        cin >> inventario[i].nombre;

        cout << "Precio del producto" << endl;
        cin >> inventario[i].precio;

        cout << "Cantidad en stock" << endl;
        cin >> inventario[i].cantidad;
    }
}

void vender(producto inventario[], int tam) {
    string nombreBuscar;
    int cantidadAVender;
    bool encontrado = false;
    cout << "Nombre del producto que busca: ";
    cin >> nombreBuscar;
    cout << "Cantidad de ese producto: ";
    cin >> cantidadAVender;

    for (int i = 0; i < tam; i++) {
        if (inventario[i].nombre == nombreBuscar) {
            encontrado = true;
            if (inventario[i].cantidad < cantidadAVender){
                cout << "No contamos con el stock necesario. Solo nos quedan " << inventario[i].cantidad << "unidades." << endl;
            }
            else {inventario[i].cantidad = inventario[i].cantidad - cantidadAVender; cout << "Producto vendido" << endl;
            }
            break;
        }
    }

    if (encontrado == false) {
        cout << "No contamos con el producto: " << nombreBuscar << endl;
    }
}

void mostrarInventario(producto inventario[], int tam) {
    cout << "---El inventario---" << endl;
    for (int i = 0; i < tam; i++){
        cout << "Producto: " << inventario[i].nombre
            << " | Precio: $" << inventario[i].precio
            << " | Cantidad: " <<inventario[i].cantidad << endl;
    }
}

