#include <iostream>
using namespace std;

int main() {
    int n = 40, k = 20;
    n++;
    long long unsigned vet1[n] = { 0 }, vet2[n] = { 0 };
    vet1[0] = 1;
    vet2[0] = 1;
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) vet2[j] = vet1[j] + vet1[j - 1];
        for (int j = 1; j < n; j++) vet1[j] = vet2[j];
    }
    cout << vet2[k];
}
