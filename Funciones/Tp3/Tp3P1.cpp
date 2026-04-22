#include <iostream>
using namespace std;

void mensaje (string mens);

int main ()
{
    string mens;
    cout << "Ingrese un mensaje" << endl;
    cin >> mens;
    mensaje (mens); 
    return 0;
}

void mensaje (string mens)
{
    cout << "*************************************************************" << endl;
    cout << "                          " << (mens) << "                       " << endl;
    cout << "*************************************************************" << endl;
}