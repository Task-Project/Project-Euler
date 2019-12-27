#include <iostream>
#define mod 10000000000
using namespace std;

int main()
{
    long long sum = 0, n;
    for (int i = 1; i <= 1000; i++) {
        n = i;
        for (int j = 1; j < i; j++)
            n = (n * i) % mod;
        sum = (sum + n) % mod;
    }
    cout << sum;
}
