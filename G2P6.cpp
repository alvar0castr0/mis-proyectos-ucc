#include <iostream> 
using namespace std; 

int main (){ 
    int tabla;
    cout << "ingrese la tabla de que numeor quiere trabajar" << endl;
    cin >> tabla; 

    for (int i=1; i <= 10;i++) {
        cout << tabla << "x" <<  i << "=" << tabla * i << endl;
    }

    return 0; 

}