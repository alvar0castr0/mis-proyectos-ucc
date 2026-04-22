#include <iostream>
using namespace std;

int menor (int a, int b);

int main ()
{
    int a, b; 
    cout << "ingrese un numero" << endl;
    cin >> a;
    cout << "ingrese un numero" << endl;
    cin >> b;

    int r = menor (a, b);
    cout << r;
}

int menor (int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else  
    { 
        return b; 
    }

}