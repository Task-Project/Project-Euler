#include <iostream>
using namespace std;

int MCD(long long x, long long y)
{
    long long m;
    while (y > 0) {
        m = x % y;
        x = y;
        y = m;
    }
    return x;
}

int main()
{
    int c = 0;
    double costmin = (1 * 1.0) / (3 * 1.0), costmax = (1 * 1.0) / (2 * 1.0), q;
    for (int n = 1; n < 12000; n++) {
        for (int d = n + 1; d <= 12000; d++) {
            q = (n * 1.0) / (d * 1.0);
            if (q > costmin && q < costmax) {
                if (MCD(d, n) == 1)
                    c++;
            }
        }
    }
    cout << c;
}
