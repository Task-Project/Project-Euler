#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;

vector<int> p;

void load()
{
    int i, j;
    p.push_back(2);
    for (i = 3; i < 1000000; i++) {
        j = 2;
        while (j <= sqrt(i) && i % j != 0)
            j++;
        if (i % j != 0)
            p.push_back(i);
    }
}

int main()
{
    load();
    int sum, maxseq = 0, x;
    for (int i = 0; i < 4; i++) {
        sum = 0;
        for (int j = i; p[j] + sum < 1000000; j++) {
            sum += p[j];
            if (binary_search(p.begin(), p.end(), sum) && j - i > maxseq) {
                maxseq = j - i;
                x = sum;
            }
        }
    }
    cout << x;
}
