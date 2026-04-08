#include <iostream>
#include <cmath>
using namespace std;

int suma (int sa, int sb);
int resta (int ra, int rb);
double multi (double ma, double mb);
float div (float da, float db);
double pot (double pa, double pb);

int main()
{
    int sa = 7;
    int sb = 10;
    int sr = 0;
    sr = suma(sa,sb);
    cout << sr << endl;

    int ra = 8;
    int rb = 9;
    int rr = 0;
    rr = resta (ra, rb);
    cout << rr << endl;

    double ma = 9;
    double mb = 10;
    double mr = 0;
    mr = multi (ma, mb);
    cout << mr << endl;

    float da = 10;
    float db = 10;
    float dr = 0;
    dr = div (da, db);
    cout << dr << endl;

    double pa = 2;
    double pb = 4;
    double pr = 0;
    pr = pow(pa, pb);
    cout << pr << endl;

    return 0;
}

int suma (int sa, int sb)
{
    return sa+sb;
}

int resta (int ra, int rb)
{
    return ra-rb;
}

double multi (double ma, double mb)
{
    return ma*mb;
}

float div (float da, float db)
{
    return da/db;
}

double pot (double pa, double pb)
{
    return pow(pa, pb);
}