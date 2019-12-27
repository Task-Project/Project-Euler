#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;

string x, y;

void intostringx(long long n)
{
    stringstream ss;
    ss << n;
    x = ss.str();
    sort(x.begin(), x.end());
}

void intostringy(long long n)
{
    stringstream ss;
    ss << n;
    y = ss.str();
    sort(y.begin(), y.end());
}

int main()
{
    int trg = 5, c;
    long long unsigned i = 1, j, a, b;
    do {
        c = 1;
        j = i;
        a = i * i * i;
        intostringx(a);
        do {
            j++;
            b = j * j * j;
            intostringy(b);
            if (x == y)
                c++;
        } while (x.length() == y.length());
        i++;
    } while (c != trg);
    cout << a;
}
