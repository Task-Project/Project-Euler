#include <iostream>
using namespace std;

int main() {
    int lmax = 0, x = 0, c;
    long long unsigned j;
    for (int i = 1; i <= 1000000; i++) {
        j = i;
        c = 1;
        while (j != 1) {
            c++;
            if (c > x) {
                x = c;
                lmax = i;
            }
            if (j % 2 == 0) j /= 2;
            else j = 3 * j + 1;
        }
    }
    cout << lmax;
}
