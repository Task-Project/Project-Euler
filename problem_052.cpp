#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;

string s1, s2;

bool comp(int n)
{
    stringstream ss;
    ss << n;
    s2 = ss.str();
    sort(s2.begin(), s2.end());
    return s1 == s2;
}

int main()
{
    int n;
    for (n = 10;; n++) {
        stringstream ss;
        ss << n;
        s1 = ss.str();
        sort(s1.begin(), s1.end());
        for (int i = 2; i <= 6; i++) {
            if (!comp(i * n))
                break;
        }
        if (s1 == s2)
            break;
    }
    cout << n;
}
