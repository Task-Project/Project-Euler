#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

int vet[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, m1, m2;

int molt1()
{
    m1 = vet[0];
    m2 = (vet[1] * 1000) + (vet[2] * 100) + (vet[3] * 10) + (vet[4]);
    return m1 * m2;
}

int molt2()
{
    m1 = (vet[0] * 10) + (vet[1]);
    m2 = (vet[2] * 100) + (vet[3] * 10) + (vet[4]);
    return m1 * m2;
}

int molt3()
{
    m1 = (vet[0] * 100) + (vet[1] * 10) + (vet[2]);
    m2 = (vet[3] * 10) + (vet[4]);
    return m1 * m2;
}

int molt4()
{
    m1 = (vet[0] * 1000) + (vet[1] * 100) + (vet[2] * 10) + (vet[3]);
    m2 = vet[4];
    return m1 * m2;
}

int main()
{
    int p, molt[18] = { 0 }, f = 0, c = 0;
    long long prod = 0;
    for (int i = 0; i < 362880; i++) {
        p = (vet[5] * 1000) + (vet[6] * 100) + (vet[7] * 10) + (vet[8]);
        if (molt1() == p) {
            for (int i = 0; i < 18; i++) {
                if (molt[i] == p)
                    f = 1;
            }
            if (f == 0) {
                molt[c] = p;
                c++;
            }
        }
        else if (molt2() == p) {
            for (int i = 0; i < 18; i++) {
                if (molt[i] == p)
                    f = 1;
            }
            if (f == 0) {
                molt[c] = p;
                c++;
            }
        }
        else if (molt3() == p) {
            for (int i = 0; i < 18; i++) {
                if (molt[i] == p)
                    f = 1;
            }
            if (f == 0) {
                molt[c] = p;
                c++;
            }
        }
        else if (molt4() == p) {
            for (int i = 0; i < 18; i++) {
                if (molt[i] == p)
                    f = 1;
            }
            if (f == 0) {
                molt[c] = p;
                c++;
            }
        }
        f = 0;
        next_permutation(vet, vet + 9);
    }
    for (int i = 0; i < 18; i++) {
        prod = prod + molt[i];
    }
    cout << prod;
}
