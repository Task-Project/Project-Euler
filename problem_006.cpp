#include <iostream>
using namespace std;

int main() {
    long long x1 = 100, x2 = 100;
    x1 = x1 * (x1 + 1) * (2 * x1 + 1) / 6;
    x2 = (((x2 * (x2 + 1)) / 2)) * ((x2 * (x2 + 1)) / 2);
    x2 -= x1;
    cout << x2;
}
