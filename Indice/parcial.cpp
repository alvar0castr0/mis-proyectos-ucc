#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// ===== ESTRUCTURA =====
struct Siniestro
{
    int numeroCaso;
    int poliza;
    float costo;
    float cobertura;
    string ciudad;
};

// ===== FUNCIONES =====
// Carga los datos del archivo
void cargarArchivo(Siniestro casos[], int &cantidad)
{
    ifstream archivo;

    archivo.open("siniestros.txt");

    if (!archivo)
    {
        cout<<"Error al abrir el archivo"<<endl;
        return;
    }

    string leerencabezado;

    archivo >> leerencabezado; //Numero
    archivo >> leerencabezado; //caso
    archivo >> leerencabezado; //poliza
    archivo >> leerencabezado; // costo
    archivo >> leerencabezado; //cobertura
    archivo >> leerencabezado; //ciudad


    while(archivo >> casos[cantidad].numeroCaso)
    {
        archivo >> casos[cantidad].poliza;
        archivo >> casos[cantidad].costo;
        archivo >> casos[cantidad].cobertura;
        archivo >> casos[cantidad].ciudad;
        cantidad++;
    }
    archivo.close();
}

// Calcula lo que paga la empresa
float calcularPago(Siniestro s)
{
    float pago;

    pago = s.costo * s.cobertura / 100;

    return pago;
}

// Mostrar casos de una ciudad
void mostrarPorCiudad(Siniestro casos[], int cantidad, string ciudad)
{
    cout<<"Casos de " << ciudad << endl;
    bool encontro = false;

    for(int i=0; i<cantidad; i++)
    {
        if(casos[i].ciudad == ciudad)
        {

            cout << "Numero Caso: " << casos[i].numeroCaso << endl;
            cout << "Poliza: " << casos[i].poliza << endl;
            cout << "Costo: " << casos[i].costo << endl;
            cout << "Cobertura: " << casos[i].cobertura << "%" << endl;
            cout << "Pago empresa: " << calcularPago(casos[i]) << endl;

            cout<<"--------------------"<<endl;
        }
    }

    if (!encontro) {
        cout << "No se encontraron casos para la ciudad especificada (Respeta mayusculas y sin acentos.)" << endl;
    }
}


// Cantidad de casos por ciudad
void contarCiudad(Siniestro casos[], int cantidad)
{
    int cordoba = 0;
    int salta = 0;
    int mendoza = 0;


    for(int i=0; i<cantidad; i++)
    {

        if(casos[i].ciudad == "Cordoba")
        {
            cordoba++;
        }

        else if(casos[i].ciudad == "Salta")
        {
            salta++;
        }

        else if(casos[i].ciudad == "Mendoza")
        {
            mendoza++;
        }
    }

    cout << "Cantidad de casos:" << endl;
    cout << "Cordoba: " << cordoba << endl;
    cout << "Salta: " << salta << endl;
    cout << "Mendoza: " << mendoza << endl;
}

// Mostrar errores
void mostrarErrores(Siniestro casos[], int cantidad)
{
    cout << "Casos con errores:" << endl;

    for(int i = 0; i<cantidad; i++)
    {
        if(casos[i].costo <= 0 || casos[i].cobertura <= 0 || casos[i].ciudad == "-")
        {
            cout<<"Caso: " << casos[i].numeroCaso<<endl;
        }
    }
}

// Crear archivo liquidacion
void generarLiquidacion(Siniestro casos[], int cantidad)
{
    ofstream archivo;
    archivo.open("liquidacion.txt");

    if (!archivo)
    {
        cout<<"No se pudo crear archivo"<<endl;
        return;
    }

    float cordoba = 0;
    float salta = 0;
    float mendoza = 0;

    for (int i = 0; i < cantidad; i++)
    { 
        float pago = calcularPago(casos[i]);

        if(casos[i].ciudad == "Cordoba")
        {
            cordoba += pago;
        }

        else if(casos[i].ciudad == "Salta")
        {
            salta += pago;
        }

        else if(casos[i].ciudad == "Mendoza")
        {
            mendoza += pago;
        }
    }

    archivo << "Liquidacion por ciudad" << endl;
    archivo << "Cordoba: " << cordoba << endl;
    archivo << "Salta: " << salta << endl;
    archivo << "Mendoza: " << mendoza << endl;
    archivo.close();
    cout<<"Archivo liquidacion generado"<<endl;
}

// Crear archivo errores
void generarErrores(Siniestro casos[], int cantidad)
{
    ofstream archivo;
    archivo.open("errores.txt");

    if (!archivo)
    {
        cout<<"No se pudo crear archivo"<<endl;
        return;
    }

    for(int i = 0; i < cantidad; i++)
    {
        if (casos[i].costo <= 0 || casos[i].cobertura <= 0 || casos[i].ciudad=="-")
        {
            archivo<<"Numero Caso: "
            <<casos[i].numeroCaso<<endl;
        }
    }

    archivo.close();
    cout<<"Archivo errores generado"<<endl;
}

// ===== MAIN =====
int main()
{
    Siniestro casos[100];
    int cantidad = 0;
    cargarArchivo(casos,cantidad);
    int opcion;

    do
    {
        cout << "===== MENU =====" << endl;
        cout << "1 - Mostrar casos por ciudad" << endl;
        cout << "2 - Cantidad de casos por ciudad" << endl;
        cout << "3 - Mostrar casos con errores" << endl;
        cout <<"4 - Generar liquidacion" << endl;
        cout << "5 - Generar archivo errores" << endl;
        cout << "6 - Salir" << endl;
        cout << "Ingrese opcion: ";
        cin >> opcion;

        if (opcion >= 1 && opcion <= 6){
        
            switch(opcion)
            {
                case 1:
                {
                    string ciudad;

                    cout << "Ingrese ciudad: ";
                    cin >> ciudad;
                    mostrarPorCiudad(casos,cantidad,ciudad);
                    break;
                }
            
                case 2:
                    contarCiudad(casos,cantidad);
                    break;
             
                case 3:
                    mostrarErrores(casos,cantidad);
                    break;
            
                case 4:
                    generarLiquidacion(casos,cantidad);
                    break;

                case 5:
                    generarErrores(casos,cantidad);
                    break;

                case 6:
                    cout<<"Fin del programa"<<endl;
                    break; 
                }

        }  else {
            cout << "Opcion incorrecta" << endl;
        }

    } while (opcion != 6);
    return 0;
}