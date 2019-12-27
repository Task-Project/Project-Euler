#include <iostream>
using namespace std;

int main() {
    int n, d1, d2, c, max = 0;
    for (int i = 900; i < 1000; i++) {
        for (int j = 900; j < 1000; j++) {
            n = i * j;
            d1 = 100000;
            d2 = 1;
            c = 0;
            while (((n / d1) % 10) == ((n / d2) % 10) && c < 3) {
                c++;
                d1 /= 10;
                d2 *= 10;
            }
            if (c == 3 && n > max) max = n;
        }
    }
    cout << max;
}
