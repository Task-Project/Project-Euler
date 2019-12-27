#include <iostream>
#include <math.h>
using namespace std;

bool is_prime(int n)
{
	int i = 2;
    if (n == 2)
        return true;
    while (i <= sqrt(n) && n % i != 0)
        i++;
    if (n % i != 0)
        return true;
    else
        return false;
}

bool is_circular(int n) 
{
    int l = log10(n), pi;
    for (int i = 0; i < l; i++) {
        pi = 0;
        pi += (n % 10) * pow(10, l);
        pi += n / 10;
        n = pi;
        if (!is_prime(n))
            return false;
    }
    return true;
}

int main() {
    int c = 0;
    for (int i = 2; i < 1000000; i++)
        if (is_prime(i))
            if (is_circular(i))
                c++;
    cout << c;
}
