#include <iostream>
#define g 1000
using namespace std;

int num[g], den[g], n[g], temp[g], vettorE[g];

void fillE()
{
    for (int i = 0; i < 1000; i++) {
        vettorE[i] = 1;
    }
    vettorE[0] = 2;
    vettorE[1] = 1;
    int x = 2;
    for (int i = 2; i < 100; i += 3) {
        vettorE[i] = x;
        x += 2;
    }
}

void azzera()
{
    for (int i = 0; i < g; i++) {
        num[i] = 0;
        den[i] = 0;
        temp[i] = 0;
        n[i] = 0;
    }
}

void somma1(int ps)
{
    for (int z = 0; z < g; z++)
        n[z] = 0;
    for (int i = 0; i < g; i++) {
        n[i] = n[i] + (den[i] * vettorE[ps]);
        if (n[i] > 9) {
            n[i + 1] = n[i + 1] + (n[i] / 10);
            n[i] = n[i] % 10;
        }
    }
}

void somma2()
{
    for (int z = 0; z < g; z++)
        temp[z] = 0;
    for (int i = 0; i < g; i++) {
        temp[i] = temp[i] + num[i] + n[i];
        if (temp[i] > 9) {
            temp[i + 1] = temp[i + 1] + (temp[i] / 10 % 10);
            temp[i] = temp[i] % 10;
        }
    }
}

void e(int a)
{
    azzera();
    num[0] = 1;
    den[0] = vettorE[a - 1];
    for (int i = a - 2; i >= 0; i--) {
        somma1(i);
        somma2();
        for (int j = 0; j < g; j++) {
            num[j] = den[j];
            den[j] = temp[j];
        }
    }
}

int main()
{
    int trg, somma = 0;
    fillE();
    e(100);
    for (int i = 0; i < 1000; i++)
        somma += den[i];
    cout << somma;
}
