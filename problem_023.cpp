#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#define max 28123
using namespace std;

vector<int> ab;

void find_abundant() {
    int d;
    for (int i = 1; i <= max; i++) {
        d = 0;
        for (int j = 1; j <= sqrt(i); j++) {
            if (i % j == 0) {
                if (i / j == j)
                    d += j;
                else {
                    d += j;
                    d += i / j;
                }
            }
        }
        d -= i;
        if (d > i)
            ab.push_back(i);
    }
}

int main() {
    long long x = 1, j, sum = (max * (max + 1)) / 2;
    find_abundant();
    for (int i = 1; i <= max; i++) {
        j = 0;
        while (i > ab[j] && !binary_search(ab.begin(), ab.end(), i - ab[j]))
            j++;
        if (i > ab[j])
            sum -= i;
    }
    cout << sum;
}
