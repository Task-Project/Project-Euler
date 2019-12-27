#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int next_prime(int n)
{
    int i, x = n;
    do {
        x++;
        i = 2;
        while (i <= sqrt(x) && x % i != 0)
            i++;
    } while (x % i == 0);
    return x;
}

int main()
{
    int i = 1, p, sqare, x;
    do {
        p = 2; sqare = 0; x = 0; i += 2;
        do {
            if (p + sqare < i)
                x++;
            else {
                x = 0;
                p = next_prime(p);
            }
            sqare = 2 * (x * x);
        } while (p + sqare != i && p < i);
    } while (p + sqare == i);
    cout << i;
}
