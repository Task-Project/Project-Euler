#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

vector<int> p;
vector<int> memo;

void load()
{
    int i;
    for (int n = 100000; n < 1000000; n++) {
        i = 2;
        while (i <= sqrt(n) && n % i != 0)
            i++;
        if (n % i != 0)
            p.push_back(n);
    }
}

int next_number(int n, int trg, int perm)
{
    int l, px;
    for (int x = 0; perm != 0; x++) {
        if (perm % 2 == 1) {
            px = pow(10, x);
            l = (trg / px) % 10;
            trg = trg - (l * px) + n * px;
        }
        perm /= 2;
    }
    return trg;
}

int main()
{
    load();
    int x, i;
    for (i = 0; memo.size() != 8; i++) {
        for (int a = 1; a <= 63; a++) {
            memo.clear();
            for (int digit = 0; digit <= 9; digit++) {
                x = next_number(digit, p[i], a);
                if (binary_search(p.begin(), p.end(), x))
                    memo.push_back(x);
                if (memo.size() == digit - 3)
                    break;
            }
            if (memo.size() == 8)
                break;
        }
    }
    cout << memo[0];
}
