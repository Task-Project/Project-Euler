#include <iostream>
#include <math.h>
using namespace std;

int main() {
    long long amic = 0, x, d1, d2;
    for (int i = 2; i < 10000; i++) {
        x = i;
        d2 = 1;
        d1 = 1;
        for (int j = 2; j <= sqrt(x); j++) {
            if (x % j == 0) {
                if (x / j == j)
                    d1 += j;
                else {
                    d1 += j;
                    d1 += x / j;
                }
            }
        }
        for (int j = 2; j <= sqrt(d1); j++) {
            if (d1 % j == 0) {
                if (d1 / j == j)
                    d2 += j;
                else {
                    d2 += j;
                    d2 += d1 / j;
                }
            }
        }
        if (d2 == x && x != d1) amic = amic + x;
    }
    cout << amic;
}
