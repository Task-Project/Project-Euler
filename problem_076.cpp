#include <iostream>
using namespace std;

int conta(int vet[], int g, int n)
{
    int memo[n + 1];
    for (int i = 0; i < n + 1; i++)
        memo[i] = 0;
    memo[0] = 1;

    for (int i = 0; i < g; i++) {
        for (int j = vet[i]; j <= n; j++) {
            memo[j] += memo[j - vet[i]];
        }
    }
    return memo[n];
}

int main()
{
    int n = 100;
    int vet[n - 1];
    for (int i = 0; i < n - 1; i++)
        vet[i] = i + 1;
    cout << conta(vet, n - 1, n);
}
