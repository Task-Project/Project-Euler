#include <iostream>
using namespace std;

long long reverse(long long n)
{
    long long x = 0;
    n = abs(n);
    while (n > 9) {
        x += (n % 10);
        x *= 10;
        n /= 10;
    }
    x += n;
    return x;
}

bool is_palindrome(long long n)
{
    long long x = 0, y;
    n = abs(n);
    y = n;
    while (n > 9) {
        x += (n % 10);
        x *= 10;
        n /= 10;
    }
    x += n;
    return x == y;
}

int main()
{
    int Lychrel = 0, c;
    long long x, y, p;
    for (int i = 1; i <= 10000; i++) {
        p = i;
        c = 0;
        do {
            x = p;
            y = reverse(x);
            p = x + y;
            c++;
        } while (c < 50 && !is_palindrome(p));
        if (c == 50)
            Lychrel++;
    }
    cout << Lychrel;
}
