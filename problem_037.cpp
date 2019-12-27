#include <iostream>
#include <math.h>
using namespace std;

bool is_prime(int n)
{
    if (n == 1)
        return false;
    if (n == 2)
        return true;
    int i = 2;
    while (i <= sqrt(n) && n % i != 0)
        i++;
    if (n % i != 0)
        return true;
    return false;
}

bool isprime_left(int n)
{
    int l = log10(n), p;
    while (n > 9) {
        p = pow(10, l);
        n %= p;
        l--;
        if (!is_prime(n))
            return false;
    }
    return true;
}

bool isprime_right(int n)
{
    while (n > 9) {
        n /= 10;
        if (!is_prime(n))
            return false;
    }
    return true;
}

int main()
{
    int c = 0, sum = 0;
    for (int i = 10; c < 11; i++)
        if (is_prime(i))
            if (isprime_left(i) && isprime_right(i)) {
                c++;
                sum += i;
            }
    cout << sum;
}
