#include <iostream>
#include <fstream>
#define n 1000
using namespace std;
ifstream in("input.txt");

int main() {
    int vet[n];
    long long prod, max = 0;
    char c;
    for (int i = 0; i < n; i++) {
        in >> c;
        vet[i] = c - 48;
    }
    for (int i = 0; i < n - 13; i++) {
        prod = 1;
        for (int j = 0; j < 13; j++) {
            prod *= vet[i + j];
        }
        if (prod > max) max = prod;
    }
    cout << max;
}
