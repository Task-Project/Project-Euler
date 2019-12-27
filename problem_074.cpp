#include <iostream>
#include <set>
using namespace std;

int factorial(int x)
{
    int n = 1;
    if (x == 0 || x == 1)
        return 1;
    for (int i = 1; i <= x; i++) {
        n = n * i;
    }
    return n;
}

int sumdigitfact(int n)
{
    int r = 0;
    while (n > 9) {
        r += factorial(n % 10);
        n /= 10;
    }
    r += factorial(n);
    return r;
}

int startchain(int n)
{
    int l, x, c = 1;
    set<int> st;
    st.insert(n);
    do {
        l = st.size();
        n = sumdigitfact(n);
        st.insert(n);
    } while (l != st.size());
    return st.size();
}

int main()
{
    int c = 0;
    for (int i = 68; i < 1000000; i++) {
        if (startchain(i) == 60) {
            c++;
        }
    }
    cout << c;
}
