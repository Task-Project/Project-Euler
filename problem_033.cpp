#include <iostream>
using namespace std;

int main() {
    float a,b,c,n,d,pr = 1.0;
    for (a = 1.0; a <= 9.0; a++) {
        for (b = a; b <= 9.0; b++) {
            n = (10.0 * a) + b;
            for (c = 1.0; c <= 9; c++) {
                d = (10 * b) + c;
                if (n < d && (n / d == a / c))
                    pr *= (c / a);
            }
        }
    }
    cout << pr;
}
