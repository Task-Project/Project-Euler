#include <iostream>
using namespace std;

int main() {
    int f, f1 = 1, f2 = 1, sum = 0;
    while (f < 4000000) {
        f = f1 + f2;
        if (f % 2 == 0) sum += f;
        f2 = f1;
        f1 = f;
    }
    cout << sum;
}
