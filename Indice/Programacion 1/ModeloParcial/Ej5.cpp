// Ejercicio 5:
// Ingresar los datos de N empleados: nombre, horas trabajadas y valor por hora.
// Calcular el sueldo bruto de cada uno (horas * valorHora) y aplicar descuento por impuesto:
//   - Sueldo > 5000  : 15% de descuento
//   - 2000 a 5000    : 10% de descuento
//   - Menos de 2000  : sin descuento
// Usar una funcion "calcularNeto(double bruto)" que devuelva el sueldo neto.
// Mostrar el sueldo neto de cada empleado.
// Al finalizar mostrar: empleado con mayor sueldo neto, empleado con menor sueldo neto,
// y el total que paga la empresa.

#include <iostream>
using namespace std;

double calcularNeto(double bruto);

int main()
{
    int n;
    cout << "Ingrese la cantidad de empleados: ";
    cin >> n;

    string nombres[100];
    double netos[100];
    double totalEmpresa = 0;
    int iMax = 0, iMin = 0;

    for (int i = 0; i < n; i++)
    {
        double horas, valorHora;

        cout << "\n--- Empleado " << i + 1 << " ---" << endl;
        cout << "Nombre: "; cin >> nombres[i];

        do { cout << "Horas trabajadas: "; cin >> horas; } while (horas < 0);
        do { cout << "Valor por hora $: "; cin >> valorHora; } while (valorHora < 0);

        double bruto = horas * valorHora;
        netos[i] = calcularNeto(bruto);
        totalEmpresa += netos[i];

        cout << "Sueldo bruto: $" << bruto << endl;
        cout << "Sueldo neto : $" << netos[i] << endl;

        if (netos[i] > netos[iMax]) iMax = i;
        if (netos[i] < netos[iMin]) iMin = i;
    }

    cout << "\n--- Resumen ---" << endl;
    cout << "Mayor sueldo neto: " << nombres[iMax] << " ($" << netos[iMax] << ")" << endl;
    cout << "Menor sueldo neto: " << nombres[iMin] << " ($" << netos[iMin] << ")" << endl;
    cout << "Total a pagar    : $" << totalEmpresa << endl;

    return 0;
}

double calcularNeto(double bruto)
{
    if (bruto > 5000) return bruto * 0.85;
    if (bruto >= 2000) return bruto * 0.90;
    return bruto;
}
