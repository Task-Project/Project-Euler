#include <iostream>
using namespace std;

int main() {
    long long n, c;
    for (int a = 1; a < 1000; a++) {
        for (int b = a + 1; b < 1000; b++) {
            c = 1000 - (a + b);
            if ((a * a) + (b * b) == (c * c)) n = a * b * c;
        }
    }
    cout << n;
}
