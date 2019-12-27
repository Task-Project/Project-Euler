#include <iostream>
using namespace std;

int main()
{
    long long unsigned vet1[101], vet2[101];
    int g, n, c = 0;
    for (int g = 2; g <= 101; g++) {
        for (int i = 0; i < g; i++) {
            vet1[i] = 0;
            vet2[i] = 0;
        }
        vet1[0] = 1;
        vet2[0] = 1;
        for (int i = 1; i < g; i++) {
            for (int j = 1; j < g; j++) {
                vet2[j] = vet1[j] + vet1[j - 1];
            }
            for (int j = 1; j < g; j++) {
                vet1[j] = vet2[j];
            }
        }
        for (int i = 0; i < g; i++) {
            if (vet2[i] > 1000000) {
                c++;
            }
        }
    }
    cout << c;
}
