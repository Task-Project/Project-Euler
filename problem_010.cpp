#include <iostream>
#include <math.h>
using namespace std;

bool isprime(int n) {
    int j = 2;
    while (j <= sqrt(n) && n % j != 0) {j++;}
    if (n % j != 0) return true;
    return false;
}

int main() {
    long long sum = 2;
    for (int i = 3; i < 2000000; i += 2) {
        if (isprime(i)) sum += i;
    }
    cout << sum;
}
