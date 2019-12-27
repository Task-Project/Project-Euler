#include <iostream>
#include <math.h>
using namespace std;

bool is_prime(int n) {
    if (n == 2) return true;
    int i = 2;
    while (n % i != 0 && i <= sqrt(n)) i++;
    if (n % i != 0) return true;
    return false;
}

int main() {
    int max = 0, prod, x, n;
    for (int b = -999; b <= 1000; b += 2) {
        if (is_prime(abs(b))) {
            for (int a = -1000; a < 1000; a++) {
                n = 0;
                do {
                    n++;
                    x = (n * n) + (a * n) + b;
                } while (is_prime(abs(x)));
                if (n > max) {
                    max = n;
                    prod = b * a;
                }
            }
        }
    }
    cout << prod;
}
