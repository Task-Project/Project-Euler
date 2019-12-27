#include <iostream>
#include <math.h>
using namespace std;

bool is_prime(long long unsigned n)
{
    long long j = 2;
    while (j < sqrt(n) && n % j != 0)
        j++;
    return n % j != 0;
}

int main()
{
    int x = 1, inc = 2, tot = 1, c = 0;
    do {
        for (int j = 0; j < 4; j++) {
            x += inc;
            if (is_prime(x))
                c++;
        }
        tot += 4;
        inc += 2;
    } while ((double)(c * 100) / tot > 10.0);
    cout << tot / 2 + 1;
}
