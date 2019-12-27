#include <iostream>
#include <cstdlib>
#include <vector>
#define g 6
using namespace std;

vector<int> vet[g];
int pivot;
bool memi[g];
vector<bool> memij[g];
vector<int> chain;

void load()
{
    int n, x;
    n = 1;
    //Triangle
    do {
        x = (n * (n + 1)) / 2;
        if (x > 999 && x < 10000)
            vet[0].push_back(x);
        n++;
    } while (x < 10000);
    n = 1;
    //Square
    do {
        x = n * n;
        if (x > 999 && x < 10000)
            vet[1].push_back(x);
        n++;
    } while (x < 10000);
    n = 1;
    //Pentagonal
    do {
        x = (n * ((3 * n) - 1)) / 2;
        if (x > 999 && x < 10000)
            vet[2].push_back(x);
        n++;
    } while (x < 10000);
    n = 1;
    //Hexagonal
    do {
        x = n * ((2 * n) - 1);
        if (x > 999 && x < 10000)
            vet[3].push_back(x);
        n++;
    } while (x < 10000);
    n = 1;
    //Heptagonal
    do {
        x = (n * ((5 * n) - 3)) / 2;
        if (x > 999 && x < 10000)
            vet[4].push_back(x);
        n++;
    } while (x < 10000);
    n = 1;
    //Octagonal
    do {
        x = n * ((3 * n) - 2);
        if (x > 999 && x < 10000)
            vet[5].push_back(x);
        n++;
    } while (x < 10000);
}

void clear_memij()
{
    for (int i = 0; i < g; i++) {
        memij[i].resize(vet[i].size());
        for (int j = 0; j < vet[i].size(); j++) {
            memij[i][j] = 0;
        }
    }
    for (int i = 0; i < g; i++)
        memi[i] = 0;
    memi[0] = 1;
}

void clear_memi()
{
    for (int i = 0; i < g; i++)
        memi[i] = 0;
}

int main()
{
    int f, somma = 0;
    load();
    for (int q = 0; q < g; q++) {
        for (int k = 0; k < vet[q].size(); k++) {
            clear_memij();
            chain.clear();
            do {
                chain.clear();
                pivot = vet[q][k];
                chain.push_back(pivot);
                clear_memi();
                memi[q] = 1;
                do {
                    f = 0;
                    for (int i = 0; i < g; i++) {
                        if (!memi[i]) {
                            for (int j = 0; j < vet[i].size(); j++) {
                                if (pivot % 100 == vet[i][j] / 100 && pivot != vet[i][j] && memij[i][j] == 0) {
                                    f = 1;
                                    memij[i][j] = 1;
                                    pivot = vet[i][j];
                                    memi[i] = 1;
                                    chain.push_back(pivot);
                                    break;
                                }
                            }
                        }
                    }
                } while (f == 1);
                if (chain.size() == 6 && chain[5] % 100 == chain[0] / 100) {
                    for (int i = 0; i < g; i++)
                        somma += chain[i];
                }
            } while (chain.size() > 1);
        }
    }
    cout << somma;
}
