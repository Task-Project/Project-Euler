#include <iostream>
#include <math.h>
using namespace std;

int count_divisors(long long n) {
    int c = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (n / i == i) c++;
            else c += 2;
        }
    }
    return c;
}

int main() {
    long long sum, i = 0;
    do {
        i++;
        sum = (i * (i + 1)) / 2;
    } while (count_divisors(sum) < 500);
    cout << sum;
}
