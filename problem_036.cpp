#include <iostream>
#include <vector>
using namespace std;

int reverse(int n)
{
    int digit, x = 0;
    while (n > 9) {
        digit = n % 10;
        x += digit;
        x *= 10;
        n /= 10;
    }
    return x + n;
}

bool binary(int x)
{
    vector<int> bin;
    do {
        bin.push_back(x % 2);
        x /= 2;
    } while (x != 0);
    for (int i = 0; i < bin.size() / 2; i++)
        if (bin[i] != bin[bin.size() - (i + 1)])
            return false;
    return true;
}

int main()
{
    int sum = 0;
    for (int i = 1; i < 1000000; i++)
        if (i % 2 == 1)
            if (i == reverse(i) && binary(i))
                sum += i;
    cout << sum;
}
