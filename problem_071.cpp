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
    long long d = 1, n = 1, minn, mind;
    double cost = (3 * 1.0) / (7 * 1.0), r;
    do {
        r = (n * 1.0) / (d * 1.0);
        if (r > cost)
            d++;
        else
            n++;
        if (MCD(d, n) == 1 && (n * 1.0) / (d * 1.0) < cost) {
            minn = n;
            mind = d;
        }
    } while (d < 999999);
    cout << minn;
}
