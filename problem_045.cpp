#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long hex, pen, tri, i = 144;
    double p, t;
    do {
        hex = i * ((i * 2) - 1);
        t = (-1 + sqrt(1 + (4 * (hex * 2)))) / 2;
        p = (1 + sqrt(1 + (12 * (hex * 2)))) / 6;
        i++;
    } while ((int)t != t || (int)p != p);
    cout << hex;
}
