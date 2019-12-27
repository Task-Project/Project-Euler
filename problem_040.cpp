#include <iostream>
#include <sstream>
using namespace std;

string sx;

void int_to_string(int n)
{
    stringstream ss;
    ss << n;
    sx = ss.str();
}

int main()
{
    string s;
    for (int i = 1; s.length() < 1000000; i++) {
        int_to_string(i);
        s += sx;
    }
    int prd = 1;
    for (int i = 1; i < 1000000; i *= 10)
        prd *= s[i - 1] - 48;
    cout << prd;
}
