#include <iostream>
#include <math.h>
using namespace std;

bool isprime(int n)
{
    int j = 2;
    while (j <= sqrt(n) && n % j != 0) {j++;}
    if (n % j != 0) return true;
    return false;
}

int main()
{
    int c = 0, i = 2;
    while (c < 10000) {
        i++;
        if (isprime(i)) c++;
    }
    cout << i;
}
