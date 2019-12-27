#include <iostream>
#define g 1000000
using namespace std;

int main()
{
    int* phi = new int[g + 1];
    for (int i = 0; i < g + 1; i++)
        phi[i] = i;
    for (int i = 2; i <= g; i++) {
        if (phi[i] == i)
            for (int k = 1; k * i <= g; k++)
                phi[k * i] -= phi[k * i] / i;
    }
    long long* sums = new long long[g + 1];
    for (int i = 2; i <= g; i++) {
        sums[i] = sums[i - 1] + phi[i];
    }
    cout << sums[g];
}
