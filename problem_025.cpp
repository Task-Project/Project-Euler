#include <iostream>
#define max 1000
using namespace std;

int main() {
    int fn[max] = { 0 }, f1[max] = { 0 }, f2[max] = { 0 }, f = 2;
    f1[0] = 1;
    f2[0] = 1;
    while (f1[max - 1] == 0) {
        for (int i = 0; i < max; i++) {
            fn[i] += f1[i] + f2[i];
            if (fn[i] > 9) {
                fn[i + 1] += fn[i] / 10;
                fn[i] = fn[i] % 10;
            }
        }
        for (int i = 0; i < max; i++) {
            f2[i] = f1[i];
            f1[i] = fn[i];
            fn[i] = 0;
        }
        f++;
    }
    cout << f;
}
