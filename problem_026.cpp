#include <iostream>
using namespace std;

int main() {
    int a = 1, b, c, f = 0, cont = 0, vet[1000] = { 0 }, s = 0, max = 0;
    for (int b = 2; b < 1000; b++) {
        while (f == 0 && cont < 1000) {
            c = a / b;
            a = a - (b * c);
            if (a == 0) {
                cont++;
                break;
            }
            if (s == 0)
                s++;
            else {
                for (int q = 0; q < cont; q++) {
                    if (vet[q] == a)
                        f = 1;
                }
                vet[cont] = a;
                cont++;
            }
            a = a * 10;
        }
        if (cont > max)
            max = cont;
        for (int i = 0; i < 1000; i++)
            vet[i] = 0;
        cont = 0;
        s = 0;
        f = 0;
        a = 1;
    }
    cout << max;
}
