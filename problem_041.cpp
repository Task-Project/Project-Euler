#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;

string s;

int fact(int n)
{
    int f = n;
    for (int i = 2; i < n; i++)
        f *= i;
    return f;
}

bool is_prime(int n)
{
    int i = 2;
    while (i <= sqrt(n) && n % i != 0)
        i++;
    if (n % i != 0)
        return true;
    return false;
}

int main()
{
    vector<int> v;
    int x, max = 0, n;
    for (int i = 1; i <= 9; i++) {
        v.push_back(i);
        sort(v.begin(), v.end());
        n = 0;
        do {
            prev_permutation(v.begin(), v.end());
            x = 0;
            for (int j = 0; j < i; j++)
                x += v[j] * pow(10, (i - (j + 1)));
            n++;
        } while (!is_prime(x) && n < fact(i));
        if (x > max && n != fact(i))
            max = x;
    }
    cout << max;
}
