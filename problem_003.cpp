#include <iostream>
using namespace std;

int main() {
    long long n = 600851475143, j = 2;
    while (n != 1) {
        if (n % j == 0) n /= j;
        else j++;
    }
    cout << j--;
}
