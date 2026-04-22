#include <iostream>
using namespace std;    

double cubo (double ca)
{
    return ca*ca*ca;
}

int main ()
{
    double ca = 8.5;
    double cr = 0;
    cr = cubo (ca);
    cout << cr << endl;

    return 0;
}