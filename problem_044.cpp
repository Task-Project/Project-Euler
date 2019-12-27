#include <iostream>
#include <math.h>
using namespace std;

bool is_pentagonal(unsigned long n)
{
    unsigned long d = 24 * n + 1, s = sqrt(d);
    return ((s + 1) % 6 == 0) && (s * s == d);
}

int main()
{
    unsigned long dmin = 999999999;
    unsigned long pk = 5, pj;
    for (int i = 2; 3 * i - 2 < dmin; pk += 3 * (i++) + 1) {
        pj = pk - 3 * i + 2;
        for (int j = i - 1; j > 0 && pk - pj < dmin; pj -= 3 * (j--) - 2)
            if (is_pentagonal(pk - pj) && is_pentagonal(pk + pj))
                dmin = pk - pj;
    }
    cout << dmin;
}
