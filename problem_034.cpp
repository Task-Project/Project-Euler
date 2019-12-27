#include <iostream>
using namespace std;

int fat(int x) {
    if (x <= 1)
        return 1;

    for (int i = x - 1; i > 0; i--) {
        x = x * i;
    }
    return x;
}

int main() {
    int n = 1, y, somma = 0, ft;
    long long unsigned x, c = 1, cc = 10;
    
    for (x = 3; x < 1000000; x++) {
        ft = 0;
        c = cc / 10;
        for (int i = 0; i < n; i++) {
            y = x / c % 10;
            ft = ft + fat(y);
            c = c / 10;
        }
        if (x == ft)
            somma = somma + x;

        if ((x + 1) % cc == 0) {
            n++;
            cc = cc * 10;
        }
    }
    cout << somma;
}
